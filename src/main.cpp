#include "systick.h"
#include "gpio.h"
#include "usart.h"
#include "i2c.h"
#include "adc.h"

// Application include 
#include "app/LSM6D3/LSM6D3.h"






int main()
{
    USART_Init(9600);

    printf("Hello Hari !!!!!!!!!!!!");
    
	LED_Init();
	while(1)
	{
    
       printf(" ADC value %d",ADC_Read(ADC0));
        LED_Toggle();
		delay_ms(10);
	}	
}

