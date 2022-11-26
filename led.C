/**
  ******************************************************************************
  * @file    led.C
  * @author  korsan meriam
  * @brief   GPIOD DRIVER
  * @version V1.0.1
  * @date    26-11-2022
  *****************************************************************************/

/* Includes ------------------------------------------------------------------*/

#include "gpio.h"
#include "led.h"

void InputOutputConfig(uint32_t *GPIOx, uint8_t Pin, uint8_t Mode, uint8_t Type, uint8_t Speed){
uint8_t pin_state=0 ;     
GPIO_Config(GPIOx,Pin, Mode,  Type, Speed),/*config output pushpul lowspeed*/
                      
pin_state = GPIO_Read_Pin(GPIOA,PIN0);
uint8_t prog_state = SET;
uint8_t pin_state_prev = RESET;
  
  if (pin_state == 1 && pin_state != pin_state_prev) 
  {
  ToggleLed(GPIOD,PIN12);
   pin_state_prev = pin_state;
  }
}

void ToggleLed (uint32_t *GPIOx, uint8_t Pin)
{
GPIO_WRITE_Pin(GPIOx,Pin,SET);
delay (10);
GPIO_WRITE_Pin(GPIOx,Pin,RESET);
delay(10);
}
