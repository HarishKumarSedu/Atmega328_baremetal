/**
 * @file usart.h
 * @author Harish Kumar Shivaramappa (harishkumarsedu@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-06-26
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef USART_H__
#define USART_H__

#include <stdint.h>
// #include <util/delay.h>

#include "atmega328.h"
#include "common/io.h"

#include "external/printf_config.h"



#define RX_BUFFER_SIZE 128

typedef enum 
{

    BAUD_RATE_50     = 50 ,
    BAUD_RATE_75     = 75 ,
    BAUD_RATE_110    = 110 ,
    BAUD_RATE_134    = 134 ,
    BAUD_RATE_150    = 150 ,
    BAUD_RATE_200    = 200 ,
    BAUD_RATE_300    = 300 ,
    BAUD_RATE_600    = 600 ,
    BAUD_RATE_1200   = 1200 ,
    BAUD_RATE_1800   = 1800 ,
    BAUD_RATE_2400   = 2400 ,
    BAUD_RATE_4800   = 4800 ,
    BAUD_RATE_9600   = 9600 ,
    BAUD_RATE_19200  = 19200 ,
    BAUD_RATE_28800  = 28800 ,
    BAUD_RATE_38400  = 38400 ,
    BAUD_RATE_57600  = 57600 ,
    BAUD_RATE_76800  = 76800 ,
    BAUD_RATE_115200 = 115200 ,
    BAUD_RATE_230400 = 230400 ,
    BAUD_RATE_460800 = 460800 ,
    BAUD_RATE_576000 = 576000 ,
    BAUD_RATE_921600 = 921600 ,


} USART_BaudRates ; 

void USART_Init(uint32_t BaudRate) ; 
unsigned char USART_Receive(void) ;
void USART_Transmit(unsigned char data) ;

int USART_PutChar(char C) ;
unsigned char USART_GetChar(void);
void USART_Send_String(char *c) ;

void _putchar(char C); // Low Level function given to the Printf high level function 


void uart_send_byte(uint8_t c);
void uart_send_string(uint8_t *c);
uint16_t uart_read_count(void);
uint8_t uart_read(void);

#endif