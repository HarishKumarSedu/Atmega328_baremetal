/**
 * @file usart.c
 * @author Harish Kumar Shivaramappa (harishkumarsedu@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-06-26
 * 
 * @copyright Copyright (c) 2023
 * 
 */


#include "usart.h"


volatile static uint8_t rx_buffer[RX_BUFFER_SIZE] = {0};
volatile static uint16_t rx_count = 0;	
volatile static uint8_t uart_tx_busy = 1;

#ifndef USART_INTRRUPT_CALL
#include <avr/interrupt.h>
ISR(USART_RX_vect){
	
	volatile static uint16_t rx_write_pos = 0;
    rx_count++;
	rx_write_pos++;
	if(rx_write_pos >= RX_BUFFER_SIZE){
		rx_write_pos = 0;
	}
}


ISR(USART_TX_vect){

    uart_tx_busy = 1;
}

#endif

void USART_Init(uint32_t BaudRate) 
{
    uint32_t MyBuadRate = FCPU / 16 / BaudRate -1 ;

    /**
     * @brief Set the Baudrate with the baudrate set high and low registers 
     * 
     */
    UBRR0H = (unsigned char) (MyBuadRate >> 8) ;
    UBRR0L = (unsigned char) (MyBuadRate ) ;

    /**
     * @brief Enable reciver and Transmitter 
     * 
     */

    // UCSR0B |= UCSR0B_RXEN0 | UCSR0B_TXEN0 | UCSR0B_RXCIE0 | UCSR0B_TXCIE0;  // Recive and Transmit Intrrupts enable 
    UCSR0B |= UCSR0B_RXEN0 | UCSR0B_TXEN0 ; 

    // Set Frame format : 8data , 2stop bit 

    UCSR0C = UCSR0C_USBS0 | UCSR0C_UCSZ00 | UCSR0C_UCSZ01 ;

}


void USART_Transmit(unsigned char data)
{
    /* Wait for empty transmit buffer */
    while (!(UCSR0A & (UCSR0A_UDRE0)));
    /* Put data into buffer, sends the data */
    UDR0 = data;
}


unsigned char USART_GetChar(void)
{
    /* Wait for data to be received */
    while (!(UCSR0A & (UCSR0A_RXC0)));
    /* Get and return received data from buffer */
    return UDR0;
}


int USART_PutChar(char C) {
    while (!(UCSR0A & UCSR0A_UDRE0));
    UDR0 = C;
    return 0;
}

void _putchar(char C) {
    while (!(UCSR0A & UCSR0A_UDRE0));
    UDR0 = C;
}





/**
 * @brief Uart intrupt functions 
 * 
 * @return 
 */

uint16_t uart_read_count(void){
	return rx_count;
}

uint8_t uart_read(void){
	static uint16_t rx_read_pos = 0;
	uint8_t data = 0;
	
	data = rx_buffer[rx_read_pos];
	rx_read_pos++;
	rx_count--;
	if(rx_read_pos >= RX_BUFFER_SIZE){
		rx_read_pos = 0;
	}
	return data;
}


void uart_send_byte(uint8_t c){
	while(uart_tx_busy == 0);
	uart_tx_busy = 0;
	UDR0 = c;
}

void uart_send_string(uint8_t *c){
	uint16_t i = 0;
	do{
		uart_send_byte(c[i]);
		i++;
		
	}while(c[i] != '\0');
	uart_send_byte(c[i]);
}


void USART_Send_String(char *c){
	uint16_t i = 0;
	do{
		USART_PutChar(c[i]);
		i++;
		
	}while(c[i] != '\0');
	USART_PutChar(c[i]);
}
