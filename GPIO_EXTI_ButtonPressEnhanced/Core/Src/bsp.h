/*
 * bsp.h
 *
 *  Created on: Apr 10, 2026
 *      Author: Ai Ho
 */

#ifndef BSP_H_
#define BSP_H_

#include <stdint.h>
#include "stm32f1xx_hal.h"

void BSP_turnObLedOn(void);
void BSP_turnObLedOff(void);
void BSP_toggleObLed(void);

GPIO_PinState BSP_readObButton(void);

void BSP_delayMs(uint32_t delay);

#endif /* BSP_H_ */
