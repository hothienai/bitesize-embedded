/*
 * bsp.c
 *
 *  Created on: Apr 10, 2026
 *      Author: Ai Ho
 */

#include "bsp.h"

/**
  * @brief BSP turns on-board LED on
  * @param None
  * @retval None
  */
void BSP_turnObLedOn(void)
{
	HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, GPIO_PIN_RESET);
}

/**
  * @brief BSP turns on-board LED off
  * @param None
  * @retval None
  */
void BSP_turnObLedOff(void)
{
	HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, GPIO_PIN_SET);
}

/**
  * @brief BSP toggles on-board LED
  * @param None
  * @retval None
  */
void BSP_toggleObLed(void)
{
	HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_13);
}

/**
  * @brief BSP reads on-board button state
  * @param None
  * @retval None
  */
GPIO_PinState BSP_readObButton(void)
{
	return HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_12);
}

/**
  * @brief BSP blocking-delays in in milliseconds
  * @param None
  * @retval None
  */
void BSP_delayMs(uint32_t delay)
{
	HAL_Delay(delay);
}


