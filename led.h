/**
  ******************************************************************************
  * @file    led.h
  * @author  korsan meriam
  * @brief   GPIOD DRIVER
  * @version V1.0.1
  * @date    16-11-2022
  *****************************************************************************/
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __LED_H
#define __LED_H

#include <stdint.h>

void ToggleLed (uint32_t *GPIOx, uint8_t Pin);
void InputOutputConfig(uint32_t *GPIOx, uint8_t Pin, uint8_t Mode, uint8_t Type, uint8_t Speed);


#endif