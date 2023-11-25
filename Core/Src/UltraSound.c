//
// Created by 28035 on 2023/11/11.
//

#include "UltraSound.h"
//#include "stdio.h"


#define Trigger_GPIO_Port GPIOB
#define Trigger_Pin GPIO_PIN_12


volatile float UltraSound_VAL=0;

volatile uint32_t *cnt;


void UltraSound_Init(uint32_t* p){
    cnt = p;
}


void HAL_Delay_us(__IO uint16_t Delay){
    Delay*=10;
    do {
        __asm volatile("NOP");
        __asm volatile("NOP");
        __asm volatile("NOP");
        __asm volatile("NOP");
        __asm volatile("NOP");

        __asm volatile("NOP");
        __asm volatile("NOP");
        __asm volatile("NOP");
        __asm volatile("NOP");
        __asm volatile("NOP");

    } while (Delay--);
}

void UltraSound_SendTrig(){
    Trigger_GPIO_Port->BSRR = Trigger_Pin;
    HAL_Delay_us(15);
    Trigger_GPIO_Port->BSRR= Trigger_Pin << 16U;
}

//CNT -> us

float UltraSound_GetVAL(){
    if(*cnt!=0xFFFF && *cnt!=0) {
        UltraSound_VAL = (float) *cnt * 173 / 1000;
        return UltraSound_VAL;
    }
    else
        return 0;
    //

}
