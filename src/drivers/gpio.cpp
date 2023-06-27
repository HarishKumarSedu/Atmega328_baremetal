
#include "atmega328.h"
#include "common/io.h"
#include "gpio.h"
#include "board/uno_board.h"


void LED_Init()
{
  
  GPIO_Init(IO_05,&DDRB,OUTPUT);

}


void LED_HIGH()
{
  GPIO_Write(IO_05,&PORTB,HIGH);
}
void LED_LOW()
{
  GPIO_Write(IO_05,&PORTB,LOW);

}
void LED_Toggle()
{
  GPIO_Toggle(IO_05,&PORTB);
}

void GPIO_Init(IO Pin,uint8_t * Reg, Digital_GPIO_Mode Mode)
{
    if (OUTPUT == Mode)
    {
        /* code */
        *Reg |= (uint8_t)(1<<Pin);
    }

    else
    {
        *Reg &= ~(uint8_t)(1<<Pin);

    }
    
}

void GPIO_Write(uint8_t Pin, uint8_t * Reg, Digital_GPIO_Values Value )
{
   if (HIGH == Value )
     {
        /* code */
        *Reg |= (uint8_t)(1<<Pin);
    }

    else
    {
        *Reg &= ~(uint8_t)(1<<Pin);

    }
}

void GPIO_Toggle(uint8_t Pin, uint8_t * Reg)
{
        *Reg ^= (uint8_t)(1<<Pin);

}
