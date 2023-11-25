//
// Created by 28035 on 2023/11/11.
//

#ifndef XHB_ULTRASOUND_H
#define XHB_ULTRASOUND_H

#include "main.h"

//根据主频计算100Mhz 周期为10ns


void HAL_Delay_us(uint16_t Delay);

void UltraSound_SendTrig();

void UltraSound_Init(uint32_t *p);

float UltraSound_GetVAL();

#endif //XHB_ULTRASOUND_H
