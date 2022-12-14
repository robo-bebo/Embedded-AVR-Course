/*******************************************************************************************/
/*******************************************************************************************/
/*******************************	Author: Abanoub Ramsis	********************************/
/*******************************	Layer: MCAL				********************************/
/*******************************	AWC: DIO				********************************/
/*******************************	Version: 1.0			********************************/
/*******************************************************************************************/
/*******************************************************************************************/

#ifndef DIO_REGISTER_H
#define DIO_REGISTER_H


/*****PORTA*****/
#define PORTA_REG *((volatile u8*)0x3B)	//Port A Data Register
#define DDRA *((volatile u8*)0x3A)	//Port A Data Direction Register
#define PINA *((volatile u8*)0x39)	//Port A Input Pins Register

/*****PORTB*****/
#define PORTB_REG *((volatile u8*)0x38)	//Port B Data Register
#define DDRB *((volatile u8*)0x37)	//Port B Data Direction Register
#define PINB *((volatile u8*)0x36)	//Port B Input Pins Register

/*****PORTC*****/
#define PORTC_REG *((volatile u8*)0x35)	//Port C Data Register
#define DDRC *((volatile u8*)0x34)	//Port C Data Direction Register
#define PINC *((volatile u8*)0x33)	//Port C Input Pins Register

/*****PORTD*****/
#define PORTD_REG *((volatile u8*)0x32)	//Port D Data Register
#define DDRD *((volatile u8*)0x31)	//Port D Data Direction Register
#define PIND *((volatile u8*)0x30)	//Port D Input Pins Register





#endif