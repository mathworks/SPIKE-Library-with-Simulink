/*
 * File: slapp.c
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

/* SPIKE-RT header includes */
/* Include system header */
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <syssvc/serial.h>
#include <pbsys/status.h>
#include <kernel.h>
#include <spike/hub/system.h>

/* Include PUP header */
#include "spike/pup/motor.h"
#include "spike/pup/colorsensor.h"
#include "spike/pup/forcesensor.h"
#include "spike/pup/ultrasonicsensor.h"

/* Include HUB header */
#include "spike/hub/battery.h"
#include "spike/hub/button.h"
#include "spike/hub/display.h"
#include "spike/hub/imu.h"
#include "spike/hub/light.h"
#include "spike/hub/speaker.h"
#include <spike/hub/bluetooth.h>
#include <pbio/color.h>
#include "slapp.h"
#include "rtwtypes.h"
#include "zero_crossing_types.h"

/* Block states (default storage) */
DW_slapp_T slapp_DW;

/* Previous zero-crossings (trigger) states */
PrevZCX_slapp_T slapp_PrevZCX;

/* Real-time model */
static RT_MODEL_slapp_T slapp_M_;
RT_MODEL_slapp_T *const slapp_M = &slapp_M_;

/* Variable definition of PUP devices */
/* Motors */
pup_motor_t *motorA;
pup_motor_t *motorB;
pup_motor_t *motorC;
pup_motor_t *motorD;
pup_motor_t *motorE;
pup_motor_t *motorF;

/* Colorsensors */
pup_device_t *ColorsensorA;
pup_device_t *ColorsensorB;
pup_device_t *ColorsensorC;
pup_device_t *ColorsensorD;
pup_device_t *ColorsensorE;
pup_device_t *ColorsensorF;

/* Forcesensors */
pup_device_t *ForcesensorA;
pup_device_t *ForcesensorB;
pup_device_t *ForcesensorC;
pup_device_t *ForcesensorD;
pup_device_t *ForcesensorE;
pup_device_t *ForcesensorF;

/* Ultrasensors */
pup_device_t *UltrasonicsensorA;
pup_device_t *UltrasonicsensorB;
pup_device_t *UltrasonicsensorC;
pup_device_t *UltrasonicsensorD;
pup_device_t *UltrasonicsensorE;
pup_device_t *UltrasonicsensorF;

/* Functions declaration */
void Buttons(double* left, double* center, double* right, double* bt);
void Light(double col);
double Colorsensor(double port, double mode, double lighton);
double Ultrasonicsensor(double port, double mode, double lighton);
void Speaker(double frequency, double duration, double volume);
void longArrayToStringWithCommas(float *arr, int length, char *result, int
  DecPoint);
void Displaymat(double matrix[25]);
int init_flag = 0;

