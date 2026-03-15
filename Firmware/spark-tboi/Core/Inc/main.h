/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
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
#include "stm32f1xx_hal.h"

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
#define ROTARY_A_Pin GPIO_PIN_0
#define ROTARY_A_GPIO_Port GPIOA
#define ROTARY_B_Pin GPIO_PIN_1
#define ROTARY_B_GPIO_Port GPIOA
#define SW1_Pin GPIO_PIN_2
#define SW1_GPIO_Port GPIOA
#define SW2_Pin GPIO_PIN_3
#define SW2_GPIO_Port GPIOA
#define SW3_Pin GPIO_PIN_4
#define SW3_GPIO_Port GPIOA
#define SW4_Pin GPIO_PIN_5
#define SW4_GPIO_Port GPIOA
#define SW5_Pin GPIO_PIN_6
#define SW5_GPIO_Port GPIOA
#define SW6_Pin GPIO_PIN_7
#define SW6_GPIO_Port GPIOA
#define SW7_Pin GPIO_PIN_0
#define SW7_GPIO_Port GPIOB
#define ENCODER_SWITCH_Pin GPIO_PIN_1
#define ENCODER_SWITCH_GPIO_Port GPIOB
#define SW8_Pin GPIO_PIN_10
#define SW8_GPIO_Port GPIOB
#define SW9_Pin GPIO_PIN_11
#define SW9_GPIO_Port GPIOB
#define SW10_Pin GPIO_PIN_12
#define SW10_GPIO_Port GPIOB
#define SW11_Pin GPIO_PIN_13
#define SW11_GPIO_Port GPIOB
#define SW12_Pin GPIO_PIN_14
#define SW12_GPIO_Port GPIOB
#define SW13_Pin GPIO_PIN_15
#define SW13_GPIO_Port GPIOB
#define SW14_Pin GPIO_PIN_8
#define SW14_GPIO_Port GPIOA
#define SW15_Pin GPIO_PIN_13
#define SW15_GPIO_Port GPIOA

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
