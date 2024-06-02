/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
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
#include "stm32f3xx_hal.h"

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
#define Button1_Pin GPIO_PIN_15
#define Button1_GPIO_Port GPIOC
#define STICK5_Pin GPIO_PIN_0
#define STICK5_GPIO_Port GPIOA
#define STICK6_Pin GPIO_PIN_1
#define STICK6_GPIO_Port GPIOA
#define STICK3_Pin GPIO_PIN_2
#define STICK3_GPIO_Port GPIOA
#define STICK2_Pin GPIO_PIN_3
#define STICK2_GPIO_Port GPIOA
#define LED3_Pin GPIO_PIN_4
#define LED3_GPIO_Port GPIOA
#define Button3_Pin GPIO_PIN_5
#define Button3_GPIO_Port GPIOA
#define STICK1_Pin GPIO_PIN_6
#define STICK1_GPIO_Port GPIOA
#define Button4_Pin GPIO_PIN_7
#define Button4_GPIO_Port GPIOA
#define STICK4_Pin GPIO_PIN_0
#define STICK4_GPIO_Port GPIOB
#define STICK7_Pin GPIO_PIN_1
#define STICK7_GPIO_Port GPIOB
#define Battery_Pin GPIO_PIN_11
#define Battery_GPIO_Port GPIOB
#define LED4_Pin GPIO_PIN_12
#define LED4_GPIO_Port GPIOB
#define STICK8_Pin GPIO_PIN_13
#define STICK8_GPIO_Port GPIOB
#define Button2_Pin GPIO_PIN_12
#define Button2_GPIO_Port GPIOA
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
