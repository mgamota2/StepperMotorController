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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define PWM_B2B_Pin GPIO_PIN_0
#define PWM_B2B_GPIO_Port GPIOA
#define PWM_B2A_Pin GPIO_PIN_1
#define PWM_B2A_GPIO_Port GPIOA
#define PWM_B1B_Pin GPIO_PIN_2
#define PWM_B1B_GPIO_Port GPIOA
#define PWM_B1A_Pin GPIO_PIN_3
#define PWM_B1A_GPIO_Port GPIOA
#define PWM_A2B_Pin GPIO_PIN_6
#define PWM_A2B_GPIO_Port GPIOA
#define PWM_A2A_Pin GPIO_PIN_7
#define PWM_A2A_GPIO_Port GPIOA
#define PWM_A1B_Pin GPIO_PIN_0
#define PWM_A1B_GPIO_Port GPIOB
#define PWM_A1A_Pin GPIO_PIN_1
#define PWM_A1A_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */