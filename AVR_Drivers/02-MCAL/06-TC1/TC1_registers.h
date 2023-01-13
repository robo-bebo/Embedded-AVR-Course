
#ifndef TCNT1_REGISTERS_H_
#define TCNT1_REGISTERS_H_

#include"STD_TYPES.h"
#include"BIT_MATH.h"

#include"TC1_interface.h"

#define TCCR1A    *((volatile u8*)0x4F)		//Timer/Counter1 Control Register A
#define TCCR1A_COM1A1	7				//Compare Output Mode for Channel A 1
#define TCCR1A_COM1A0	6				//Compare Output Mode for Channel A 0
#define TCCR1A_COM1B1	5				//Compare Output Mode for Channel B 1
#define TCCR1A_COM1B0	4				//Compare Output Mode for Channel B 0
#define TCCR1A_FOC1A 	3				//Force Output Compare for Channel A
#define TCCR1A_FOC1B 	2				//Force Output Compare for Channel B
#define TCCR1A_WGM11 	1				//Waveform Generation Mode 1
#define TCCR1A_WGM10 	0				//Waveform Generation Mode 0


#define TCCR1B     *((volatile u8*)0x4E)	//Timer/Counter1 Control Register B
#define TCCR1B_ICNC1	7					//Input Capture Noise Canceler
#define TCCR1B_ICES1	6					//Input Capture Edge Select
#define TCCR1B_WGM13	4					//Waveform Generation Mode 3
#define TCCR1B_WGM12	3					//Waveform Generation Mode 2
#define TCCR1B_CS12		2					//Clock Select 2
#define TCCR1B_CS11		1					//Clock Select 1
#define TCCR1B_CS10		0					//Clock Select 0


#define TCNT1H       *((volatile u8*0x4D))			//Counter 1 reagister HIGH
#define TCNT1L       *((volatile u8*)0x4C)			//Counter 1 reagister LOW
#define TCNT1        *((volatile u16*)0x4C)			//Counter 1 reagister 16_bit


#define OCR1AH       *((volatile u8*)0x4B)			//Output Compare Register 1 A HIGH
#define OCR1AL       *((volatile u8*)0x4A)			//Output Compare Register 1 A LOW
#define OCR1A        *((volatile u16*)0x4A)			//Output Compare Register 1 A 16_bit

#define OCR1BH       *((volatile u8*)0x49)			//Output Compare Register 1 B HIGH
#define OCR1BL       *((volatile u8*)0x48)          //Output Compare Register 1 B LOW
#define OCR1B        *((volatile u16*)0x48)         //Output Compare Register 1 B 16_bit

#define ICR1H       *((volatile u8*)0x47)			//Input Capture Register 1 HIGH
#define ICR1L       *((volatile u8*)0x46)			//Input Capture Register 1 LOW
#define ICR1        *((volatile u16*)0x46)			//Input Capture Register 1 16_bit

#define TIMSK		*((volatile u8*)0x59)		//Timer/Counter Interrupt Mask Register
#define TIMSK_TICIE1	5						//Timer/Counter1, Input Capture Interrupt Enable
#define TIMSK_OCIE1A	4						//Timer/Counter1, Output Compare A Match Interrupt Enable
#define TIMSK_OCIE1B	3						//Timer/Counter1, Output Compare B Match Interrupt Enable
#define TIMSK_TOIE1		2						//Timer/Counter1, Overflow Interrupt Enable
		
		
#define TIFR		*((volatile u8*)0x58)		//Timer/Counter Interrupt Flag Register
#define TIFR_ICF1		5						//Timer/Counter1, Input Capture Flag
#define TIFR_OCF1A		4						//Timer/Counter1, Output Compare A Match Flag
#define TIFR_OCF1B		3						//Timer/Counter1, Output Compare B Match Flag
#define TIFR_TOV1		2               		//Timer/Counter1, Overflow Flag


#endif /* TCNT0_REGISTERS_H_ */
