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

// TWI works in four modes:
// 1.        MASTER as a transmitter.
// 2.        MASTER as a receiver.
// 3.        SLAVE as a receiver.
// 4.        SLAVE as a transmitter.

typedef enum
{

    // Status codes for master transmitter mode 
    START_CONDITION_TRANSMITED = 0x08,
    REPEATED_START_CONDITION_TRANSMITED =0x10 ,
    SLAW_TRANSMITED_ACK_RECIVED = 0x18,
    SLAW_TRANSMITED_ACK_NOT_RECIVED = 0x20,
    DTAT_TRANSMITED_ACK_RECIVED = 0x28,
    DTAT_TRANSMITED_ACK_NOT_RECIVED = 0x30,
    ARBITARATION_LOST = 0x38,

    // Status codes for master revicer mode 
    SLAR_RECIVED_ACK_RECIVED = 0x40,
    SLAR_RECIVED_ACK_NOT_RECIVED = 0x18,
    DTAT_RECIVED_ACK_RECIVED = 0x50,
    DTAT_RECIVED_ACK_NOT_RECIVED = 0x58,

    SLAW_RECIVED_ACK_RECIVED = 0x60,
    SLAW_RECIVED_ACK_NOT_RECIVED = 0x68,
    GNERAL_CALL_ADDRESS_RECIVED_ACK_RECIVED = 0x70,
} I2C_Status ; 


void TWI_start(void);
void TWI_repeated_start(void);
void TWI_init_master(void);
void TWI_write_address(unsigned char);
void TWI_read_address(unsigned char);
void TWI_write_data(unsigned char);
uint8_t TWI_read_data(void);
void TWI_stop(void);

 #endif