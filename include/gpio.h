/**
 * @file gpio.h
 * @author Harish Kumar Shivaramappa (harishkumarsedu@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-06-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */


#ifndef GPIO_H__
#define GPIO_H__

#include "atmega328.h"
#include "io.h"

void HAL_GPIO_Set_Input(uint8_t  Reg, uint8_t Mask) ;

void pinMode(uint8_t pin, Digital_GPIO_Mode mode); 
void digitalWrite(uint8_t pin, Digital_GPIO_Values value) ;
void digitalToggle(uint8_t pin) ;
Digital_GPIO_Values digitalRead(uint8_t pin) ;

#endif