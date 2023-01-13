/*******************************************************************************************/
/*******************************************************************************************/
/*******************************	Author: Abanoub Ramsis	********************************/
/*******************************	Layer: MCAL				********************************/
/*******************************	AWC: ADC				********************************/
/*******************************	Version: 1.0			********************************/
/*******************************************************************************************/
/*******************************************************************************************/


#ifndef ADC_REGISTERS_H
#define ADC_REGISTERS_H

#define ADMUX *((volatile u8*)0x27)		//ADC Multiplexer Selection Register
#define ADMUX_REFS1	7					//Reference Selection Bit1
#define ADMUX_REFS0 6					//Reference Selection Bit0
#define	ADMUX_ADLAR 5					//Analog Channel and Gain Selection Bit5
#define	ADMUX_MUX4	4					//Analog Channel and Gain Selection Bit4
#define	ADMUX_MUX3	3					//Analog Channel and Gain Selection Bit3
#define	ADMUX_MUX2	2					//Analog Channel and Gain Selection Bit2
#define	ADMUX_MUX1	1					//Analog Channel and Gain Selection Bit1
#define	ADMUX_MUX0	0					//Analog Channel and Gain Selection Bit0



#define ADCSRA *((volatile u8*)0x26)	//ADC Control and Status Register A
#define ADCSRA_ADEN 	7				//ADC Enable
#define ADCSRA_ADSC 	6				//ADC Start Conversion
#define ADCSRA_ADATE	5				//ADC Auto Trigger Enable
#define ADCSRA_ADIF		4				//ADC Interrupt Flag
#define ADCSRA_ADIE		3				//ADC Interrupt Enable
#define ADCSRA_ADPS2	2				//ADC Prescaler Select Bit2
#define ADCSRA_ADPS1	1				//ADC Prescaler Select Bit1
#define ADCSRA_ADPS0	0				//ADC Prescaler Select Bit0

#define ADCL *((volatile u8*)0x24)		//The ADC Data Register LOW
#define ADCH *((volatile u8*)0x25)		//The ADC Data Register HIGH
#define ADC  *((volatile u16*)0x24)		//The ADC Data Register 16_bit

#define SFIOR *((volatile u8*)0x50)		//Special FunctionIO Register
#define SFIOR_ADTS2		7				// ADC Auto Trigger Source2
#define SFIOR_ADTS1		6				// ADC Auto Trigger Source1
#define SFIOR_ADTS0		5				// ADC Auto Trigger Source0

#endif
