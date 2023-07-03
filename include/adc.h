/**
 * @file adc.h
 * @author Harish Kumar Shivaramappa (harishkumarsedu@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-06-29
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef ADC_H__
#define ADC_H__

#include "atmega328.h"

#define ADCVREF 1.1

typedef enum
{
    AREF_INTERNAL_VREF_TRURN_OFF,
    AVCC,
    Internal_1_1V  =3,
} ADC_RererecenceVoltages ; 


typedef enum
{
    ADC0=0,
    ADC1,
    ADC3,
    ADC4,
    ADC5,
    ADC6,
    ADC7,
}ADC_Pinx;


typedef enum 
{
    ADC_PRESCALAR_2 = 1,
    ADC_PRESCALAR_4 = 2,
    ADC_PRESCALAR_8 = 3,
    ADC_PRESCALAR_16 = 4,
    ADC_PRESCALAR_32 = 5,
    ADC_PRESCALAR_64 = 6,
    ADC_PRESCALAR_128 = 7,
} ADC_Prescalar ; 


typedef enum
{
      FREE_RUNNING_MODE,
      ANALOG_COMPARATOR,
      EXTERNAL_INTRRUPT_REQUEST_0,
      TIMER0_COMPARE_MATCH_A,
      TIMER0_OVERFLOW,
      TIMER1_COMPARE_MATCH_B,
      TIMER1_OVERFLOW,
      TIMER1_CPATURE_EVENT,   
} ADC_TRIGGER_SOURCE;

uint16_t ADC_Read(ADC_Pinx Pin) ;
double Analog_Voltage(uint16_t ADCValue) ; 

#endif