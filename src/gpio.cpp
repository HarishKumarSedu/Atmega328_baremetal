
#include "atmega328.h"
#include "io.h"
#include "gpio.h"


void pinMode(uint8_t pin, Digital_GPIO_Mode mode){

    if (OUTPUT == mode )
    {
      
      BITSET(DDRB,DDRB_DDB5);
    }
    else {

      BITRESET(DDRB,DDRB_DDB5);
    }
    
}

void digitalWrite(uint8_t pin, Digital_GPIO_Values value)

{
      if (HIGH == value )
    {
      
      BITSET(PORTB,PORTB_PORTB5);
    }
    else {

      BITRESET(PORTB,PORTB_PORTB5);
    }
}

void digitalToggle(uint8_t pin)

{
      BITFLIP(PORTB,PORTB_PORTB5);
}

Digital_GPIO_Values digitalRead(uint8_t pin) {

  return HIGH ;
}