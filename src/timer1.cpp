#include<avr/io.h>
#include <util/delay.h>
#define LED PB5
int main2()
{
	DDRB |= (1<<LED) ;         //configure led as outpout
	TCCR1B = (1<<CS10) | (1<<CS12); //set the pre-scalar as 1024
	OCR1A = 1562; 	   //100ms delay
	TCNT1 = 0;
	while(1)
	{
		//If flag is set toggle the led	
		while((TIFR1 & (1<<OCF1A)) == 0);// wait till the timer overflow flag is SET
		PORTB ^= (1<<5);
		TCNT1 = 0; 
		TIFR1 |= (1<<OCF1A) ; //clear timer1 overflow flag 
	}	
}