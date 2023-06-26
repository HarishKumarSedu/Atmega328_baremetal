/**
 * @file uno_board.h
 * @author Harish Kumar Shivaramappa (harishkumarsedu@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-06-26
 * 
 * @copyright Copyright (c) 2023
 * 
 */



#ifndef UNO_BOARD_H__
#define UNO_BOARD_H__

#include "common/io.h"

typedef enum 

{   
    // Port D 
    PD00=IO_00,
    PD01=IO_01,
    PD02=IO_02,
    PD03=IO_03,
    PD04=IO_04,
    PD05=IO_05,
    PD06=IO_06,
    PD07=IO_07,


    // Port B 
    PB00=IO_00,
    PB01=IO_01,
    PB02=IO_02,
    PB03=IO_03,
    PB04=IO_04,
    PB05=IO_05,

    // Port C 
    PC00=IO_00,
    PC01=IO_01,
    PC02=IO_02,
    PC03=IO_03,
    PC04=IO_04,
    PC05=IO_05,
} UNO_Board_PinConfigurations ; 

typedef enum

{

    ADC0=PC00,
    ADC1=PC01,
    ADC2=PC02,
    ADC3=PC03,
    ADC4=PC04,
    ADC5=PC05,

} UNO_Analog_Pinx


#endif