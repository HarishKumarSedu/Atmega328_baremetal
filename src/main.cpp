
#include <stdio.h>
#include "usart.h"
#include <util/delay.h>





int main(void) {   
    USART_Init(BAUD_RATE_9600);    
    printf("Hello World %d \n",1);  
    while (1) {
        char c = USART_GetChar(); 
        USART_PutChar(c) ;       
    }
    return 0;
}


