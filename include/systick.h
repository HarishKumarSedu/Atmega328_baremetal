/**
 * @file systick.h(
 * @author Harish Kumar Shivaramappa (harishkumarsedu@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-06-26
 * 
 * @copyright Copyright (c) 2023
 * 
 */



#ifndef SYSTICK_H__
#define SYSTICK_H__

#include "atmega328.h"
#include "common/io.h"

#define MS2TICKS(ms) (256 - (ms)*(FCPU/1000)/1024)

void Timer0_Init() ;
void delay(uint16_t ms)  ;

#endif