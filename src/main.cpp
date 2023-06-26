
#include <stdio.h>
#include "usart.h"
#include "gpio.h"
#include "systick.h"

#define LED 5

int main()
{
	 pinMode(LED,OUTPUT);

	while(1)
	{		


        digitalToggle(LED);
        delay(1000);			 		 
	}	
}

