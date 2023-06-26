

#include "systick.h"


void Timer0_Init()
{
    // TCCR0B = 0;    // Stop timer
    TIMSK0 = 0;    // Disable timer interrupts
    TCCR0A = 0;    // Normal mode
    TIFR0  = ~0;   // Clear all interrupt flags

    TCNT0=0x00; // initialize reset the counter with the 00 
	TCCR0B |=  (TCCR0B_CS00 | TCCR0B_CS02);       // Enable timer with prescaler 1024
}


/**
 * Delays the program execution for approximately 10 milliseconds using Timer0.
 *
 * @param None
 *
 * @returns None
 */
void delay(uint16_t ms) 
{

     volatile  uint16_t timerOverflowCount=ms;	  
     Timer0_Init() ;

     while (timerOverflowCount != 0)
     {
           TCNT0 = MS2TICKS(1); // provides the 1ms second delay 
           while ((TIFR0 & TIFR0_TOV0) == 0);
           TIFR0 |= TIFR0_TOV0;  // Clear overflow flag
           /* code */
           timerOverflowCount--;
     }
  
}