/* Model step function */
void Task_sync(void)
{
  /* local block i/o variables */
  real_T rtb_Battery_o1;
  real_T rtb_Battery_o2;
  real_T rtb_Buttons_o1;
  real_T rtb_Buttons_o2;
  real_T rtb_Buttons_o3;
  real_T rtb_Buttons_o4;
  real_T rtb_Forcesensor1_o1;
  real_T rtb_Forcesensor1_o2;
  real_T rtb_MotorEncoder1_o1;
  real_T rtb_MotorEncoder1_o2;
  real_T rtb_MotorEncoder1_o3;
  real_T rtb_MotorEncoder1_o1_f;
  real_T rtb_MotorEncoder1_o2_k;
  real_T rtb_MotorEncoder1_o3_h;
  real_T rtb_Ultrasonicsensor1;
  real_T rtb_Colorsensor1;
  real32_T rtb_Imu_o1[3];
  real32_T rtb_Imu_o2[3];
  boolean_T rtb_LogicalOperator;

  /* RootInportFunctionCallGenerator generated from: '<Root>/Task_sync' incorporates:
   *  SubSystem: '<Root>/Func_sync'
   */
  /* Logic: '<S20>/Logical Operator' incorporates:
   *  Constant: '<S50>/Constant'
   *  Constant: '<S51>/Constant'
   *  RelationalOperator: '<S50>/Compare'
   *  RelationalOperator: '<S51>/Compare'
   *  Sum: '<S48>/Subtract'
   *  Sum: '<S49>/Subtract'
   *  UnitDelay: '<S48>/Unit Delay'
   *  UnitDelay: '<S49>/Unit Delay'
   */
  rtb_LogicalOperator = ((slapp_DW.UnitDelay_DSTATE != 0.0) ||
    (slapp_DW.UnitDelay_DSTATE_h != 0.0));

  /* S-Function (DisplayNumber): '<S22>/DisplayNumber1' incorporates:
   *  Constant: '<S19>/Constant4'
   *  Constant: '<S19>/Constant8'
   */
  if (1.0 > 0) {
    hub_display_number((int8_t)1.0);
  } else {
    hub_display_off();
  }

  /* S-Function (Light): '<S6>/Light' incorporates:
   *  Constant: '<S19>/Constant10'
   */
  Light(0.0);

  /* S-Function (Motor): '<S28>/Motor2' incorporates:
   *  Constant: '<S19>/Constant5'
   */
  pup_motor_set_power(motorB, (int16_t) 0.0);

  /* S-Function (Motor): '<S30>/Motor2' incorporates:
   *  Constant: '<S19>/Constant6'
   */
  pup_motor_set_power(motorC, (int16_t) 0.0);

  /* Outputs for Triggered SubSystem: '<S20>/Subsystem' incorporates:
   *  TriggerPort: '<S47>/Trigger'
   */
  if (rtb_LogicalOperator && (slapp_PrevZCX.Subsystem_Trig_ZCE != POS_ZCSIG)) {
    /* S-Function (Speaker): '<S47>/Speaker' incorporates:
     *  Constant: '<S19>/Constant7'
     *  Constant: '<S19>/Constant9'
     *  Constant: '<S20>/Constant'
     */
    if ((uint8_t)0.0 == 0) {
      hub_speaker_stop();
    } else {
      hub_speaker_set_volume((uint8_t)0.0);
      hub_speaker_play_tone((uint16_t)0.0, (int32_t)1.0);
    }
  }

  slapp_PrevZCX.Subsystem_Trig_ZCE = rtb_LogicalOperator;

  /* End of Outputs for SubSystem: '<S20>/Subsystem' */

  /* S-Function (Battery): '<S2>/Battery' */
  rtb_Battery_o1 = (double) hub_battery_get_voltage();
  rtb_Battery_o2 = (double) hub_battery_get_current();

  /* S-Function (Buttons): '<S3>/Buttons' */
  Buttons(&rtb_Buttons_o1, &rtb_Buttons_o2, &rtb_Buttons_o3, &rtb_Buttons_o4);

  /* S-Function (Imu): '<S5>/Imu' */
  hub_imu_get_acceleration (&rtb_Imu_o1[0]);
  hub_imu_get_angular_velocity (&rtb_Imu_o2[0]);

  /* S-Function (Forcesensor): '<S24>/Forcesensor1' */
  rtb_Forcesensor1_o1 = (double) pup_force_sensor_force (ForcesensorA);
  rtb_Forcesensor1_o2 = (double) pup_force_sensor_distance (ForcesensorA);

  /* S-Function (MotorEncoder): '<S38>/MotorEncoder1' */
  rtb_MotorEncoder1_o1 = (double) pup_motor_get_count(motorB);
  rtb_MotorEncoder1_o2 = (double) pup_motor_get_speed(motorB);
  rtb_MotorEncoder1_o3 = (double) pup_motor_get_power(motorB);

  /* S-Function (MotorEncoder): '<S40>/MotorEncoder1' */
  rtb_MotorEncoder1_o1_f = (double) pup_motor_get_count(motorC);
  rtb_MotorEncoder1_o2_k = (double) pup_motor_get_speed(motorC);
  rtb_MotorEncoder1_o3_h = (double) pup_motor_get_power(motorC);

  /* S-Function (Ultrasonicsensor): '<S42>/Ultrasonicsensor1' */
  rtb_Ultrasonicsensor1 = Ultrasonicsensor(3, 0, 0);

  /* S-Function (Colorsensor): '<S44>/Colorsensor1' */
  rtb_Colorsensor1 = (double) pup_color_sensor_reflection(ColorsensorE);

  /* Update for UnitDelay: '<S48>/Unit Delay' incorporates:
   *  Constant: '<S19>/Constant7'
   */
  slapp_DW.UnitDelay_DSTATE = 0.0;

  /* Update for UnitDelay: '<S49>/Unit Delay' incorporates:
   *  Constant: '<S19>/Constant9'
   */
  slapp_DW.UnitDelay_DSTATE_h = 0.0;

  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/Task_sync' */
}

