#include "systick.h"
#include "gpio.h"

int main()
{
	LED_Init();
	while(1)
	{
        LED_Toggle();
		delay_ms(500);
	}	
}