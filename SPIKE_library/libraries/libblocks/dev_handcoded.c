#include "sfunspikert.h"

/* HUB Device functions */
// N
double Battery(void){
    return (double)hub_battery_get_voltage();
}

// Y
void Buttons(double* left, double* center, double* right, double* bt){
    hub_button_t *pressed = {0};
    hub_button_is_pressed(pressed);
    *left = 0;
    *center = 0;
    *right = 0;
    *bt = 0;
    switch (*pressed) {
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

void DisplaynumInit(void){
    hub_display_orientation(PBIO_SIDE_TOP);
}

void Displaynum(double number){
    hub_display_number((int8_t)number);
}

void ImuInit(void){
    hub_imu_init();
}

void Imu(double accel[3], double angv[3]){
    hub_imu_get_acceleration (accel[3]);
    hub_imu_get_angular_velocity (angv[3]);
}

void LightInit(void){
    hub_light_off();
}

// Y
void Light(double col){
    pbio_color_hsv_t *colorhsv;
    switch ((uint8_t) col) {
        case 0: //white
            colorhsv->h = 0;
            colorhsv->s = 0;
            colorhsv->v = 100;
            break;
        case 1: //red
            colorhsv->h = 4;
            colorhsv->s = 100;
            colorhsv->v = 100;
            break;
        case 2: //orange
            colorhsv->h = 23;
            colorhsv->s = 100;
            colorhsv->v = 100;
            break;
        case 3: //yellow
            colorhsv->h = 55;
            colorhsv->s = 0;
            colorhsv->v = 100;
            break;
        case 4: //green
            colorhsv->h = 113;
            colorhsv->s = 100;
            colorhsv->v = 100;
            break;
        case 5: //blue
            colorhsv->h = 197;
            colorhsv->s = 0;
            colorhsv->v = 100;
            break;
        case 6: //indigo
            colorhsv->h = 233;
            colorhsv->s = 0;
            colorhsv->v = 100;
            break;
        case 7: //violet
            colorhsv->h = 306;
            colorhsv->s = 0;
            colorhsv->v = 100;
            break;
        default:
            colorhsv->h = 100;
            colorhsv->s = 100;
            colorhsv->v = 100;
            break;
    }
        hub_light_on_hsv (colorhsv);
}

/* PUP Device functions */

void ColorsensorInit(void){
    pup_color_sensor_light_set (pup_device_t *pdev, 100, 100, 100);
}

// Y
double Colorsensor(double port, double mode, double lighton){
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
        colout = 1; // red
    } else if ((colh > 10) && (colh <= 50)) {
        colout = 2; // orange
    } else if ((colh > 50) && (colh <= 80)) {
        colout = 3; // yellow
    } else if ((colh > 80) && (colh <= 160)) {
        colout = 4; // green
    } else if ((colh > 160) && (colh <= 200)) {
        colout = 5; // blue
    } else if ((colh > 200) && (colh <= 280)) {
        colout = 6; // indigo
    } else if ((colh > 280) && (colh <= 330)) {
        colout = 7; // violet
    } else {
        colout = 0;
    }
    return colout;
}

//void ForcesensorInit(void){
//}

void Forcesensor(double port, double* force, double* distance){

}

//void MotorInit(void){
//}

void Motor(double port, double mode, double motorin){
    
}

//void MotorEncoderInit(void){
//}

void MotorEncoder(double port, double* count, double* speed, double* power){
    
}

//void UltrasonicsensorInit(void){
//}

// Y
double Ultrasonicsensor(double port, double mode, double lighton){
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

//Y
void Speaker(double frequency, double duration, double volume){
    hub_speaker_set_volume((uint8_t)volume); 
    hub_speaker_play_tone((uint16_t)frequency, (int32_t)duration);
}

//Y
void Displaymat(double matrix[25]){
    int i, j;
    double matin[5][5];
    for (i = 0; i<5; i++) {
        for (j = 0; j<5;j++){
            matin[i][j] = matrix[((i+1)*(j+1))-1];
        }
    }
    hub_display_image((uint8_t*)matin);
}