/* Model initialize function */
void slapp_initialize(void)
{
  slapp_PrevZCX.Subsystem_Trig_ZCE = POS_ZCSIG;

  /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/Task_sync' incorporates:
   *  SubSystem: '<Root>/Func_sync'
   */

  /* Start for S-Function (DisplayNumber): '<S22>/DisplayNumber1' incorporates:
   *  Constant: '<S19>/Constant4'
   *  Constant: '<S19>/Constant8'
   */
  hub_display_orientation(PBIO_SIDE_RIGHT);

  /* Start for S-Function (Light): '<S6>/Light' incorporates:
   *  Constant: '<S19>/Constant10'
   */
  hub_light_off();

  /* Start for S-Function (Motor): '<S28>/Motor2' incorporates:
   *  Constant: '<S19>/Constant5'
   */
  motorB = pup_motor_get_device(PBIO_PORT_ID_B);
  pup_motor_setup(motorB, PUP_DIRECTION_CLOCKWISE, true);
  pup_motor_reset_count(motorB);

  /* Start for S-Function (Motor): '<S30>/Motor2' incorporates:
   *  Constant: '<S19>/Constant6'
   */
  motorC = pup_motor_get_device(PBIO_PORT_ID_C);
  pup_motor_setup(motorC, PUP_DIRECTION_COUNTERCLOCKWISE, true);
  pup_motor_reset_count(motorC);

  /* Start for S-Function (Imu): '<S5>/Imu' */
  hub_imu_init();

  /* Start for S-Function (Forcesensor): '<S24>/Forcesensor1' */
  ForcesensorA = pup_force_sensor_get_device (PBIO_PORT_ID_A);

  /* Start for S-Function (Ultrasonicsensor): '<S42>/Ultrasonicsensor1' */
  UltrasonicsensorD = pup_ultrasonic_sensor_get_device(PBIO_PORT_ID_D);
  pup_ultrasonic_sensor_light_set(UltrasonicsensorD, 100, 100, 100, 100);

  /* Start for S-Function (Colorsensor): '<S44>/Colorsensor1' */
  ColorsensorE = pup_color_sensor_get_device (PBIO_PORT_ID_E);
  pup_color_sensor_light_set (ColorsensorE, 100, 100, 100);

  /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/Task_sync' */
}

/* Buttons wrapper function */
void Buttons(double* left, double* center, double* right, double* bt)
{
  hub_button_t pressed = 0;
  hub_button_is_pressed(&pressed);
  *left = 0;
  *center = 0;
  *right = 0;
  *bt = 0;
  switch (pressed) {
   case HUB_BUTTON_LEFT:
    *left = 1.0;
    break;

   case HUB_BUTTON_CENTER:
    *center = 1.0;
    break;

   case HUB_BUTTON_RIGHT:
    *right = 1.0;
    break;

   case HUB_BUTTON_BT:
    *bt = 1.0;
    break;

   default:
    break;
  }
}

/* Light wrapper function */
void Light(double col)
{
  switch ((uint8_t)col) {
   case 0:                             //white
    hub_light_on_hsv(&((pbio_color_hsv_t)
                       {
                       0, 0, 100
                       } ));
    break;

   case 1:                             //red
    hub_light_on_hsv(&((pbio_color_hsv_t)
                       {
                       4, 100, 100
                       } ));
    break;

   case 2:                             //orange
    hub_light_on_hsv(&((pbio_color_hsv_t)
                       {
                       23, 100, 100
                       } ));
    break;

   case 3:                             //yellow
    hub_light_on_hsv(&((pbio_color_hsv_t)
                       {
                       55, 100, 100
                       } ));
    break;

   case 4:                             //green
    hub_light_on_hsv(&((pbio_color_hsv_t)
                       {
                       113, 100, 100
                       } ));
    break;

   case 5:                             //blue
    hub_light_on_hsv(&((pbio_color_hsv_t)
                       {
                       197, 100, 100
                       } ));
    break;

   case 6:                             //indigo
    hub_light_on_hsv(&((pbio_color_hsv_t)
                       {
                       233, 100, 100
                       } ));
    break;

   case 7:                             //violet
    hub_light_on_hsv(&((pbio_color_hsv_t)
                       {
                       306, 100, 100
                       } ));
    break;

   default:
    hub_light_off();
    break;
  }
}

