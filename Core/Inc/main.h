/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define TIM3_CH2_ECHO_Pin GPIO_PIN_1
#define TIM3_CH2_ECHO_GPIO_Port GPIOB
#define TRIG_Pin GPIO_PIN_12
#define TRIG_GPIO_Port GPIOB
#define INd_Pin GPIO_PIN_13
#define INd_GPIO_Port GPIOB
#define INc_Pin GPIO_PIN_14
#define INc_GPIO_Port GPIOB
#define INb_Pin GPIO_PIN_15
#define INb_GPIO_Port GPIOB
#define INa_Pin GPIO_PIN_8
#define INa_GPIO_Port GPIOA
#define IN4_Pin GPIO_PIN_9
#define IN4_GPIO_Port GPIOA
#define IN3_Pin GPIO_PIN_10
#define IN3_GPIO_Port GPIOA
#define IN2_Pin GPIO_PIN_11
#define IN2_GPIO_Port GPIOA
#define IN1_Pin GPIO_PIN_12
#define IN1_GPIO_Port GPIOA
#define TIM3_CH1_PWM_Pin GPIO_PIN_4
#define TIM3_CH1_PWM_GPIO_Port GPIOB
#define TIM3_CH2_PWM_Pin GPIO_PIN_5
#define TIM3_CH2_PWM_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
