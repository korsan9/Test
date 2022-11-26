/**
  ******************************************************************************
  * @file    main.c
  * @author  korsan meriam
  * @brief   TEST
  * @version V1.0.1
  * @date    26-11-2022
  *****************************************************************************/

/* Includes ------------------------------------------------------------------*/
#include "GPIO.h"
#include "led.h"

 int  main(){

GPIO_WRITE_Pin(GPIOD,PIN15,SET);/*bleu led on*/
InputOutputConfig(GPIOD,PIN12,OUTPUT,OUTPUT_PUSH_PULL,LOW_SPEED);


}


/**************************************END OF FILE**************************************/
