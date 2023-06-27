

#include "systick.h"
#include<avr/io.h>



static inline void  Timer1_Init()
{
	TCCR1B = (1<<CS10) | (1<<CS12); //set the pre-scalar as 1024
	OCR1A = 0; 	   //100ms delay
	TCNT1 = 0;
}




void delay_ms(uint16_t ms) 
{

     volatile  uint16_t timerOverflowCount=ms;	  
     Timer1_Init() ;

     while (timerOverflowCount != 0)
     {
        	OCR1A = 16; 	   //1ms delay
	        TCNT1 = 0;
		    //If flag is set toggle the led	
		    while((TIFR1 & (1<<OCF1A)) == 0);// wait till the timer overflow flag is SET
		    TCNT1 = 0; 
		    TIFR1 |= (1<<OCF1A) ; //clear timer1 overflow flag 
            timerOverflowCount--;
     }
  
}
