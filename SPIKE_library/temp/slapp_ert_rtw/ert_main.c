/*
 * File: ert_main.c
 *
 * Code generated for Simulink model 'slapp'.
 *
 * Model version                  : 4.89
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Wed Jul  9 12:23:05 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include <stdio.h>
#include "slapp.h"                     /* Model header file */

/* Example use case for call to exported function: Task_sync */
extern void sample_usage_Task_sync(void);
void sample_usage_Task_sync(void)
{
  /* Set task inputs here */

  /* Call to exported function */
  Task_sync();

  /* Read function outputs here */
}

/*
 * The example main function illustrates what is required by your
 * application code to initialize, execute, and terminate the generated code.
 * Attaching exported functions to a real-time clock is target specific.
 */
int_T main(int_T argc, const char *argv[])
{
  /* Unused arguments */
  (void)(argc);
  (void)(argv);

  /* Initialize model */
  slapp_initialize();
  while (rtmGetErrorStatus(slapp_M) == (NULL)) {
    /*  Perform application tasks here. */
  }

  return 0;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
