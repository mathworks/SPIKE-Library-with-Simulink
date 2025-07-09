/*
 * File: slapp.h
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

#ifndef slapp_h_
#define slapp_h_
#ifndef slapp_COMMON_INCLUDES_
#define slapp_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* slapp_COMMON_INCLUDES_ */

/*
 * Copyright (c) 2023 Afrel Co., Ltd.
 * All rights reserved
 */
#ifdef __cplusplus

extern "C"
{

#endif

#include <kernel.h>

  /*
   *  タスクの優先度の定義
   */
#define MAIN_PRIORITY                  5                         /* メインタスクの優先度 */

  /*
   * Definitions of Port ID for Serial Adapter
   */
#define SIO_USART_F_PORTID             1
#define SIO_USB_PORTID                 2
#define SIO_BLUETOOTH_PORTID           3
#define SIO_TEST_PORTID                4
#ifndef STACK_SIZE
#define STACK_SIZE                     4096                      /* タスクのスタックサイズ */
#endif                                 /* STACK_SIZE */

  /*
   *  関数のプロトタイプ宣言
   */
#ifndef TOPPERS_MACRO_ONLY

  extern void Main(intptr_t exinf);
  extern void spike_cyc_task_high(intptr_t exinf);
  extern void spike_cyc_task_low(intptr_t exinf);

#endif                                 /* TOPPERS_MACRO_ONLY */

#include <stddef.h>
#include "zero_crossing_types.h"

  /* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

  /* Forward declaration for rtModel */
  typedef struct tag_RTM_slapp_T RT_MODEL_slapp_T;

  /* Block states (default storage) for system '<Root>' */
  typedef struct {
    real_T UnitDelay_DSTATE;           /* '<S48>/Unit Delay' */
    real_T UnitDelay_DSTATE_h;         /* '<S49>/Unit Delay' */
  } DW_slapp_T;

  /* Zero-crossing (trigger) state */
  typedef struct {
    ZCSigState Subsystem_Trig_ZCE;     /* '<S20>/Subsystem' */
  } PrevZCX_slapp_T;

  /* Real-time Model Data Structure */
  struct tag_RTM_slapp_T {
    const char_T * volatile errorStatus;
  };

  /* Block states (default storage) */
  extern DW_slapp_T slapp_DW;

  /* Zero-crossing (trigger) state */
  extern PrevZCX_slapp_T slapp_PrevZCX;

  /* Model entry point functions */
  extern void slapp_initialize(void);

  /* Exported entry point function */
  extern void Task_sync(void);

  /* Real-time Model object */
  extern RT_MODEL_slapp_T *const slapp_M;

  /*-
   * These blocks were eliminated from the model due to optimizations:
   *
   * Block '<S5>/Data Type Conversion' : Unused code path elimination
   * Block '<S5>/Data Type Conversion1' : Unused code path elimination
   * Block '<S42>/Constant' : Unused code path elimination
   * Block '<S42>/Switch' : Unused code path elimination
   * Block '<S46>/Constant' : Unused code path elimination
   * Block '<S19>/Constant' : Unused code path elimination
   * Block '<S19>/Constant1' : Unused code path elimination
   * Block '<S19>/Constant2' : Unused code path elimination
   * Block '<S19>/Constant3' : Unused code path elimination
   */

  /*-
   * The generated code includes comments that allow you to trace directly
   * back to the appropriate location in the model.  The basic format
   * is <system>/block_name, where system is the system number (uniquely
   * assigned by Simulink) and block_name is the name of the block.
   *
   * Use the MATLAB hilite_system command to trace the generated code back
   * to the model.  For example,
   *
   * hilite_system('<S3>')    - opens system 3
   * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
   *
   * Here is the system hierarchy for this model
   *
   * '<Root>' : 'slapp'
   * '<S1>'   : 'slapp/Func_sync'
   * '<S2>'   : 'slapp/Func_sync/Battery'
   * '<S3>'   : 'slapp/Func_sync/Buttons'
   * '<S4>'   : 'slapp/Func_sync/Display'
   * '<S5>'   : 'slapp/Func_sync/Imu'
   * '<S6>'   : 'slapp/Func_sync/Light'
   * '<S7>'   : 'slapp/Func_sync/PortA In'
   * '<S8>'   : 'slapp/Func_sync/PortA Out'
   * '<S9>'   : 'slapp/Func_sync/PortA Out1'
   * '<S10>'  : 'slapp/Func_sync/PortA Out2'
   * '<S11>'  : 'slapp/Func_sync/PortA Out3'
   * '<S12>'  : 'slapp/Func_sync/PortA Out4'
   * '<S13>'  : 'slapp/Func_sync/PortA Out5'
   * '<S14>'  : 'slapp/Func_sync/PortB In'
   * '<S15>'  : 'slapp/Func_sync/PortC In'
   * '<S16>'  : 'slapp/Func_sync/PortD In'
   * '<S17>'  : 'slapp/Func_sync/PortE In'
   * '<S18>'  : 'slapp/Func_sync/PortF In'
   * '<S19>'  : 'slapp/Func_sync/SPIKE_HUB'
   * '<S20>'  : 'slapp/Func_sync/Speaker'
   * '<S21>'  : 'slapp/Func_sync/Display/Subsystem'
   * '<S22>'  : 'slapp/Func_sync/Display/Subsystem/Numerical'
   * '<S23>'  : 'slapp/Func_sync/PortA In/Subsystem'
   * '<S24>'  : 'slapp/Func_sync/PortA In/Subsystem/Force'
   * '<S25>'  : 'slapp/Func_sync/PortA Out/Subsystem'
   * '<S26>'  : 'slapp/Func_sync/PortA Out/Subsystem/None'
   * '<S27>'  : 'slapp/Func_sync/PortA Out1/Subsystem'
   * '<S28>'  : 'slapp/Func_sync/PortA Out1/Subsystem/Motor'
   * '<S29>'  : 'slapp/Func_sync/PortA Out2/Subsystem'
   * '<S30>'  : 'slapp/Func_sync/PortA Out2/Subsystem/Motor'
   * '<S31>'  : 'slapp/Func_sync/PortA Out3/Subsystem'
   * '<S32>'  : 'slapp/Func_sync/PortA Out3/Subsystem/None'
   * '<S33>'  : 'slapp/Func_sync/PortA Out4/Subsystem'
   * '<S34>'  : 'slapp/Func_sync/PortA Out4/Subsystem/None'
   * '<S35>'  : 'slapp/Func_sync/PortA Out5/Subsystem'
   * '<S36>'  : 'slapp/Func_sync/PortA Out5/Subsystem/None'
   * '<S37>'  : 'slapp/Func_sync/PortB In/Subsystem'
   * '<S38>'  : 'slapp/Func_sync/PortB In/Subsystem/Motor'
   * '<S39>'  : 'slapp/Func_sync/PortC In/Subsystem'
   * '<S40>'  : 'slapp/Func_sync/PortC In/Subsystem/Motor'
   * '<S41>'  : 'slapp/Func_sync/PortD In/Subsystem'
   * '<S42>'  : 'slapp/Func_sync/PortD In/Subsystem/Ultrasonic'
   * '<S43>'  : 'slapp/Func_sync/PortE In/Subsystem'
   * '<S44>'  : 'slapp/Func_sync/PortE In/Subsystem/Color'
   * '<S45>'  : 'slapp/Func_sync/PortF In/Subsystem'
   * '<S46>'  : 'slapp/Func_sync/PortF In/Subsystem/None'
   * '<S47>'  : 'slapp/Func_sync/Speaker/Subsystem'
   * '<S48>'  : 'slapp/Func_sync/Speaker/Subsystem1'
   * '<S49>'  : 'slapp/Func_sync/Speaker/Subsystem2'
   * '<S50>'  : 'slapp/Func_sync/Speaker/Subsystem1/Compare To Zero'
   * '<S51>'  : 'slapp/Func_sync/Speaker/Subsystem2/Compare To Zero'
   */
#endif                                 /* slapp_h_ */

  /*
   * File trailer for generated code.
   *
   * [EOF]
   */
