#include "systick.h"
#include "gpio.h"
#include "usart.h"
#include "i2c.h"

// Application include 
#include "app/LSM6D3/LSM6D3.h"






int main()
{
    USART_Init(9600);

    printf("Hello Hari !!!!!!!!!!!!");
    LSM6D3_Data hLSM6D3_Data ; 
    LSM6D3_Init(LSM6D3Slave_Address,100000);

    printf("Who am I > %X \n",LSM6D3_Who_Am_I(LSM6D3Slave_Address)); // Function to read data from slave 
	LED_Init();
	while(1)
	{
    
        LSM6D3_OUT_XL(LSM6D3Slave_Address,&hLSM6D3_Data);
        LSM6D3_OUT_Gyro(LSM6D3Slave_Address,&hLSM6D3_Data);

        printf("AX  :  %d \t AY  :  %d \t AZ  :  %d \t GX  :  %d \t GY  :  %d \t GZ  :  %d \n", hLSM6D3_Data.AX, hLSM6D3_Data.AY, hLSM6D3_Data.AZ,hLSM6D3_Data.GX, hLSM6D3_Data.GY, hLSM6D3_Data.GZ); 
        LED_Toggle();
		delay_ms(10);
	}	
}

