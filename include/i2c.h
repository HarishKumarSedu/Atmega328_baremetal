/**
 * @file i2c.h
 * @author Harish Kumar Shivaramappa (harishkumarsedu@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-06-27
 * 
 * @copyright Copyright (c) 2023
 * 
 */
 
 #ifndef I2C_H__
 #define I2C_H__

#include "atmega328.h"
#include "common/io.h"

// TWI works in four modes:
// 1.        MASTER as a transmitter.
// 2.        MASTER as a receiver.
// 3.        SLAVE as a receiver.
// 4.        SLAVE as a transmitter.

#define TWI_GetStatus ((TWSR & 0xF8))
#define TWI_Wait      while ((TWCR & TWCR_TWINT) == 0)
// SCL freq= F_CPU/(16+2(TWBR).4^TWPS)
// TWPS is alwys zero so the prescalar is 1 
#define BitRate(FreQ) (((FCPU/FreQ) - 16)*2) 
typedef enum
{

    // Status codes for master transmitter mode 
    TWI_START                       = 0x08,
    TWI_REPEATED_START              = 0x10 ,
    TWI_ARBITARATION_LOST           = 0x38,

    TWI_MT_SLA_ACK                  = 0x18,
    TWI_MT_SLA_NO_ACK               = 0x20,
    TWI_MT_DTAT_ACK                 = 0x28,
    TWI_MT_DTAT_NO_ACK              = 0x30,

   // Status codes for master revicer mode 
    TWI_MR_SLA_ACK                  = 0x40,
    TWI_MR_SLA_NO_ACK               = 0x48,
    TWI_MR_DTAT_ACK                 = 0x50,
    TWI_MR_DTAT_NO_ACK              = 0x58,

} I2C_Status ; 


void TWI_Init_Master(uint32_t FreQ) ;
void TWI_start(void) ;
void TWI_stop(void) ;
void TWI_write(uint8_t data) ;
uint8_t TWI_read(void);

uint8_t TW_Read(uint8_t SlaveAddress, uint8_t Reg) ;
uint8_t TW_Write(uint8_t SlaveAddress,uint8_t Reg, uint8_t w_data) ;

 #endif