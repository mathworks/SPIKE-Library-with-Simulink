// SPDX-License-Identifier: MIT
// Copyright (c) 2022 The Pybricks Authors
// Copyright (c) 2022 Embedded and Real-Time Systems Laboratory,
//                    Graduate School of Information Science, Nagoya Univ., JAPAN

#include <pbsys/config.h>

#if PBSYS_CONFIG_SPIKE_RT_MAIN

#include <stdint.h>

#include <pbdrv/reset.h>
#include <pbdrv/usb.h>
#include <pbio/main.h>
#include <pbsys/core.h>
#include <pbsys/main.h>
#include <pbsys/status.h>

#include <pbsys/program_stop.h>
#include <pbsys/bluetooth.h>

void pb_poll(void) {
    while (pbio_do_one_event()) {
    }

    void slp_pybricks(void);
    slp_pybricks();
}

/**
 * Initializes the PBIO library, runs custom main program, and handles shutdown.
 *
 * @param [in]  main    The main program.
 */
int main(int argc, char **argv) {

    pbio_init();
    pbsys_init();
    // Needed to avoid a light animation assert error after a shutdown is requested.
    pbio_stop_all(true);

    // Prepare pbsys for running the program.
    pbsys_status_set(PBIO_PYBRICKS_STATUS_USER_PROGRAM_RUNNING);
    pbsys_bluetooth_rx_set_callback(NULL);
  

    // Keep loading and running user programs until shutdown is requested.
    while (!pbsys_status_test(PBIO_PYBRICKS_STATUS_SHUTDOWN_REQUEST)) {
        // Run Contiki Processes.
        // Get system back in idle state.
        pb_poll();
    }
    
    pbsys_status_clear(PBIO_PYBRICKS_STATUS_USER_PROGRAM_RUNNING);
    pbsys_bluetooth_rx_set_callback(NULL);
    pbio_stop_all(true);

    // Stop system processes and save user data before we shutdown.
    pbsys_deinit();

    // Now lower-level processes may shutdown and/or power off.
    pbsys_status_set(PBIO_PYBRICKS_STATUS_SHUTDOWN);

    // The power could be held on due to someone pressing the center button
    // or USB being plugged in, so we have this loop to keep pumping events
    // to turn off most of the peripherals and keep the battery charger running.
    for (;;) {
        // We must handle all pending events before turning the power off the
        // first time, otherwise the city hub turns itself back on sometimes.
        pb_poll();

        #if PBSYS_CONFIG_BATTERY_CHARGER
        // On hubs with USB battery chargers, we can't turn off power while
        // USB is connected, otherwise it disables the op-amp that provides
        // the battery voltage to the ADC.
        if (pbdrv_usb_get_bcd() != PBDRV_USB_BCD_NONE) {
            continue;
        }
        #endif

        pbdrv_reset_power_off();
    }
}

#endif // PBSYS_CONFIG_SPIKE_RT_MAIN
