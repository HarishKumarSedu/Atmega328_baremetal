/**
 * @file io.h
 * @author Harish Kumar Shivaramappa (harishkumarsedu@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-06-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef IO_H__
#define IO_H__

#include <stdint.h>

#define __IO volatile

#define BITSET(REG,BITMASK)     (REG |= BITMASK)
#define BITRESET(REG,BITMASK)   (REG |= ~BITMASK)
#define BITFLIP(REG,BITMASK)    (REG ^= BITMASK)


typedef enum 
{
    HIGH,
    LOW,
} Digital_GPIO_Values ; 

typedef enum 
{
    INPUT,
    OUTPUT,
} Digital_GPIO_Mode ; 



#endif