#define UDR0 (*(volatile uint8_t *) (0xC6)) 
#define UBRR0H (*(volatile uint8_t *) (0xC5)) 
#define UBRR0L (*(volatile uint8_t *) (0xC4)) 
#define UCSR0C (*(volatile uint8_t *) (0xC2)) 
#define UCSR0B (*(volatile uint8_t *) (0xC1)) 
#define UCSR0A (*(volatile uint8_t *) (0xC0)) 
#define TWAMR (*(volatile uint8_t *) (0xBD)) 
#define TWCR (*(volatile uint8_t *) (0xBC)) 
#define TWDR (*(volatile uint8_t *) (0xBB)) 
#define TWAR (*(volatile uint8_t *) (0xBA)) 
#define TWSR (*(volatile uint8_t *) (0xB9)) 
#define TWBR (*(volatile uint8_t *) (0xB8)) 
#define ASSR (*(volatile uint8_t *) (0xB6)) 
#define OCR2B (*(volatile uint8_t *) (0xB4)) 
#define OCR2A (*(volatile uint8_t *) (0xB3)) 
#define TCNT2 (*(volatile uint8_t *) (0xB2)) 
#define TCCR2B (*(volatile uint8_t *) (0xB1)) 
#define TCCR2A (*(volatile uint8_t *) (0xB0)) 
#define OCR1BH (*(volatile uint8_t *) (0x8B)) 
#define OCR1BL (*(volatile uint8_t *) (0x8A)) 
#define OCR1AH (*(volatile uint8_t *) (0x89)) 
#define OCR1AL (*(volatile uint8_t *) (0x88)) 
#define ICR1H (*(volatile uint8_t *) (0x87)) 
#define ICR1L (*(volatile uint8_t *) (0x86)) 
#define TCNT1H (*(volatile uint8_t *) (0x85)) 
#define TCNT1L (*(volatile uint8_t *) (0x84)) 
#define TCCR1C (*(volatile uint8_t *) (0x82)) 
#define TCCR1B (*(volatile uint8_t *) (0x81)) 
#define TCCR1A (*(volatile uint8_t *) (0x80)) 
#define DIDR1 (*(volatile uint8_t *) (0x7F)) 
#define DIDR0 (*(volatile uint8_t *) (0x7E)) 
#define ADMUX (*(volatile uint8_t *) (0x7C)) 
#define ADCSRB (*(volatile uint8_t *) (0x7B)) 
#define ADCSRA (*(volatile uint8_t *) (0x7A)) 
#define ADCH (*(volatile uint8_t *) (0x79)) 
#define ADCL (*(volatile uint8_t *) (0x78)) 
#define TIMSK2 (*(volatile uint8_t *) (0x70)) 
#define TIMSK1 (*(volatile uint8_t *) (0x6F)) 
#define TIMSK0 (*(volatile uint8_t *) (0x6E)) 
#define PCMSK2 (*(volatile uint8_t *) (0x6D)) 
#define PCMSK1 (*(volatile uint8_t *) (0x6C)) 
#define PCMSK0 (*(volatile uint8_t *) (0x6B)) 
#define EICRA (*(volatile uint8_t *) (0x69)) 
#define PCICR (*(volatile uint8_t *) (0x68)) 
#define OSCCAL (*(volatile uint8_t *) (0x66)) 
#define PRR (*(volatile uint8_t *) (0x64)) 
#define CLKPR (*(volatile uint8_t *) (0x61)) 
#define WDTCSR (*(volatile uint8_t *) (0x60)) 
#define SREG (*(volatile uint8_t *) 0x3F (0x5F)) 
#define SPH (*(volatile uint8_t *) 0x3E (0x5E)) 
#define SPL (*(volatile uint8_t *) 0x3D (0x5D)) 
#define SPMCSR (*(volatile uint8_t *) 0x37 (0x57)) 
#define MCUCR (*(volatile uint8_t *) 0x35 (0x55)) 
#define MCUSR (*(volatile uint8_t *) 0x34 (0x54)) 
#define SMCR (*(volatile uint8_t *) 0x33 (0x53)) 
#define ACSR (*(volatile uint8_t *) 0x30 (0x50)) 
#define SPDR (*(volatile uint8_t *) 0x2E (0x4E)) 
#define SPSR (*(volatile uint8_t *) 0x2D (0x4D)) 
#define SPCR (*(volatile uint8_t *) 0x2C (0x4C)) 
#define GPIOR2 (*(volatile uint8_t *) 0x2B (0x4B)) 
#define GPIOR1 (*(volatile uint8_t *) 0x2A (0x4A)) 
#define OCR0B (*(volatile uint8_t *) 0x28 (0x48)) 
#define OCR0A (*(volatile uint8_t *) 0x27 (0x47)) 
#define TCNT0 (*(volatile uint8_t *) 0x26 (0x46)) 
#define TCCR0B (*(volatile uint8_t *) 0x25 (0x45)) 
#define TCCR0A (*(volatile uint8_t *) 0x24 (0x44)) 
#define GTCCR (*(volatile uint8_t *) 0x23 (0x43)) 
#define EEARH (*(volatile uint8_t *) 0x22 (0x42)) 
#define EEARL (*(volatile uint8_t *) 0x21 (0x41)) 
#define EEDR (*(volatile uint8_t *) 0x20 (0x40)) 
#define EECR (*(volatile uint8_t *) 0x1F (0x3F)) 
#define GPIOR0 (*(volatile uint8_t *) 0x1E (0x3E)) 
#define EIMSK (*(volatile uint8_t *) 0x1D (0x3D)) 
#define EIFR (*(volatile uint8_t *) 0x1C (0x3C)) 
#define PCIFR (*(volatile uint8_t *) 0x1B (0x3B)) 
#define TIFR2 (*(volatile uint8_t *) 0x17 (0x37)) 
#define TIFR1 (*(volatile uint8_t *) 0x16 (0x36)) 
#define TIFR0 (*(volatile uint8_t *) 0x15 (0x35)) 
#define PORTD (*(volatile uint8_t *) 0x0B (0x2B)) 
#define DDRD (*(volatile uint8_t *) 0x0A (0x2A)) 
#define PIND (*(volatile uint8_t *) 0x09 (0x29)) 
#define PORTC (*(volatile uint8_t *) 0x08 (0x28)) 
#define DDRC (*(volatile uint8_t *) 0x07 (0x27)) 
#define PINC (*(volatile uint8_t *) 0x06 (0x26)) 
#define PORTB (*(volatile uint8_t *) 0x05 (0x25)) 
#define DDRB (*(volatile uint8_t *) 0x04 (0x24)) 
#define PINB (*(volatile uint8_t *) 0x03 (0x23)) 
#define UDR0_nan (*(volatile uint8_t *) 1UL << 7) 
#define UDR0_nan (*(volatile uint8_t *) 1UL << 6) 
#define UDR0_nan (*(volatile uint8_t *) 1UL << 5) 
#define UDR0_nan (*(volatile uint8_t *) 1UL << 4) 
#define UDR0_nan (*(volatile uint8_t *) 1UL << 3) 
#define UDR0_nan (*(volatile uint8_t *) 1UL << 2) 
#define UDR0_nan (*(volatile uint8_t *) 1UL << 1) 
#define UDR0_nan (*(volatile uint8_t *) 1UL << 0) 
#define UBRR0H_nan (*(volatile uint8_t *) 1UL << 7) 
#define UBRR0H_nan (*(volatile uint8_t *) 1UL << 6) 
#define UBRR0H_nan (*(volatile uint8_t *) 1UL << 5) 
#define UBRR0H_nan (*(volatile uint8_t *) 1UL << 4) 
#define UBRR0H_nan (*(volatile uint8_t *) 1UL << 3) 
#define UBRR0H_nan (*(volatile uint8_t *) 1UL << 2) 
#define UBRR0H_nan (*(volatile uint8_t *) 1UL << 1) 
#define UBRR0H_nan (*(volatile uint8_t *) 1UL << 0) 
#define UBRR0L_nan (*(volatile uint8_t *) 1UL << 7) 
#define UBRR0L_nan (*(volatile uint8_t *) 1UL << 6) 
#define UBRR0L_nan (*(volatile uint8_t *) 1UL << 5) 
#define UBRR0L_nan (*(volatile uint8_t *) 1UL << 4) 
#define UBRR0L_nan (*(volatile uint8_t *) 1UL << 3) 
#define UBRR0L_nan (*(volatile uint8_t *) 1UL << 2) 
#define UBRR0L_nan (*(volatile uint8_t *) 1UL << 1) 
#define UBRR0L_nan (*(volatile uint8_t *) 1UL << 0) 
#define UCSR0C_UMSEL00 (*(volatile uint8_t *) 1UL << 7) 
#define UCSR0C_UMSEL00 (*(volatile uint8_t *) 1UL << 6) 
#define UCSR0C_UMSEL00 (*(volatile uint8_t *) 1UL << 5) 
#define UCSR0C_UMSEL00 (*(volatile uint8_t *) 1UL << 4) 
#define UCSR0C_UMSEL00 (*(volatile uint8_t *) 1UL << 3) 
#define UCSR0C_UMSEL00 (*(volatile uint8_t *) 1UL << 2) 
#define UCSR0C_UMSEL00 (*(volatile uint8_t *) 1UL << 1) 
#define UCSR0C_UMSEL00 (*(volatile uint8_t *) 1UL << 0) 
#define UCSR0B_TXCIE0 (*(volatile uint8_t *) 1UL << 7) 
#define UCSR0B_TXCIE0 (*(volatile uint8_t *) 1UL << 6) 
#define UCSR0B_TXCIE0 (*(volatile uint8_t *) 1UL << 5) 
#define UCSR0B_TXCIE0 (*(volatile uint8_t *) 1UL << 4) 
#define UCSR0B_TXCIE0 (*(volatile uint8_t *) 1UL << 3) 
#define UCSR0B_TXCIE0 (*(volatile uint8_t *) 1UL << 2) 
#define UCSR0B_TXCIE0 (*(volatile uint8_t *) 1UL << 1) 
#define UCSR0B_TXCIE0 (*(volatile uint8_t *) 1UL << 0) 
#define UCSR0A_TXC0 (*(volatile uint8_t *) 1UL << 7) 
#define UCSR0A_TXC0 (*(volatile uint8_t *) 1UL << 6) 
#define UCSR0A_TXC0 (*(volatile uint8_t *) 1UL << 5) 
#define UCSR0A_TXC0 (*(volatile uint8_t *) 1UL << 4) 
#define UCSR0A_TXC0 (*(volatile uint8_t *) 1UL << 3) 
#define UCSR0A_TXC0 (*(volatile uint8_t *) 1UL << 2) 
#define UCSR0A_TXC0 (*(volatile uint8_t *) 1UL << 1) 
#define UCSR0A_TXC0 (*(volatile uint8_t *) 1UL << 0) 
#define TWAMR_TWAM5 (*(volatile uint8_t *) 1UL << 7) 
#define TWAMR_TWAM5 (*(volatile uint8_t *) 1UL << 6) 
#define TWAMR_TWAM5 (*(volatile uint8_t *) 1UL << 5) 
#define TWAMR_TWAM5 (*(volatile uint8_t *) 1UL << 4) 
#define TWAMR_TWAM5 (*(volatile uint8_t *) 1UL << 3) 
#define TWAMR_TWAM5 (*(volatile uint8_t *) 1UL << 2) 
#define TWAMR_TWAM5 (*(volatile uint8_t *) 1UL << 0) 
#define TWCR_TWEA (*(volatile uint8_t *) 1UL << 7) 
#define TWCR_TWEA (*(volatile uint8_t *) 1UL << 6) 
#define TWCR_TWEA (*(volatile uint8_t *) 1UL << 5) 
#define TWCR_TWEA (*(volatile uint8_t *) 1UL << 4) 
#define TWCR_TWEA (*(volatile uint8_t *) 1UL << 3) 
#define TWCR_TWEA (*(volatile uint8_t *) 1UL << 1) 
#define TWCR_TWEA (*(volatile uint8_t *) 1UL << 0) 
#define TWDR_nan (*(volatile uint8_t *) 1UL << 7) 
#define TWDR_nan (*(volatile uint8_t *) 1UL << 6) 
#define TWDR_nan (*(volatile uint8_t *) 1UL << 5) 
#define TWDR_nan (*(volatile uint8_t *) 1UL << 4) 
#define TWDR_nan (*(volatile uint8_t *) 1UL << 3) 
#define TWDR_nan (*(volatile uint8_t *) 1UL << 2) 
#define TWDR_nan (*(volatile uint8_t *) 1UL << 1) 
#define TWDR_nan (*(volatile uint8_t *) 1UL << 0) 
#define TWAR_TWA5 (*(volatile uint8_t *) 1UL << 7) 
#define TWAR_TWA5 (*(volatile uint8_t *) 1UL << 6) 
#define TWAR_TWA5 (*(volatile uint8_t *) 1UL << 5) 
#define TWAR_TWA5 (*(volatile uint8_t *) 1UL << 4) 
#define TWAR_TWA5 (*(volatile uint8_t *) 1UL << 3) 
#define TWAR_TWA5 (*(volatile uint8_t *) 1UL << 2) 
#define TWAR_TWA5 (*(volatile uint8_t *) 1UL << 1) 
#define TWAR_TWA5 (*(volatile uint8_t *) 1UL << 0) 
#define TWSR_TWS6 (*(volatile uint8_t *) 1UL << 7) 
#define TWSR_TWS6 (*(volatile uint8_t *) 1UL << 6) 
#define TWSR_TWS6 (*(volatile uint8_t *) 1UL << 5) 
#define TWSR_TWS6 (*(volatile uint8_t *) 1UL << 4) 
#define TWSR_TWS6 (*(volatile uint8_t *) 1UL << 2) 
#define TWSR_TWS6 (*(volatile uint8_t *) 1UL << 1) 
#define TWSR_TWS6 (*(volatile uint8_t *) 1UL << 0) 
#define TWBR_nan (*(volatile uint8_t *) 1UL << 7) 
#define TWBR_nan (*(volatile uint8_t *) 1UL << 6) 
#define TWBR_nan (*(volatile uint8_t *) 1UL << 5) 
#define TWBR_nan (*(volatile uint8_t *) 1UL << 4) 
#define TWBR_nan (*(volatile uint8_t *) 1UL << 3) 
#define TWBR_nan (*(volatile uint8_t *) 1UL << 2) 
#define TWBR_nan (*(volatile uint8_t *) 1UL << 1) 
#define TWBR_nan (*(volatile uint8_t *) 1UL << 0) 
#define ASSR_EXCLK (*(volatile uint8_t *) 1UL << 7) 
#define ASSR_EXCLK (*(volatile uint8_t *) 1UL << 6) 
#define ASSR_EXCLK (*(volatile uint8_t *) 1UL << 5) 
#define ASSR_EXCLK (*(volatile uint8_t *) 1UL << 4) 
#define ASSR_EXCLK (*(volatile uint8_t *) 1UL << 3) 
#define ASSR_EXCLK (*(volatile uint8_t *) 1UL << 2) 
#define ASSR_EXCLK (*(volatile uint8_t *) 1UL << 1) 
#define ASSR_EXCLK (*(volatile uint8_t *) 1UL << 0) 
#define OCR2B_nan (*(volatile uint8_t *) 1UL << 7) 
#define OCR2B_nan (*(volatile uint8_t *) 1UL << 6) 
#define OCR2B_nan (*(volatile uint8_t *) 1UL << 5) 
#define OCR2B_nan (*(volatile uint8_t *) 1UL << 4) 
#define OCR2B_nan (*(volatile uint8_t *) 1UL << 3) 
#define OCR2B_nan (*(volatile uint8_t *) 1UL << 2) 
#define OCR2B_nan (*(volatile uint8_t *) 1UL << 1) 
#define OCR2B_nan (*(volatile uint8_t *) 1UL << 0) 
#define OCR2A_nan (*(volatile uint8_t *) 1UL << 7) 
#define OCR2A_nan (*(volatile uint8_t *) 1UL << 6) 
#define OCR2A_nan (*(volatile uint8_t *) 1UL << 5) 
#define OCR2A_nan (*(volatile uint8_t *) 1UL << 4) 
#define OCR2A_nan (*(volatile uint8_t *) 1UL << 3) 
#define OCR2A_nan (*(volatile uint8_t *) 1UL << 2) 
#define OCR2A_nan (*(volatile uint8_t *) 1UL << 1) 
#define OCR2A_nan (*(volatile uint8_t *) 1UL << 0) 
#define TCNT2_nan (*(volatile uint8_t *) 1UL << 7) 
#define TCNT2_nan (*(volatile uint8_t *) 1UL << 6) 
#define TCNT2_nan (*(volatile uint8_t *) 1UL << 5) 
#define TCNT2_nan (*(volatile uint8_t *) 1UL << 4) 
#define TCNT2_nan (*(volatile uint8_t *) 1UL << 3) 
#define TCNT2_nan (*(volatile uint8_t *) 1UL << 2) 
#define TCNT2_nan (*(volatile uint8_t *) 1UL << 1) 
#define TCNT2_nan (*(volatile uint8_t *) 1UL << 0) 
#define TCCR2B_FOC2B (*(volatile uint8_t *) 1UL << 7) 
#define TCCR2B_FOC2B (*(volatile uint8_t *) 1UL << 4) 
#define TCCR2B_FOC2B (*(volatile uint8_t *) 1UL << 3) 
#define TCCR2B_FOC2B (*(volatile uint8_t *) 1UL << 2) 
#define TCCR2B_FOC2B (*(volatile uint8_t *) 1UL << 1) 
#define TCCR2B_FOC2B (*(volatile uint8_t *) 1UL << 0) 
#define TCCR2A_COM2A0 (*(volatile uint8_t *) 1UL << 7) 
#define TCCR2A_COM2A0 (*(volatile uint8_t *) 1UL << 6) 
#define TCCR2A_COM2A0 (*(volatile uint8_t *) 1UL << 5) 
#define TCCR2A_COM2A0 (*(volatile uint8_t *) 1UL << 2) 
#define TCCR2A_COM2A0 (*(volatile uint8_t *) 1UL << 1) 
#define TCCR2A_COM2A0 (*(volatile uint8_t *) 1UL << 0) 
#define OCR1BH_nan (*(volatile uint8_t *) 1UL << 7) 
#define OCR1BH_nan (*(volatile uint8_t *) 1UL << 6) 
#define OCR1BH_nan (*(volatile uint8_t *) 1UL << 5) 
#define OCR1BH_nan (*(volatile uint8_t *) 1UL << 4) 
#define OCR1BH_nan (*(volatile uint8_t *) 1UL << 3) 
#define OCR1BH_nan (*(volatile uint8_t *) 1UL << 2) 
#define OCR1BH_nan (*(volatile uint8_t *) 1UL << 1) 
#define OCR1BH_nan (*(volatile uint8_t *) 1UL << 0) 
#define OCR1BL_nan (*(volatile uint8_t *) 1UL << 7) 
#define OCR1BL_nan (*(volatile uint8_t *) 1UL << 6) 
#define OCR1BL_nan (*(volatile uint8_t *) 1UL << 5) 
#define OCR1BL_nan (*(volatile uint8_t *) 1UL << 4) 
#define OCR1BL_nan (*(volatile uint8_t *) 1UL << 3) 
#define OCR1BL_nan (*(volatile uint8_t *) 1UL << 2) 
#define OCR1BL_nan (*(volatile uint8_t *) 1UL << 1) 
#define OCR1BL_nan (*(volatile uint8_t *) 1UL << 0) 
#define OCR1AH_nan (*(volatile uint8_t *) 1UL << 7) 
#define OCR1AH_nan (*(volatile uint8_t *) 1UL << 6) 
#define OCR1AH_nan (*(volatile uint8_t *) 1UL << 5) 
#define OCR1AH_nan (*(volatile uint8_t *) 1UL << 4) 
#define OCR1AH_nan (*(volatile uint8_t *) 1UL << 3) 
#define OCR1AH_nan (*(volatile uint8_t *) 1UL << 2) 
#define OCR1AH_nan (*(volatile uint8_t *) 1UL << 1) 
#define OCR1AH_nan (*(volatile uint8_t *) 1UL << 0) 
#define OCR1AL_nan (*(volatile uint8_t *) 1UL << 7) 
#define OCR1AL_nan (*(volatile uint8_t *) 1UL << 6) 
#define OCR1AL_nan (*(volatile uint8_t *) 1UL << 5) 
#define OCR1AL_nan (*(volatile uint8_t *) 1UL << 4) 
#define OCR1AL_nan (*(volatile uint8_t *) 1UL << 3) 
#define OCR1AL_nan (*(volatile uint8_t *) 1UL << 2) 
#define OCR1AL_nan (*(volatile uint8_t *) 1UL << 1) 
#define OCR1AL_nan (*(volatile uint8_t *) 1UL << 0) 
#define ICR1H_nan (*(volatile uint8_t *) 1UL << 7) 
#define ICR1H_nan (*(volatile uint8_t *) 1UL << 6) 
#define ICR1H_nan (*(volatile uint8_t *) 1UL << 5) 
#define ICR1H_nan (*(volatile uint8_t *) 1UL << 4) 
#define ICR1H_nan (*(volatile uint8_t *) 1UL << 3) 
#define ICR1H_nan (*(volatile uint8_t *) 1UL << 2) 
#define ICR1H_nan (*(volatile uint8_t *) 1UL << 1) 
#define ICR1H_nan (*(volatile uint8_t *) 1UL << 0) 
#define ICR1L_nan (*(volatile uint8_t *) 1UL << 7) 
#define ICR1L_nan (*(volatile uint8_t *) 1UL << 6) 
#define ICR1L_nan (*(volatile uint8_t *) 1UL << 5) 
#define ICR1L_nan (*(volatile uint8_t *) 1UL << 4) 
#define ICR1L_nan (*(volatile uint8_t *) 1UL << 3) 
#define ICR1L_nan (*(volatile uint8_t *) 1UL << 2) 
#define ICR1L_nan (*(volatile uint8_t *) 1UL << 1) 
#define ICR1L_nan (*(volatile uint8_t *) 1UL << 0) 
#define TCNT1H_nan (*(volatile uint8_t *) 1UL << 7) 
#define TCNT1H_nan (*(volatile uint8_t *) 1UL << 6) 
#define TCNT1H_nan (*(volatile uint8_t *) 1UL << 5) 
#define TCNT1H_nan (*(volatile uint8_t *) 1UL << 4) 
#define TCNT1H_nan (*(volatile uint8_t *) 1UL << 3) 
#define TCNT1H_nan (*(volatile uint8_t *) 1UL << 2) 
#define TCNT1H_nan (*(volatile uint8_t *) 1UL << 1) 
#define TCNT1H_nan (*(volatile uint8_t *) 1UL << 0) 
#define TCNT1L_nan (*(volatile uint8_t *) 1UL << 7) 
#define TCNT1L_nan (*(volatile uint8_t *) 1UL << 6) 
#define TCNT1L_nan (*(volatile uint8_t *) 1UL << 5) 
#define TCNT1L_nan (*(volatile uint8_t *) 1UL << 4) 
#define TCNT1L_nan (*(volatile uint8_t *) 1UL << 3) 
#define TCNT1L_nan (*(volatile uint8_t *) 1UL << 2) 
#define TCNT1L_nan (*(volatile uint8_t *) 1UL << 1) 
#define TCNT1L_nan (*(volatile uint8_t *) 1UL << 0) 
#define TCCR1C_FOC1B (*(volatile uint8_t *) 1UL << 7) 
#define TCCR1C_FOC1B (*(volatile uint8_t *) 1UL << 0) 
#define TCCR1B_ICES1 (*(volatile uint8_t *) 1UL << 7) 
#define TCCR1B_ICES1 (*(volatile uint8_t *) 1UL << 5) 
#define TCCR1B_ICES1 (*(volatile uint8_t *) 1UL << 4) 
#define TCCR1B_ICES1 (*(volatile uint8_t *) 1UL << 3) 
#define TCCR1B_ICES1 (*(volatile uint8_t *) 1UL << 2) 
#define TCCR1B_ICES1 (*(volatile uint8_t *) 1UL << 1) 
#define TCCR1B_ICES1 (*(volatile uint8_t *) 1UL << 0) 
#define TCCR1A_COM1A0 (*(volatile uint8_t *) 1UL << 7) 
#define TCCR1A_COM1A0 (*(volatile uint8_t *) 1UL << 6) 
#define TCCR1A_COM1A0 (*(volatile uint8_t *) 1UL << 5) 
#define TCCR1A_COM1A0 (*(volatile uint8_t *) 1UL << 2) 
#define TCCR1A_COM1A0 (*(volatile uint8_t *) 1UL << 1) 
#define TCCR1A_COM1A0 (*(volatile uint8_t *) 1UL << 0) 
#define DIDR1_� (*(volatile uint8_t *) 1UL << 2) 
#define DIDR1_� (*(volatile uint8_t *) 1UL << 1) 
#define DIDR1_� (*(volatile uint8_t *) 1UL << 0) 
#define DIDR0_� (*(volatile uint8_t *) 1UL << 6) 
#define DIDR0_� (*(volatile uint8_t *) 1UL << 5) 
#define DIDR0_� (*(volatile uint8_t *) 1UL << 4) 
#define DIDR0_� (*(volatile uint8_t *) 1UL << 3) 
#define DIDR0_� (*(volatile uint8_t *) 1UL << 2) 
#define DIDR0_� (*(volatile uint8_t *) 1UL << 1) 
#define DIDR0_� (*(volatile uint8_t *) 1UL << 0) 
#define ADMUX_REFS0 (*(volatile uint8_t *) 1UL << 7) 
#define ADMUX_REFS0 (*(volatile uint8_t *) 1UL << 6) 
#define ADMUX_REFS0 (*(volatile uint8_t *) 1UL << 4) 
#define ADMUX_REFS0 (*(volatile uint8_t *) 1UL << 3) 
#define ADMUX_REFS0 (*(volatile uint8_t *) 1UL << 2) 
#define ADMUX_REFS0 (*(volatile uint8_t *) 1UL << 1) 
#define ADMUX_REFS0 (*(volatile uint8_t *) 1UL << 0) 
#define ADCSRB_ACME (*(volatile uint8_t *) 1UL << 7) 
#define ADCSRB_ACME (*(volatile uint8_t *) 1UL << 3) 
#define ADCSRB_ACME (*(volatile uint8_t *) 1UL << 2) 
#define ADCSRB_ACME (*(volatile uint8_t *) 1UL << 1) 
#define ADCSRB_ACME (*(volatile uint8_t *) 1UL << 0) 
#define ADCSRA_ADSC (*(volatile uint8_t *) 1UL << 7) 
#define ADCSRA_ADSC (*(volatile uint8_t *) 1UL << 6) 
#define ADCSRA_ADSC (*(volatile uint8_t *) 1UL << 5) 
#define ADCSRA_ADSC (*(volatile uint8_t *) 1UL << 4) 
#define ADCSRA_ADSC (*(volatile uint8_t *) 1UL << 3) 
#define ADCSRA_ADSC (*(volatile uint8_t *) 1UL << 2) 
#define ADCSRA_ADSC (*(volatile uint8_t *) 1UL << 1) 
#define ADCSRA_ADSC (*(volatile uint8_t *) 1UL << 0) 
#define ADCH_nan (*(volatile uint8_t *) 1UL << 7) 
#define ADCH_nan (*(volatile uint8_t *) 1UL << 6) 
#define ADCH_nan (*(volatile uint8_t *) 1UL << 5) 
#define ADCH_nan (*(volatile uint8_t *) 1UL << 4) 
#define ADCH_nan (*(volatile uint8_t *) 1UL << 3) 
#define ADCH_nan (*(volatile uint8_t *) 1UL << 2) 
#define ADCH_nan (*(volatile uint8_t *) 1UL << 1) 
#define ADCH_nan (*(volatile uint8_t *) 1UL << 0) 
#define ADCL_nan (*(volatile uint8_t *) 1UL << 7) 
#define ADCL_nan (*(volatile uint8_t *) 1UL << 6) 
#define ADCL_nan (*(volatile uint8_t *) 1UL << 5) 
#define ADCL_nan (*(volatile uint8_t *) 1UL << 4) 
#define ADCL_nan (*(volatile uint8_t *) 1UL << 3) 
#define ADCL_nan (*(volatile uint8_t *) 1UL << 2) 
#define ADCL_nan (*(volatile uint8_t *) 1UL << 1) 
#define ADCL_nan (*(volatile uint8_t *) 1UL << 0) 
#define TIMSK2_� (*(volatile uint8_t *) 1UL << 3) 
#define TIMSK2_� (*(volatile uint8_t *) 1UL << 2) 
#define TIMSK2_� (*(volatile uint8_t *) 1UL << 1) 
#define TIMSK2_� (*(volatile uint8_t *) 1UL << 0) 
#define TIMSK1_� (*(volatile uint8_t *) 1UL << 6) 
#define TIMSK1_� (*(volatile uint8_t *) 1UL << 3) 
#define TIMSK1_� (*(volatile uint8_t *) 1UL << 2) 
#define TIMSK1_� (*(volatile uint8_t *) 1UL << 1) 
#define TIMSK1_� (*(volatile uint8_t *) 1UL << 0) 
#define TIMSK0_� (*(volatile uint8_t *) 1UL << 3) 
#define TIMSK0_� (*(volatile uint8_t *) 1UL << 2) 
#define TIMSK0_� (*(volatile uint8_t *) 1UL << 1) 
#define TIMSK0_� (*(volatile uint8_t *) 1UL << 0) 
#define PCMSK2_PCINT22 (*(volatile uint8_t *) 1UL << 7) 
#define PCMSK2_PCINT22 (*(volatile uint8_t *) 1UL << 6) 
#define PCMSK2_PCINT22 (*(volatile uint8_t *) 1UL << 5) 
#define PCMSK2_PCINT22 (*(volatile uint8_t *) 1UL << 4) 
#define PCMSK2_PCINT22 (*(volatile uint8_t *) 1UL << 3) 
#define PCMSK2_PCINT22 (*(volatile uint8_t *) 1UL << 2) 
#define PCMSK2_PCINT22 (*(volatile uint8_t *) 1UL << 1) 
#define PCMSK2_PCINT22 (*(volatile uint8_t *) 1UL << 0) 
#define PCMSK1_PCINT14 (*(volatile uint8_t *) 1UL << 7) 
#define PCMSK1_PCINT14 (*(volatile uint8_t *) 1UL << 6) 
#define PCMSK1_PCINT14 (*(volatile uint8_t *) 1UL << 5) 
#define PCMSK1_PCINT14 (*(volatile uint8_t *) 1UL << 4) 
#define PCMSK1_PCINT14 (*(volatile uint8_t *) 1UL << 3) 
#define PCMSK1_PCINT14 (*(volatile uint8_t *) 1UL << 2) 
#define PCMSK1_PCINT14 (*(volatile uint8_t *) 1UL << 1) 
#define PCMSK1_PCINT14 (*(volatile uint8_t *) 1UL << 0) 
#define PCMSK0_PCINT6 (*(volatile uint8_t *) 1UL << 7) 
#define PCMSK0_PCINT6 (*(volatile uint8_t *) 1UL << 6) 
#define PCMSK0_PCINT6 (*(volatile uint8_t *) 1UL << 5) 
#define PCMSK0_PCINT6 (*(volatile uint8_t *) 1UL << 4) 
#define PCMSK0_PCINT6 (*(volatile uint8_t *) 1UL << 3) 
#define PCMSK0_PCINT6 (*(volatile uint8_t *) 1UL << 2) 
#define PCMSK0_PCINT6 (*(volatile uint8_t *) 1UL << 1) 
#define PCMSK0_PCINT6 (*(volatile uint8_t *) 1UL << 0) 
#define EICRA_� (*(volatile uint8_t *) 1UL << 4) 
#define EICRA_� (*(volatile uint8_t *) 1UL << 3) 
#define EICRA_� (*(volatile uint8_t *) 1UL << 2) 
#define EICRA_� (*(volatile uint8_t *) 1UL << 1) 
#define EICRA_� (*(volatile uint8_t *) 1UL << 0) 
#define PCICR_� (*(volatile uint8_t *) 1UL << 3) 
#define PCICR_� (*(volatile uint8_t *) 1UL << 2) 
#define PCICR_� (*(volatile uint8_t *) 1UL << 1) 
#define PCICR_� (*(volatile uint8_t *) 1UL << 0) 
#define OSCCAL_nan (*(volatile uint8_t *) 1UL << 7) 
#define OSCCAL_nan (*(volatile uint8_t *) 1UL << 6) 
#define OSCCAL_nan (*(volatile uint8_t *) 1UL << 5) 
#define OSCCAL_nan (*(volatile uint8_t *) 1UL << 4) 
#define OSCCAL_nan (*(volatile uint8_t *) 1UL << 3) 
#define OSCCAL_nan (*(volatile uint8_t *) 1UL << 2) 
#define OSCCAL_nan (*(volatile uint8_t *) 1UL << 1) 
#define OSCCAL_nan (*(volatile uint8_t *) 1UL << 0) 
#define PRR_PRTIM2 (*(volatile uint8_t *) 1UL << 7) 
#define PRR_PRTIM2 (*(volatile uint8_t *) 1UL << 6) 
#define PRR_PRTIM2 (*(volatile uint8_t *) 1UL << 4) 
#define PRR_PRTIM2 (*(volatile uint8_t *) 1UL << 3) 
#define PRR_PRTIM2 (*(volatile uint8_t *) 1UL << 2) 
#define PRR_PRTIM2 (*(volatile uint8_t *) 1UL << 1) 
#define PRR_PRTIM2 (*(volatile uint8_t *) 1UL << 0) 
#define CLKPR_� (*(volatile uint8_t *) 1UL << 4) 
#define CLKPR_� (*(volatile uint8_t *) 1UL << 3) 
#define CLKPR_� (*(volatile uint8_t *) 1UL << 2) 
#define CLKPR_� (*(volatile uint8_t *) 1UL << 1) 
#define CLKPR_� (*(volatile uint8_t *) 1UL << 0) 
#define WDTCSR_WDIE (*(volatile uint8_t *) 1UL << 7) 
#define WDTCSR_WDIE (*(volatile uint8_t *) 1UL << 6) 
#define WDTCSR_WDIE (*(volatile uint8_t *) 1UL << 5) 
#define WDTCSR_WDIE (*(volatile uint8_t *) 1UL << 4) 
#define WDTCSR_WDIE (*(volatile uint8_t *) 1UL << 3) 
#define WDTCSR_WDIE (*(volatile uint8_t *) 1UL << 2) 
#define WDTCSR_WDIE (*(volatile uint8_t *) 1UL << 1) 
#define WDTCSR_WDIE (*(volatile uint8_t *) 1UL << 0) 
#define SREG_T (*(volatile uint8_t *) 1UL << 7) 
#define SREG_T (*(volatile uint8_t *) 1UL << 6) 
#define SREG_T (*(volatile uint8_t *) 1UL << 5) 
#define SREG_T (*(volatile uint8_t *) 1UL << 4) 
#define SREG_T (*(volatile uint8_t *) 1UL << 3) 
#define SREG_T (*(volatile uint8_t *) 1UL << 2) 
#define SREG_T (*(volatile uint8_t *) 1UL << 1) 
#define SREG_T (*(volatile uint8_t *) 1UL << 0) 
#define SPH_� (*(volatile uint8_t *) 1UL << 3) 
#define SPH_� (*(volatile uint8_t *) 1UL << 2) 
#define SPH_� (*(volatile uint8_t *) 1UL << 1) 
#define SPH_� (*(volatile uint8_t *) 1UL << 0) 
#define SPL_SP6 (*(volatile uint8_t *) 1UL << 7) 
#define SPL_SP6 (*(volatile uint8_t *) 1UL << 6) 
#define SPL_SP6 (*(volatile uint8_t *) 1UL << 5) 
#define SPL_SP6 (*(volatile uint8_t *) 1UL << 4) 
#define SPL_SP6 (*(volatile uint8_t *) 1UL << 3) 
#define SPL_SP6 (*(volatile uint8_t *) 1UL << 2) 
#define SPL_SP6 (*(volatile uint8_t *) 1UL << 1) 
#define SPL_SP6 (*(volatile uint8_t *) 1UL << 0) 
#define SPMCSR_(RWWSB) (*(volatile uint8_t *) 1UL << 7) 
#define SPMCSR_(RWWSB) (*(volatile uint8_t *) 1UL << 5) 
#define SPMCSR_(RWWSB) (*(volatile uint8_t *) 1UL << 4) 
#define SPMCSR_(RWWSB) (*(volatile uint8_t *) 1UL << 3) 
#define SPMCSR_(RWWSB) (*(volatile uint8_t *) 1UL << 2) 
#define SPMCSR_(RWWSB) (*(volatile uint8_t *) 1UL << 1) 
#define SPMCSR_(RWWSB) (*(volatile uint8_t *) 1UL << 0) 
#define MCUCR_BODS (*(volatile uint8_t *) 1UL << 7) 
#define MCUCR_BODS (*(volatile uint8_t *) 1UL << 6) 
#define MCUCR_BODS (*(volatile uint8_t *) 1UL << 5) 
#define MCUCR_BODS (*(volatile uint8_t *) 1UL << 2) 
#define MCUCR_BODS (*(volatile uint8_t *) 1UL << 1) 
#define MCUCR_BODS (*(volatile uint8_t *) 1UL << 0) 
#define MCUSR_� (*(volatile uint8_t *) 1UL << 4) 
#define MCUSR_� (*(volatile uint8_t *) 1UL << 3) 
#define MCUSR_� (*(volatile uint8_t *) 1UL << 2) 
#define MCUSR_� (*(volatile uint8_t *) 1UL << 1) 
#define MCUSR_� (*(volatile uint8_t *) 1UL << 0) 
#define SMCR_� (*(volatile uint8_t *) 1UL << 4) 
#define SMCR_� (*(volatile uint8_t *) 1UL << 3) 
#define SMCR_� (*(volatile uint8_t *) 1UL << 2) 
#define SMCR_� (*(volatile uint8_t *) 1UL << 1) 
#define SMCR_� (*(volatile uint8_t *) 1UL << 0) 
#define ACSR_ACBG (*(volatile uint8_t *) 1UL << 7) 
#define ACSR_ACBG (*(volatile uint8_t *) 1UL << 6) 
#define ACSR_ACBG (*(volatile uint8_t *) 1UL << 5) 
#define ACSR_ACBG (*(volatile uint8_t *) 1UL << 4) 
#define ACSR_ACBG (*(volatile uint8_t *) 1UL << 3) 
#define ACSR_ACBG (*(volatile uint8_t *) 1UL << 2) 
#define ACSR_ACBG (*(volatile uint8_t *) 1UL << 1) 
#define ACSR_ACBG (*(volatile uint8_t *) 1UL << 0) 
#define SPDR_nan (*(volatile uint8_t *) 1UL << 7) 
#define SPDR_nan (*(volatile uint8_t *) 1UL << 6) 
#define SPDR_nan (*(volatile uint8_t *) 1UL << 5) 
#define SPDR_nan (*(volatile uint8_t *) 1UL << 4) 
#define SPDR_nan (*(volatile uint8_t *) 1UL << 3) 
#define SPDR_nan (*(volatile uint8_t *) 1UL << 2) 
#define SPDR_nan (*(volatile uint8_t *) 1UL << 1) 
#define SPDR_nan (*(volatile uint8_t *) 1UL << 0) 
#define SPSR_WCOL (*(volatile uint8_t *) 1UL << 7) 
#define SPSR_WCOL (*(volatile uint8_t *) 1UL << 1) 
#define SPSR_WCOL (*(volatile uint8_t *) 1UL << 0) 
#define SPCR_SPE (*(volatile uint8_t *) 1UL << 7) 
#define SPCR_SPE (*(volatile uint8_t *) 1UL << 6) 
#define SPCR_SPE (*(volatile uint8_t *) 1UL << 5) 
#define SPCR_SPE (*(volatile uint8_t *) 1UL << 4) 
#define SPCR_SPE (*(volatile uint8_t *) 1UL << 3) 
#define SPCR_SPE (*(volatile uint8_t *) 1UL << 2) 
#define SPCR_SPE (*(volatile uint8_t *) 1UL << 1) 
#define SPCR_SPE (*(volatile uint8_t *) 1UL << 0) 
#define GPIOR2_nan (*(volatile uint8_t *) 1UL << 7) 
#define GPIOR2_nan (*(volatile uint8_t *) 1UL << 6) 
#define GPIOR2_nan (*(volatile uint8_t *) 1UL << 5) 
#define GPIOR2_nan (*(volatile uint8_t *) 1UL << 4) 
#define GPIOR2_nan (*(volatile uint8_t *) 1UL << 3) 
#define GPIOR2_nan (*(volatile uint8_t *) 1UL << 2) 
#define GPIOR2_nan (*(volatile uint8_t *) 1UL << 1) 
#define GPIOR2_nan (*(volatile uint8_t *) 1UL << 0) 
#define GPIOR1_nan (*(volatile uint8_t *) 1UL << 7) 
#define GPIOR1_nan (*(volatile uint8_t *) 1UL << 6) 
#define GPIOR1_nan (*(volatile uint8_t *) 1UL << 5) 
#define GPIOR1_nan (*(volatile uint8_t *) 1UL << 4) 
#define GPIOR1_nan (*(volatile uint8_t *) 1UL << 3) 
#define GPIOR1_nan (*(volatile uint8_t *) 1UL << 2) 
#define GPIOR1_nan (*(volatile uint8_t *) 1UL << 1) 
#define GPIOR1_nan (*(volatile uint8_t *) 1UL << 0) 
#define OCR0B_nan (*(volatile uint8_t *) 1UL << 7) 
#define OCR0B_nan (*(volatile uint8_t *) 1UL << 6) 
#define OCR0B_nan (*(volatile uint8_t *) 1UL << 5) 
#define OCR0B_nan (*(volatile uint8_t *) 1UL << 4) 
#define OCR0B_nan (*(volatile uint8_t *) 1UL << 3) 
#define OCR0B_nan (*(volatile uint8_t *) 1UL << 2) 
#define OCR0B_nan (*(volatile uint8_t *) 1UL << 1) 
#define OCR0B_nan (*(volatile uint8_t *) 1UL << 0) 
#define OCR0A_nan (*(volatile uint8_t *) 1UL << 7) 
#define OCR0A_nan (*(volatile uint8_t *) 1UL << 6) 
#define OCR0A_nan (*(volatile uint8_t *) 1UL << 5) 
#define OCR0A_nan (*(volatile uint8_t *) 1UL << 4) 
#define OCR0A_nan (*(volatile uint8_t *) 1UL << 3) 
#define OCR0A_nan (*(volatile uint8_t *) 1UL << 2) 
#define OCR0A_nan (*(volatile uint8_t *) 1UL << 1) 
#define OCR0A_nan (*(volatile uint8_t *) 1UL << 0) 
#define TCNT0_nan (*(volatile uint8_t *) 1UL << 7) 
#define TCNT0_nan (*(volatile uint8_t *) 1UL << 6) 
#define TCNT0_nan (*(volatile uint8_t *) 1UL << 5) 
#define TCNT0_nan (*(volatile uint8_t *) 1UL << 4) 
#define TCNT0_nan (*(volatile uint8_t *) 1UL << 3) 
#define TCNT0_nan (*(volatile uint8_t *) 1UL << 2) 
#define TCNT0_nan (*(volatile uint8_t *) 1UL << 1) 
#define TCNT0_nan (*(volatile uint8_t *) 1UL << 0) 
#define TCCR0B_FOC0B (*(volatile uint8_t *) 1UL << 7) 
#define TCCR0B_FOC0B (*(volatile uint8_t *) 1UL << 4) 
#define TCCR0B_FOC0B (*(volatile uint8_t *) 1UL << 3) 
#define TCCR0B_FOC0B (*(volatile uint8_t *) 1UL << 2) 
#define TCCR0B_FOC0B (*(volatile uint8_t *) 1UL << 1) 
#define TCCR0B_FOC0B (*(volatile uint8_t *) 1UL << 0) 
#define TCCR0A_COM0A0 (*(volatile uint8_t *) 1UL << 7) 
#define TCCR0A_COM0A0 (*(volatile uint8_t *) 1UL << 6) 
#define TCCR0A_COM0A0 (*(volatile uint8_t *) 1UL << 5) 
#define TCCR0A_COM0A0 (*(volatile uint8_t *) 1UL << 2) 
#define TCCR0A_COM0A0 (*(volatile uint8_t *) 1UL << 1) 
#define TCCR0A_COM0A0 (*(volatile uint8_t *) 1UL << 0) 
#define GTCCR_� (*(volatile uint8_t *) 1UL << 2) 
#define GTCCR_� (*(volatile uint8_t *) 1UL << 1) 
#define GTCCR_� (*(volatile uint8_t *) 1UL << 0) 
#define EEARH_nan (*(volatile uint8_t *) 1UL << 7) 
#define EEARH_nan (*(volatile uint8_t *) 1UL << 6) 
#define EEARH_nan (*(volatile uint8_t *) 1UL << 5) 
#define EEARH_nan (*(volatile uint8_t *) 1UL << 4) 
#define EEARH_nan (*(volatile uint8_t *) 1UL << 3) 
#define EEARH_nan (*(volatile uint8_t *) 1UL << 2) 
#define EEARH_nan (*(volatile uint8_t *) 1UL << 1) 
#define EEARH_nan (*(volatile uint8_t *) 1UL << 0) 
#define EEARL_nan (*(volatile uint8_t *) 1UL << 7) 
#define EEARL_nan (*(volatile uint8_t *) 1UL << 6) 
#define EEARL_nan (*(volatile uint8_t *) 1UL << 5) 
#define EEARL_nan (*(volatile uint8_t *) 1UL << 4) 
#define EEARL_nan (*(volatile uint8_t *) 1UL << 3) 
#define EEARL_nan (*(volatile uint8_t *) 1UL << 2) 
#define EEARL_nan (*(volatile uint8_t *) 1UL << 1) 
#define EEARL_nan (*(volatile uint8_t *) 1UL << 0) 
#define EEDR_nan (*(volatile uint8_t *) 1UL << 7) 
#define EEDR_nan (*(volatile uint8_t *) 1UL << 6) 
#define EEDR_nan (*(volatile uint8_t *) 1UL << 5) 
#define EEDR_nan (*(volatile uint8_t *) 1UL << 4) 
#define EEDR_nan (*(volatile uint8_t *) 1UL << 3) 
#define EEDR_nan (*(volatile uint8_t *) 1UL << 2) 
#define EEDR_nan (*(volatile uint8_t *) 1UL << 1) 
#define EEDR_nan (*(volatile uint8_t *) 1UL << 0) 
#define EECR_� (*(volatile uint8_t *) 1UL << 6) 
#define EECR_� (*(volatile uint8_t *) 1UL << 5) 
#define EECR_� (*(volatile uint8_t *) 1UL << 4) 
#define EECR_� (*(volatile uint8_t *) 1UL << 3) 
#define EECR_� (*(volatile uint8_t *) 1UL << 2) 
#define EECR_� (*(volatile uint8_t *) 1UL << 1) 
#define EECR_� (*(volatile uint8_t *) 1UL << 0) 
#define GPIOR0_nan (*(volatile uint8_t *) 1UL << 7) 
#define GPIOR0_nan (*(volatile uint8_t *) 1UL << 6) 
#define GPIOR0_nan (*(volatile uint8_t *) 1UL << 5) 
#define GPIOR0_nan (*(volatile uint8_t *) 1UL << 4) 
#define GPIOR0_nan (*(volatile uint8_t *) 1UL << 3) 
#define GPIOR0_nan (*(volatile uint8_t *) 1UL << 2) 
#define GPIOR0_nan (*(volatile uint8_t *) 1UL << 1) 
#define GPIOR0_nan (*(volatile uint8_t *) 1UL << 0) 
#define EIMSK_� (*(volatile uint8_t *) 1UL << 2) 
#define EIMSK_� (*(volatile uint8_t *) 1UL << 1) 
#define EIMSK_� (*(volatile uint8_t *) 1UL << 0) 
#define EIFR_� (*(volatile uint8_t *) 1UL << 2) 
#define EIFR_� (*(volatile uint8_t *) 1UL << 1) 
#define EIFR_� (*(volatile uint8_t *) 1UL << 0) 
#define PCIFR_� (*(volatile uint8_t *) 1UL << 3) 
#define PCIFR_� (*(volatile uint8_t *) 1UL << 2) 
#define PCIFR_� (*(volatile uint8_t *) 1UL << 1) 
#define PCIFR_� (*(volatile uint8_t *) 1UL << 0) 
#define TIFR2_� (*(volatile uint8_t *) 1UL << 3) 
#define TIFR2_� (*(volatile uint8_t *) 1UL << 2) 
#define TIFR2_� (*(volatile uint8_t *) 1UL << 1) 
#define TIFR2_� (*(volatile uint8_t *) 1UL << 0) 
#define TIFR1_� (*(volatile uint8_t *) 1UL << 6) 
#define TIFR1_� (*(volatile uint8_t *) 1UL << 3) 
#define TIFR1_� (*(volatile uint8_t *) 1UL << 2) 
#define TIFR1_� (*(volatile uint8_t *) 1UL << 1) 
#define TIFR1_� (*(volatile uint8_t *) 1UL << 0) 
#define TIFR0_� (*(volatile uint8_t *) 1UL << 3) 
#define TIFR0_� (*(volatile uint8_t *) 1UL << 2) 
#define TIFR0_� (*(volatile uint8_t *) 1UL << 1) 
#define TIFR0_� (*(volatile uint8_t *) 1UL << 0) 
#define PORTD_PORTD6 (*(volatile uint8_t *) 1UL << 7) 
#define PORTD_PORTD6 (*(volatile uint8_t *) 1UL << 6) 
#define PORTD_PORTD6 (*(volatile uint8_t *) 1UL << 5) 
#define PORTD_PORTD6 (*(volatile uint8_t *) 1UL << 4) 
#define PORTD_PORTD6 (*(volatile uint8_t *) 1UL << 3) 
#define PORTD_PORTD6 (*(volatile uint8_t *) 1UL << 2) 
#define PORTD_PORTD6 (*(volatile uint8_t *) 1UL << 1) 
#define PORTD_PORTD6 (*(volatile uint8_t *) 1UL << 0) 
#define DDRD_DDD6 (*(volatile uint8_t *) 1UL << 7) 
#define DDRD_DDD6 (*(volatile uint8_t *) 1UL << 6) 
#define DDRD_DDD6 (*(volatile uint8_t *) 1UL << 5) 
#define DDRD_DDD6 (*(volatile uint8_t *) 1UL << 4) 
#define DDRD_DDD6 (*(volatile uint8_t *) 1UL << 3) 
#define DDRD_DDD6 (*(volatile uint8_t *) 1UL << 2) 
#define DDRD_DDD6 (*(volatile uint8_t *) 1UL << 1) 
#define DDRD_DDD6 (*(volatile uint8_t *) 1UL << 0) 
#define PIND_PIND6 (*(volatile uint8_t *) 1UL << 7) 
#define PIND_PIND6 (*(volatile uint8_t *) 1UL << 6) 
#define PIND_PIND6 (*(volatile uint8_t *) 1UL << 5) 
#define PIND_PIND6 (*(volatile uint8_t *) 1UL << 4) 
#define PIND_PIND6 (*(volatile uint8_t *) 1UL << 3) 
#define PIND_PIND6 (*(volatile uint8_t *) 1UL << 2) 
#define PIND_PIND6 (*(volatile uint8_t *) 1UL << 1) 
#define PIND_PIND6 (*(volatile uint8_t *) 1UL << 0) 
#define PORTC_PORTC6 (*(volatile uint8_t *) 1UL << 7) 
#define PORTC_PORTC6 (*(volatile uint8_t *) 1UL << 6) 
#define PORTC_PORTC6 (*(volatile uint8_t *) 1UL << 5) 
#define PORTC_PORTC6 (*(volatile uint8_t *) 1UL << 4) 
#define PORTC_PORTC6 (*(volatile uint8_t *) 1UL << 3) 
#define PORTC_PORTC6 (*(volatile uint8_t *) 1UL << 2) 
#define PORTC_PORTC6 (*(volatile uint8_t *) 1UL << 1) 
#define PORTC_PORTC6 (*(volatile uint8_t *) 1UL << 0) 
#define DDRC_DDC6 (*(volatile uint8_t *) 1UL << 7) 
#define DDRC_DDC6 (*(volatile uint8_t *) 1UL << 6) 
#define DDRC_DDC6 (*(volatile uint8_t *) 1UL << 5) 
#define DDRC_DDC6 (*(volatile uint8_t *) 1UL << 4) 
#define DDRC_DDC6 (*(volatile uint8_t *) 1UL << 3) 
#define DDRC_DDC6 (*(volatile uint8_t *) 1UL << 2) 
#define DDRC_DDC6 (*(volatile uint8_t *) 1UL << 1) 
#define DDRC_DDC6 (*(volatile uint8_t *) 1UL << 0) 
#define PINC_PINC6 (*(volatile uint8_t *) 1UL << 7) 
#define PINC_PINC6 (*(volatile uint8_t *) 1UL << 6) 
#define PINC_PINC6 (*(volatile uint8_t *) 1UL << 5) 
#define PINC_PINC6 (*(volatile uint8_t *) 1UL << 4) 
#define PINC_PINC6 (*(volatile uint8_t *) 1UL << 3) 
#define PINC_PINC6 (*(volatile uint8_t *) 1UL << 2) 
#define PINC_PINC6 (*(volatile uint8_t *) 1UL << 1) 
#define PINC_PINC6 (*(volatile uint8_t *) 1UL << 0) 
#define PORTB_PORTB6 (*(volatile uint8_t *) 1UL << 7) 
#define PORTB_PORTB6 (*(volatile uint8_t *) 1UL << 6) 
#define PORTB_PORTB6 (*(volatile uint8_t *) 1UL << 5) 
#define PORTB_PORTB6 (*(volatile uint8_t *) 1UL << 4) 
#define PORTB_PORTB6 (*(volatile uint8_t *) 1UL << 3) 
#define PORTB_PORTB6 (*(volatile uint8_t *) 1UL << 2) 
#define PORTB_PORTB6 (*(volatile uint8_t *) 1UL << 1) 
#define PORTB_PORTB6 (*(volatile uint8_t *) 1UL << 0) 
#define DDRB_DDB6 (*(volatile uint8_t *) 1UL << 7) 
#define DDRB_DDB6 (*(volatile uint8_t *) 1UL << 6) 
#define DDRB_DDB6 (*(volatile uint8_t *) 1UL << 5) 
#define DDRB_DDB6 (*(volatile uint8_t *) 1UL << 4) 
#define DDRB_DDB6 (*(volatile uint8_t *) 1UL << 3) 
#define DDRB_DDB6 (*(volatile uint8_t *) 1UL << 2) 
#define DDRB_DDB6 (*(volatile uint8_t *) 1UL << 1) 
#define DDRB_DDB6 (*(volatile uint8_t *) 1UL << 0) 
#define PINB_PINB6 (*(volatile uint8_t *) 1UL << 7) 
#define PINB_PINB6 (*(volatile uint8_t *) 1UL << 6) 
#define PINB_PINB6 (*(volatile uint8_t *) 1UL << 5) 
#define PINB_PINB6 (*(volatile uint8_t *) 1UL << 4) 
#define PINB_PINB6 (*(volatile uint8_t *) 1UL << 3) 
#define PINB_PINB6 (*(volatile uint8_t *) 1UL << 2) 
#define PINB_PINB6 (*(volatile uint8_t *) 1UL << 1) 
#define PINB_PINB6 (*(volatile uint8_t *) 1UL << 0) 
