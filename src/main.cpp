
// #include <avr/io.h>
#include <stdint.h>

/* 
Tells compiler the cpu speed to use for delays
need to define it before importing util/delay.h
otherwise define it with -DF_CPU=16000000UL during compilation
*/
#ifndef F_CPU
#define F_CPU 16000000UL
#endif

#include <util/delay.h>
#include "atmega328.h"
#include "io.h"
#include "gpio.h"

/* PB5 has value of 5 */
#define LED       5 
#define SLEEP_MS  50

int main(void) {
    /* initializing PB5 which is connected to port 13 of uno as output*/

    // BITSET(DDRB,DDRB_DDB5);
    pinMode(LED,OUTPUT);

    while (1) {
        /* toggling the PB5 to alternate between on-off state*/
        // PORTB ^= LED;
        // BITFLIP(PORTB,PORTB_PORTB5);

         digitalToggle(LED);
        _delay_ms(SLEEP_MS);
    }
}

