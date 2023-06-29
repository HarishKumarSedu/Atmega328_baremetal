/**
 * @file LSM6D3.h
 * @author Harish Kumar Shivaramappa (harishkumarsedu@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-06-28
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef LSM6D3_H__
#define LSM6D3_H__

#include <math.h>

//Application includes 
#include "lsm6d3base.h"
#define LSM6D3Slave_Address 0xD6


// uc controller includes 
#include "i2c.h"


typedef enum 
{
        XL_HM_HIGH_ODRXL_Power_down ,       
        XL_HM_HIGH_ODRXL_1_6_Hz  =11,     
        XL_HM_HIGH_ODRXL_12_5_Hz =1,     
        XL_HM_HIGH_ODRXL_26_Hz ,       
        XL_HM_HIGH_ODRXL_52_Hz ,       
        XL_HM_HIGH_ODRXL_104_Hz ,      
        XL_HM_HIGH_ODRXL_208_Hz ,      
        XL_HM_HIGH_ODRXL_416_Hz ,      
        XL_HM_HIGH_ODRXL_833_Hz ,      
        XL_HM_HIGH_ODRXL_1k_66_kHz ,     
        XL_HM_HIGH_ODRXL_3k_33_kHz ,     
        XL_HM_HIGH_ODRXL_6_66_kHz ,
} XL_HM_HIGH_ODRXL ;

typedef enum 
{
        XL_HM_LOW_ODRXL_Power_down ,           
        XL_HM_LOW_ODRXL_12_5_Hz = 11,     
        XL_HM_LOW_ODRXL_26_Hz = 2,       
        XL_HM_LOW_ODRXL_52_Hz ,       
        XL_HM_LOW_ODRXL_104_Hz ,      
        XL_HM_LOW_ODRXL_208_Hz ,      
        XL_HM_LOW_ODRXL_416_Hz ,      
        XL_HM_LOW_ODRXL_833_Hz ,      
        XL_HM_LOW_ODRXL_1k_66_kHz ,     
        XL_HM_LOW_ODRXL_3k_33_kHz ,     
        XL_HM_LOW_ODRXL_6_66_kHz ,
} XL_HM_LOW_ODRXL ;

typedef enum 
{
        G_HM_HIGH_ODRGyro_Power_down ,       
        G_HM_HIGH_ODRGyro_1_6_Hz  =11,     
        G_HM_HIGH_ODRGyro_12_5_Hz =1,     
        G_HM_HIGH_ODRGyro_26_Hz ,       
        G_HM_HIGH_ODRGyro_52_Hz ,       
        G_HM_HIGH_ODRGyro_104_Hz ,      
        G_HM_HIGH_ODRGyro_208_Hz ,      
        G_HM_HIGH_ODRGyro_416_Hz ,      
        G_HM_HIGH_ODRGyro_833_Hz ,      
        G_HM_HIGH_ODRGyro_1k_66_kHz ,     
        G_HM_HIGH_ODRGyro_3k_33_kHz ,     
        G_HM_HIGH_ODRGyro_6_66_kHz ,
} G_HM_HIGH_ODRGyro ;

typedef enum 
{
        G_HM_LOW_ODRGyro_Power_down ,           
        G_HM_LOW_ODRGyro_12_5_Hz = 11,     
        G_HM_LOW_ODRGyro_26_Hz = 2,       
        G_HM_LOW_ODRGyro_52_Hz ,       
        G_HM_LOW_ODRGyro_104_Hz ,      
        G_HM_LOW_ODRGyro_208_Hz ,      
        G_HM_LOW_ODRGyro_416_Hz ,      
        G_HM_LOW_ODRGyro_833_Hz ,      
        G_HM_LOW_ODRGyro_1k_66_kHz ,     
        G_HM_LOW_ODRGyro_3k_33_kHz ,     
        G_HM_LOW_ODRGyro_6_66_kHz ,
} G_HM_LOW_ODRGyro ;


typedef struct 
{
    int16_t AX;
    int16_t AY;
    int16_t AZ;
    int16_t GX;
    int16_t GY;
    int16_t GZ;

} LSM6D3_Data;


uint8_t LSM6D3_Init(uint8_t SlaveAddress,uint32_t FreQ) ;
uint8_t LSM6D3_Who_Am_I(uint8_t SlaveAddress) ;

void LSM6D3_AXL_ODRXL_Config(uint8_t SlaveAddress,uint8_t ODRXLValue) ; 
void LSM6D3_Gyro_ODRG_Config(uint8_t SlaveAddress,uint8_t ODRGyroValue) ;


void LSM6D3_OUT_XL(uint8_t SlaveAddress, LSM6D3_Data * data) ;

int8_t LSM6D3_OUTX_L_XL(uint8_t SlaveAddress) ;
int8_t LSM6D3_OUTX_H_XL(uint8_t SlaveAddress) ;
int16_t LSM6D3_OUTX_XL(uint8_t SlaveAddress);

int8_t LSM6D3_OUTY_L_XL(uint8_t SlaveAddress) ;
int8_t LSM6D3_OUTY_H_XL(uint8_t SlaveAddress) ;
int16_t LSM6D3_OUTY_XL(uint8_t SlaveAddress);

int8_t LSM6D3_OUTZ_L_XL(uint8_t SlaveAddress) ;
int8_t LSM6D3_OUTZ_H_XL(uint8_t SlaveAddress) ;
int16_t LSM6D3_OUTZ_XL(uint8_t SlaveAddress);

void LSM6D3_OUT_Gyro(uint8_t SlaveAddress, LSM6D3_Data * data) ;

int8_t LSM6D3_OUTX_L_Gyro(uint8_t SlaveAddress) ;
int8_t LSM6D3_OUTX_H_Gyro(uint8_t SlaveAddress) ;
int16_t LSM6D3_OUTX_Gyro(uint8_t SlaveAddress);

int8_t LSM6D3_OUTY_L_Gyro(uint8_t SlaveAddress) ;
int8_t LSM6D3_OUTY_H_Gyro(uint8_t SlaveAddress) ;
int16_t LSM6D3_OUTY_Gyro(uint8_t SlaveAddress);

int8_t LSM6D3_OUTZ_L_Gyro(uint8_t SlaveAddress) ;
int8_t LSM6D3_OUTZ_H_Gyro(uint8_t SlaveAddress) ;
int16_t LSM6D3_OUTZ_Gyro(uint8_t SlaveAddress);

float LSM6D3_Pitch_Angle(uint8_t SlaveAddress) ;
float LSM6D3_Roll_Angle(uint8_t SlaveAddress) ;
#endif