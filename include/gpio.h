/**
 * @file gpio.h
 * @author Harish Kumar Shivaramappa (harishkumarsedu@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-06-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */


#ifndef GPIO_H__
#define GPIO_H__

#include "atmega328.h"
#include "common/io.h"
#include "board/uno_board.h"

typedef struct 
{
    UNO_Board_PinConfigurationsx                  Pin;
    uint8_t                                       ModeReg;
    uint8_t                                       PullUpDownReg;
    uint8_t                                       ValueReg;
    Digital_GPIO_Mode                             Mode;
    Digital_GPIO_Values                           Value;

} GPIO_Init_TypeDef;

/**
 * @brief Appicaltion LEvel functions 
 * 
 * @param 
 */

void LED_Init();
void LED_HIGH();
void LED_LOW();
void LED_Toggle();

/**
 * @brief High LEvel functions 
 * 
 */
void HAL_GPIO_Init(GPIO_Init_TypeDef * GPIOx);

void HAL_GPIO_Set_Input(uint8_t  Reg, uint8_t Mask) ;

/**
 * @brief LOW LEVEL functions 
 * 
 */

void GPIO_Init(IO Pin,uint8_t * Reg, Digital_GPIO_Mode Mode);
void GPIO_Write(uint8_t pin, uint8_t * Reg, Digital_GPIO_Values value );
void GPIO_Toggle(uint8_t Pin, uint8_t * Reg);


#endif