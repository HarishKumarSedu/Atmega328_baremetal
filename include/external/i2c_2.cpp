/**
 * @file i2c.cpp
 * @author Harish Kumar Shivaramappa (harishkumarsedu@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-06-27
 * 
 * @copyright Copyright (c) 2023
 * 
 */


#include "i2c.h"



/**
 **Initialization of MASTER means to set the TWI clock frequency (SCL).
 **It is done by setting bit rate in TWBR and pre scaler bits in TWSR.
 ** SCL freq= F_CPU/(16+2(TWBR).4^TWPS)
 * 
 */
 
void TWI_Init_Master(uint32_t FreQ) // Function to initialize master
{

    TWBR =BitRate(FreQ);
    TWSR &= (~TWSR_TWPS1 & ~TWSR_TWPS0);    // Setting prescalar bits
    TWCR |= TWCR_TWEN;
}


/**
 * ? Send start condition
 *  ? 1.      Clear TWINT flag by writing a logic one to it.
 *  ? 2.      Set TWSTA bit to send start condition.
 *  ? 3.      Set TWEN bit to initialize the TWI.
 *  ? 4.      Monitor the status of TWINT flag.
 *  ? 5.      Check the ACK byte
 * 
 */

void TWI_start()
{
        // Clear TWI interrupt flag, Put start condition on SDA, Enable TWI
    TWCR |= TWCR_TWINT | TWCR_TWSTA | TWCR_TWEN;    
    TWI_Wait ; // Wait till start condition is transmitted
    // while(TWI_GetStatus!= TWI_START); // Check for the acknowledgement
}



/**
 ** Send the 8-bit data and wait for the ACK 
    *? 1.      Put the 8 bit data in TWDR. 8 bits = 7 bit slave address + Data direction bit (write = 0).
    *? 2.      Clear TWINT flag.
    *? 3.      Set TWEN bit to enable TWI.
    *? 4.      Monitor the status of TWINT flag to get data transmission completed.
    *? 5.      Check for the acknowledgement.
 */


void TWI_write(uint8_t data)
{
    TWDR=data;    // put data in TWDR
    TWCR |= TWCR_TWINT  | TWCR_TWEN;    // Clear TWI interrupt flag,Enable TWI
    TWI_Wait; // Wait till start condition is transmitted
    // while(TWI_GetStatus!= TWI_MT_DTAT_ACK); // Check for the acknowledgement
}

/**
 * *Send the STOP condition
*   ? 1.      Clear TWINT flag.
*   ? 2.      Set TWEN bit
*   ? 3.      Write logic one to TWSTO bit so send STOP condition on SDA and SCL line.
*   ? 4.      Monitor the status of TWSTO bit, as TWSO bit get cleared means the stop condition has been transmitted.
 */


void TWI_stop(void)
{
    // Clear TWI interrupt flag, Put stop condition on SDA, Enable TWI
    TWCR |= TWCR_TWINT  | TWCR_TWEN | TWCR_TWSTO;    
    while(!(TWCR & TWCR_TWSTO));  // Wait till stop condition is transmitted
}
/**
 ** Read the data from SDA bus 
 *  ?   1.      Clear TWINT flag
*   ?   2.      Set TWEN bit, enable TWI
*   ?   3.      Monitor the status of TWINT flag, as the TIWNT flag get set indicates the value in TWDR has been received.
*   ?   4.      Check for the acknowledgement. If the master wants to receive the last byte from slave, the status of TWSR register will be 0x58.
 */

uint8_t TWI_read(void)
{
    TWCR |= TWCR_TWINT  | TWCR_TWEN;    // Clear TWI interrupt flag,Enable TWI
    TWI_Wait; // Wait till start condition is transmitted
    // while(TWI_GetStatus!= TWI_MR_DTAT_NO_ACK); // Check for the acknowledgement
    return TWDR;

}

uint8_t TW_Read(uint8_t SlaveAddress, uint8_t Reg)
{

    unsigned short r_data;

    TWI_start();
    TWI_write(SlaveAddress);
    TWI_write(Reg);
    TWI_stop();

    TWI_start();
    TWI_write(SlaveAddress+1);
    r_data = TWI_read();
    TWI_stop();

    return r_data;

}


uint8_t TW_Write(uint8_t SlaveAddress,uint8_t Reg, uint8_t w_data)
{
    TWI_start();
    TWI_write(SlaveAddress);
    TWI_write(Reg);
    TWI_write(w_data);
    TWI_stop();

    return 0;
}