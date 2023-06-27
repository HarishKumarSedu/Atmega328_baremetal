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
    PB06=IO_06,
    PB07=IO_07,

    // Port C 
    PC00=IO_00,
    PC01=IO_01,
    PC02=IO_02,
    PC03=IO_03,
    PC04=IO_04,
    PC05=IO_05,
    PC06=IO_06,
    PC07=IO_07,
} UNO_Board_PinConfigurationsx ; 

typedef enum
{

    ADC0=PC00,
    ADC1=PC01,
    ADC2=PC02,
    ADC3=PC03,
    ADC4=PC04,
    ADC5=PC05,

} UNO_Analog_Pinx ; 

typedef enum
{

    Digi0=PD00,
    Digi1=PD01,
    Digi2=PD02,
    Digi3=PD03,
    Digi4=PD04,
    Digi5=PD05,
    Digi6=PD06,
    Digi7=PD07,

    Digi8=PB00,
    Digi9=PB01,
    Digi10=PB02,
    Digi11=PB03,
    Digi12=PB04,
    Digi13=PB05,

} UNO_Digital_Pinx ; 



typedef enum
{
    SCL=PC05,
    SDA=PC04,

} UNO_I2C_Pinx ; 

typedef enum
{
    TX=PC05,
    RX=PC04,

} UNO_UART_Pinx ; 



#endif