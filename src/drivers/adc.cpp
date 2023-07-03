/**
 * @file adc.cpp
 * @author Harish Kumar Shivaramappa (harishkumarsedu@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-06-29
 * 
 * @copyright Copyright (c) 2023
 * 
 */


#include "adc.h"

uint16_t ADC_Read(ADC_Pinx Pin)
{
    ADMUX |= (ADMUX_REFS1 | ADMUX_REFS0) ;  // Select Internal 1.1V voltage reference with external capacitor at AREF pin

     ADMUX |= (Pin << 0) ; //  Select the adc pin;

     ADCSRA |= ADCSRA_ADEN | ADCSRA_ADSC | (ADC_PRESCALAR_128 <<0) ;
     ADCSRB |= (FREE_RUNNING_MODE << 0); // enable the trigger source 

     // disable the digital buffere 
    // ADC7-6 dosento have the digital buffer 

    if ( Pin < 6)
    {
        DIDR0 |= (1 << Pin) ; // writing 1 in the DIDR0 corresponding digital buffere will be disbaled 
    }
    

    while (!(ADCSRA & ADCSRA_ADIF));

    return ( ((ADCH & 0x03) << 8) | ADCL  ) ; 

    
}

double Analog_Voltage(uint16_t ADCValue)
{

    double adcVoltage = ((ADCVREF*1024)/ADCValue);

    return adcVoltage;
}
