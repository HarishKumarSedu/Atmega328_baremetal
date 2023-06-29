/**
 * @file LSM6D3.cpp
 * @author Harish Kumar Shivaramappa (harishkumarsedu@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-06-29
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "app/LSM6D3/LSM6D3.h"


uint8_t LSM6D3_Init(uint8_t SlaveAddress,uint32_t FreQ) 
{
    TWI_Init_Master(FreQ);

    LSM6D3_AXL_ODRXL_Config(SlaveAddress , XL_HM_LOW_ODRXL_416_Hz) ;
    LSM6D3_Gyro_ODRG_Config(SlaveAddress , G_HM_LOW_ODRGyro_416_Hz) ;

    return 0 ;
}


float LSM6D3_Pitch_Angle(uint8_t SlaveAddress)
{
   float pitchAngle = (LSM6D3_OUTX_XL(SlaveAddress)/sqrt(pow(LSM6D3_OUTY_XL(SlaveAddress),2) + pow(LSM6D3_OUTZ_XL(SlaveAddress),2))) ;

    return pitchAngle;
}

void LSM6D3_OUT_XL(uint8_t SlaveAddress, LSM6D3_Data * data)
{
    data->AX = LSM6D3_OUTX_XL(SlaveAddress);
    data->AY = LSM6D3_OUTY_XL(SlaveAddress);
    data->AZ = LSM6D3_OUTZ_XL(SlaveAddress);

}

int16_t LSM6D3_OUTX_XL(uint8_t SlaveAddress)
{

    return (LSM6D3_OUTX_H_XL(SlaveAddress)<<8 |  LSM6D3_OUTX_L_XL(SlaveAddress));
}

int8_t LSM6D3_OUTX_L_XL(uint8_t SlaveAddress)
{

    return TW_Read(SlaveAddress,OUTX_L_XL) ;
}

int8_t LSM6D3_OUTX_H_XL(uint8_t SlaveAddress)
{

    return TW_Read(SlaveAddress,OUTX_H_XL) ;
}

int16_t LSM6D3_OUTY_XL(uint8_t SlaveAddress)
{

    return (LSM6D3_OUTY_H_XL(SlaveAddress)<<8 |  LSM6D3_OUTY_L_XL(SlaveAddress));
}

int8_t LSM6D3_OUTY_L_XL(uint8_t SlaveAddress)
{

    return TW_Read(SlaveAddress,OUTY_L_XL) ;
}

int8_t LSM6D3_OUTY_H_XL(uint8_t SlaveAddress)
{

    return TW_Read(SlaveAddress,OUTY_H_XL) ;
}
int16_t LSM6D3_OUTZ_XL(uint8_t SlaveAddress)
{

    return (LSM6D3_OUTZ_H_XL(SlaveAddress)<<8 |  LSM6D3_OUTZ_L_XL(SlaveAddress));
}

int8_t LSM6D3_OUTZ_L_XL(uint8_t SlaveAddress)
{

    return TW_Read(SlaveAddress,OUTZ_L_XL) ;
}

int8_t LSM6D3_OUTZ_H_XL(uint8_t SlaveAddress)
{

    return TW_Read(SlaveAddress,OUTZ_H_XL) ;
}

void LSM6D3_OUT_Gyro(uint8_t SlaveAddress, LSM6D3_Data * data)
{
    data->GX = LSM6D3_OUTX_Gyro(SlaveAddress);
    data->GY = LSM6D3_OUTY_Gyro(SlaveAddress);
    data->GZ = LSM6D3_OUTZ_Gyro(SlaveAddress);

}


int16_t LSM6D3_OUTX_Gyro(uint8_t SlaveAddress)
{

    return (LSM6D3_OUTX_H_Gyro(SlaveAddress)<<8 |  LSM6D3_OUTX_L_Gyro(SlaveAddress));
}

int8_t LSM6D3_OUTX_L_Gyro(uint8_t SlaveAddress)
{

    return TW_Read(SlaveAddress,OUTX_H_G) ;
}

int8_t LSM6D3_OUTX_H_Gyro(uint8_t SlaveAddress)
{

    return TW_Read(SlaveAddress,OUTX_H_G) ;
}

int16_t LSM6D3_OUTY_Gyro(uint8_t SlaveAddress)
{

    return (LSM6D3_OUTY_H_Gyro(SlaveAddress)<<8 |  LSM6D3_OUTY_L_Gyro(SlaveAddress));
}

int8_t LSM6D3_OUTY_L_Gyro(uint8_t SlaveAddress)
{

    return TW_Read(SlaveAddress,OUTY_L_G) ;
}

int8_t LSM6D3_OUTY_H_Gyro(uint8_t SlaveAddress)
{

    return TW_Read(SlaveAddress,OUTY_H_G) ;
}
int16_t LSM6D3_OUTZ_Gyro(uint8_t SlaveAddress)
{

    return (LSM6D3_OUTZ_H_Gyro(SlaveAddress)<<8 |  LSM6D3_OUTZ_L_Gyro(SlaveAddress));
}

int8_t LSM6D3_OUTZ_L_Gyro(uint8_t SlaveAddress)
{

    return TW_Read(SlaveAddress,OUTZ_L_G) ;
}

int8_t LSM6D3_OUTZ_H_Gyro(uint8_t SlaveAddress)
{

    return TW_Read(SlaveAddress,OUTZ_H_G) ;
}

void LSM6D3_AXL_ODRXL_Config(uint8_t SlaveAddress,uint8_t ODRXLValue)
{
    TW_Write(SlaveAddress, CTRL1_XL , (TW_Read(SlaveAddress,CTRL1_XL) | (ODRXLValue << ODR_XL0_pos))) ; 
}

void LSM6D3_Gyro_ODRG_Config(uint8_t SlaveAddress,uint8_t ODRGyroValue)
{
    TW_Write(SlaveAddress, CTRL2_G , (TW_Read(SlaveAddress,CTRL2_G) | (ODRGyroValue << ODR_G0_pos))) ; 
}


uint8_t LSM6D3_Who_Am_I(uint8_t SlaveAddress) 
{
    return TW_Read(SlaveAddress,WHO_AM_I);
}