/* Colorsensor HSV wrapper function */
double Colorsensor(double port, double mode, double lighton)
{
  double colh = 0;
  double colout = 0;
  pup_color_hsv_t colhsv;
  switch ((uint8_t) port) {
   case 0:
    colhsv = pup_color_sensor_hsv(ColorsensorA, true);
    break;

   case 1:
    colhsv = pup_color_sensor_hsv(ColorsensorB, true);
    break;

   case 2:
    colhsv = pup_color_sensor_hsv(ColorsensorC, true);
    break;

   case 3:
    colhsv = pup_color_sensor_hsv(ColorsensorD, true);
    break;

   case 4:
    colhsv = pup_color_sensor_hsv(ColorsensorE, true);
    break;

   case 5:
    colhsv = pup_color_sensor_hsv(ColorsensorF, true);
    break;

   default:
    /* SPIKE-RT library config error */
    break;
  }

  colh = (double) colhsv.h;
  if ((colh <= 10) || (colh > 330)) {
    colout = 1;                        // red
  } else if ((colh > 10) && (colh <= 50)) {
    colout = 2;                        // orange
  } else if ((colh > 50) && (colh <= 80)) {
    colout = 3;                        // yellow
  } else if ((colh > 80) && (colh <= 160)) {
    colout = 4;                        // green
  } else if ((colh > 160) && (colh <= 200)) {
    colout = 5;                        // blue
  } else if ((colh > 200) && (colh <= 280)) {
    colout = 6;                        // indigo
  } else if ((colh > 280) && (colh <= 330)) {
    colout = 7;                        // violet
  } else {
    colout = 0;
  }

  return colout;
}

/* Ultrasonicsensor distance wrapper function */
double Ultrasonicsensor(double port, double mode, double lighton)
{
  double distance = 0;
  switch ((uint8_t) port) {
   case 0:
    distance = pup_ultrasonic_sensor_distance(UltrasonicsensorA);
    break;

   case 1:
    distance = pup_ultrasonic_sensor_distance(UltrasonicsensorB);
    break;

   case 2:
    distance = pup_ultrasonic_sensor_distance(UltrasonicsensorC);
    break;

   case 3:
    distance = pup_ultrasonic_sensor_distance(UltrasonicsensorD);
    break;

   case 4:
    distance = pup_ultrasonic_sensor_distance(UltrasonicsensorE);
    break;

   case 5:
    distance = pup_ultrasonic_sensor_distance(UltrasonicsensorF);
    break;

   default:
    /* SPIKE-RT library config error */
    break;
  }

  return distance;
}

/* Speaker wrapper function
   void Speaker(double frequency, double duration, double volume){
   if ((uint8_t)frequency == 0) {
   hub_speaker_stop();
 //dly_tsk(duration * 1000);
   } else {
   hub_speaker_set_volume((uint8_t)volume);
   hub_speaker_play_tone((uint16_t)frequency, (int32_t)duration);
   }
   }*/

/* Display Matrix wrapper function */
void Displaymat(double matrix[25])
{
  uint8_T i, j;
  uint8_T matin[5][5];
  for (i = 0; i<5; i++) {
    for (j = 0; j<5;j++) {
      matin[i][j] = (uint8_T)matrix[(i*5)+j];
    }
  }

  hub_display_image((uint8_t*)matin);
}

void Main(intptr_t exinf)
{
  /* Wait 0.5 sec */
  dly_tsk(500000);

  /* Initializing model data */
  slapp_initialize();
  init_flag= 1;
  while (1) {
  }
}

void spike_cyc_task_high(intptr_t exinf)
{
  if (init_flag == 1) {
    /* Model sync function */
    Task_sync();
  }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
