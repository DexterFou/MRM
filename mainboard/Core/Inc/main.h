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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define ENC_B_X_Pin GPIO_PIN_0
#define ENC_B_X_GPIO_Port GPIOC
#define ENC_B_XC1_Pin GPIO_PIN_1
#define ENC_B_XC1_GPIO_Port GPIOC
#define ENC_B_XC2_Pin GPIO_PIN_2
#define ENC_B_XC2_GPIO_Port GPIOC
#define ENC_B_XC3_Pin GPIO_PIN_3
#define ENC_B_XC3_GPIO_Port GPIOC
#define MOT_X_PWM_Pin GPIO_PIN_0
#define MOT_X_PWM_GPIO_Port GPIOA
#define MOT_X_PWMA1_Pin GPIO_PIN_1
#define MOT_X_PWMA1_GPIO_Port GPIOA
#define MOT_X_PWMA2_Pin GPIO_PIN_2
#define MOT_X_PWMA2_GPIO_Port GPIOA
#define MOT_X_PWMA3_Pin GPIO_PIN_3
#define MOT_X_PWMA3_GPIO_Port GPIOA
#define MOT_X_DIR_Pin GPIO_PIN_4
#define MOT_X_DIR_GPIO_Port GPIOA
#define MOT_X_DIRA5_Pin GPIO_PIN_5
#define MOT_X_DIRA5_GPIO_Port GPIOA
#define MOT_X_DIRA6_Pin GPIO_PIN_6
#define MOT_X_DIRA6_GPIO_Port GPIOA
#define MOT_X_DIRA7_Pin GPIO_PIN_7
#define MOT_X_DIRA7_GPIO_Port GPIOA
#define ENC_A_X_Pin GPIO_PIN_12
#define ENC_A_X_GPIO_Port GPIOB
#define ENC_A_X_EXTI_IRQn EXTI15_10_IRQn
#define ENC_A_XB13_Pin GPIO_PIN_13
#define ENC_A_XB13_GPIO_Port GPIOB
#define ENC_A_XB13_EXTI_IRQn EXTI15_10_IRQn
#define ENC_A_XB14_Pin GPIO_PIN_14
#define ENC_A_XB14_GPIO_Port GPIOB
#define ENC_A_XB14_EXTI_IRQn EXTI15_10_IRQn
#define ENC_A_XB15_Pin GPIO_PIN_15
#define ENC_A_XB15_GPIO_Port GPIOB
#define ENC_A_XB15_EXTI_IRQn EXTI15_10_IRQn
#define LIDAR_TX_Pin GPIO_PIN_6
#define LIDAR_TX_GPIO_Port GPIOC
#define LIDAR_RX_Pin GPIO_PIN_7
#define LIDAR_RX_GPIO_Port GPIOC
#define LIDAR_MOT_Pin GPIO_PIN_8
#define LIDAR_MOT_GPIO_Port GPIOC

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
