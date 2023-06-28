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
 
void TWI_init_master(void) // Function to initialize master
{
    TWBR=0x01;    // Bit rate
    TWSR &= (~TWSR_TWPS1 & ~TWSR_TWPS0);    // Setting prescalar bits
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
    while(!(TWCR & TWCR_TWINT)); // Wait till start condition is transmitted
    while((TWSR & 0xF8)!= 0x08); // Check for the acknowledgement
}

/**
 * *Send the slave address, data direction bit (write) and wait for the ACK signal
 * ? 1.      Put the seven bit slave address and the direction control bit in TWDR.
 * ? 2.      Clear TWINT flag.
 * ? 3.      Enable TWI by writing logic one to TWEN bit.
 * ? 4.      Monitor the status of TWINT flag, the TWINT flag will get cleared when the data in TWDR is been transmitted.
 * ? 5.      Check for the correct acknowledgement.
 */

void TWI_read_address(unsigned char data)
{
    TWDR=data;    // Address and read instruction
    TWCR |= TWCR_TWINT  | TWCR_TWEN;    // Clear TWI interrupt flag,Enable TWI
    while (!(TWCR & TWCR_TWINT)); // Wait till complete TWDR byte received
    while((TWSR & 0xF8)!= 0x40);  // Check for the acknoledgement
} 
void TWI_write_address(unsigned char data)
{
    TWDR=data;    // Address and read instruction
    TWCR |= TWCR_TWINT  | TWCR_TWEN;    // Clear TWI interrupt flag,Enable TWI
    while (!(TWCR & TWCR_TWINT)); // Wait till complete TWDR byte received
    while((TWSR & 0xF8)!= 0x18);  // Check for the acknoledgement
} 



/**
 ** Send the 8-bit data and wait for the ACK 
    *? 1.      Put the 8 bit data in TWDR. 8 bits = 7 bit slave address + Data direction bit (write = 0).
    *? 2.      Clear TWINT flag.
    *? 3.      Set TWEN bit to enable TWI.
    *? 4.      Monitor the status of TWINT flag to get data transmission completed.
    *? 5.      Check for the acknowledgement.
 */


void TWI_write_data(unsigned char data)
{
    TWDR=data;    // put data in TWDR
    TWCR |= TWCR_TWINT  | TWCR_TWEN;    // Clear TWI interrupt flag,Enable TWI
    while (!(TWCR & TWCR_TWINT)); // Wait till complete TWDR byte transmitted
    while((TWSR & 0xF8) != 0x28); // Check for the acknoledgement
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

uint8_t TWI_read_data(void)
{
    TWCR |= TWCR_TWINT  | TWCR_TWEN;    // Clear TWI interrupt flag,Enable TWI
    while (!(TWCR & TWCR_TWINT)); // Wait till complete TWDR byte transmitted
    while((TWSR & 0xF8) != 0x58); // Check for the acknoledgement
    return TWDR;

}