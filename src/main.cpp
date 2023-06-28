#include "systick.h"
#include "gpio.h"
#include "usart.h"
#include "i2c.h"



#define SlaveAddr 0xD6
// #define SlaveAddr 0x6B
#define wait_for_completion while ((TWCR & (1<<TWINT)) == 0);
#define I2C_WRITE 0
#define I2C_READ 1



int main()
{
    USART_Init(9600);

    printf("Hello Hari !!!!!!!!!!!!");
    TWI_Init_Master(100000);

	LED_Init();
	while(1)
	{
    
        TW_Write(SlaveAddr,0x04,0x05);
		delay_ms(500);
        printf("Slave address %X \n",TW_Read(SlaveAddr,0x04)); // Function to read data from slave 
        LED_Toggle();
		delay_ms(500);
	}	
}

