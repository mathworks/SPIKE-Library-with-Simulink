// SPDX-License-Identifier: MIT
// Copyright (c) 2019-2022 The Pybricks Authors
// Copyright (c) 2022 Embedded and Real-Time Systems Laboratory,
//            Graduate School of Information Science, Nagoya Univ., JAPAN

#define PBIO_CONFIG_BATTERY                 (1)
#define PBIO_CONFIG_DCMOTOR                 (1)
#define PBIO_CONFIG_DRIVEBASE_SPIKE         (1)
#define PBIO_CONFIG_LIGHT                   (1)
#define PBIO_CONFIG_LOGGER                  (1)
#define PBIO_CONFIG_LIGHT_MATRIX            (1)
#define PBIO_CONFIG_SERVO                   (1)
#define PBIO_CONFIG_SERVO_EV3_NXT           (0)
#define PBIO_CONFIG_SERVO_PUP               (1)
#define PBIO_CONFIG_SERVO_PUP_MOVE_HUB      (0)
#define PBIO_CONFIG_TACHO                   (1)

//#define SPIKE_RT_CONFIG_USE_PORT_F_AS_USER_UART   (1)
//#define SPIKE_RT_CONFIG_USE_PORT_E_AS_USER_UART   (0)

#define PBIO_CONFIG_USE_PORT_F_AS_ASP3_DEBUG_UART  (0)

#define PBIO_CONFIG_UARTDEV                 (1)
#if PBIO_CONFIG_USE_PORT_F_AS_ASP3_DEBUG_UART
#define PBIO_CONFIG_UARTDEV_NUM_DEV         (5)
#else
#define PBIO_CONFIG_UARTDEV_NUM_DEV         (6)
#endif
#define PBIO_CONFIG_UARTDEV_FIRST_PORT      PBIO_PORT_ID_A

#define PBIO_CONFIG_ENABLE_SYS              (1)
