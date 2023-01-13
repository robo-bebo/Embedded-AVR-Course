/*******************************************************************************************/
/*******************************************************************************************/
/*******************************	Author: Abanoub Ramsis	********************************/
/*******************************	Layer: MCAL				********************************/
/*******************************	AWC: ADC				********************************/
/*******************************	Version: 1.0			********************************/
/*******************************************************************************************/
/*******************************************************************************************/


#ifndef ADC_PRIVATE_H
#define ADC_PRIVATE_H


#define SFIRO_MASK 		0b00001111

#define PRESCALER_MASK	0b11111000

#define ADMUX_MASK		0b11100000

/* reference voltage selection options */
#define AREF 			1
#define AVCC 			2
#define internal_2_56V 	3

/* Trigger mode options */
#define AUTO 	1 
#define MANUAL 	2

/* Auto trigger source options */
#define FREE_RUNNING 			0 
#define	ANALOG_COMPARATOR		1
#define EXTI0					2
#define	T_C0_MATCH				3						
#define T_C0_OVERFLOW			4
#define	T_C_MATCH_B				5
#define	T_C1_OVERFLOW			6
#define T_C1_CAPTURE			7


/* Prescaler division options */

#define _2		1
#define _4		2
#define _8		3
#define _16		4
#define _32		5
#define _64		6
#define _128	7


/* Resolution options */
#define _8_BITS 	1
#define _10_BITS 	2


/* Function type */
#define SYNC	1
#define ASYNC	2

void __vector_16 (void) __attribute__((signal));

#endif
