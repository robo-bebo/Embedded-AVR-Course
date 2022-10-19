/*******************************************************************************************/
/*******************************************************************************************/
/*******************************	Author: Abanoub Ramsis	********************************/
/*******************************	Layer: MCAL				********************************/
/*******************************	AWC: DIO				********************************/
/*******************************	Version: 1.0			********************************/
/*******************************************************************************************/
/*******************************************************************************************/

#ifndef DIO_INTERFACE_H
#define DIO_INTERFACE_H


/*Port name*/
#define PORTA	1
#define PORTB	2
#define PORTC	3
#define PORTD	4


/*PORTx Pin numbers*/
#define PIN0	0
#define PIN1	1
#define PIN2	2
#define PIN3	3
#define PIN4	4
#define PIN5	5
#define PIN6	6
#define PIN7	7

/*Pin Direction*/
#define PIN_INPUT	0
#define PIN_OUTPUT	1

/*Port Direction*/
#define PORT_INPUT	0
#define PORT_OUTPUT	0xFF

/*pin values*/
#define PIN_LOW		0
#define PIN_HIGH	1

/*port values*/
#define PORT_LOW	0x00
#define PORT_HIGH	0xFF



u8 MDIO_u8SetPinDirection(u8 Copy_u8Port, u8 Copy_u8Pin, u8 Copy_u8Direction);	//Sets the direction of a single pin
u8 MDIO_u8SetPortDirection(u8 Copy_u8Port, u8 Copy_u8Direction);				//Sets the direction of the whole port

		
u8 MDIO_u8SetPinValue(u8 Copy_u8Port, u8 Copy_u8Pin, u8 Copy_u8Value);			//Sets the value of a single pin
u8 MDIO_u8SetPortValue(u8 Copy_u8Port, u8 Copy_u8Value);						//Sets the value of the whole port


u8 MDIO_u8GetPinValue(u8 Copy_u8Port, u8 Copy_u8Pin, u8* ptr_u8Value);			//Gets the value of a single pin





#endif
