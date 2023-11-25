#ifndef __MOTOR_H__
#define __MOTOR_H__

#include "main.h"

void IN_Init(char *p);

//void IN1_2_FWD();
//void IN1_2_REV();
void IN1_2_SPD(uint16_t duty);

//void IN3_4_FWD();
//void IN3_4_REV();
void IN3_4_SPD(uint16_t duty);

//void INa_b_FWD();
//void INa_b_REV();
void INa_b_SPD(uint16_t duty);

//void INc_d_FWD();
//void INc_d_REV();
void INc_d_SPD(uint16_t duty);

void IN_L_FWD();
void IN_R_FWD();
void IN_L_REV();
void IN_R_REV();

void IN_Stop();

void IN_AI_Control();

void IN_TurnLeft();
void IN_TurnLeft_m();
void IN_TurnLeft_l();

void IN_TurnRight();
void IN_TurnRight_m();
void IN_TurnRight_l();
void IN_GoStraight();
#endif