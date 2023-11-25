//
// Created by 28035 on 2023/11/14.
//

#ifndef XHB_GREYSENSOR_H
#define XHB_GREYSENSOR_H
#include "stdint.h"
#include "main.h"
#include "stdlib.h"

void GreySensor_Init(uint16_t *Array);
int8_t* GreySensor_GetADC();

#endif //XHB_GREYSENSOR_H
