/*******************************************************************************************/
/*******************************************************************************************/
/*******************************	Author: Abanoub Ramsis	********************************/
/*******************************	Layer: MCAL				********************************/
/*******************************	AWC: DIO				********************************/
/*******************************	Version: 1.0			********************************/
/*******************************************************************************************/
/*******************************************************************************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_registers.h"
#include "DIO_interface.h"


/*Sets the direction of a single pin*/
u8 MDIO_u8SetPinDirection(u8 Copy_u8Port, u8 Copy_u8Pin, u8 Copy_u8Direction)
{
	
	switch(Copy_u8Port)
	{
		case PORTA: WRITE_BIT(DDRA,Copy_u8Pin,Copy_u8Direction); break;
		case PORTB: WRITE_BIT(DDRB,Copy_u8Pin,Copy_u8Direction); break;
		case PORTC: WRITE_BIT(DDRC,Copy_u8Pin,Copy_u8Direction); break;
		case PORTD: WRITE_BIT(DDRD,Copy_u8Pin,Copy_u8Direction); break;
		default: return 1;
	}
	return 0;
}


/*Sets the direction of the whole port*/
u8 MDIO_u8SetPortDirection(u8 Copy_u8Port, u8 Copy_u8Direction)
{
	switch(Copy_u8Port)
	{
		case PORTA: DDRA = Copy_u8Direction; break;
		case PORTB: DDRB = Copy_u8Direction; break;
		case PORTC: DDRC = Copy_u8Direction; break;
		case PORTD: DDRD = Copy_u8Direction; break;
		default: return 1;
	}
	return 0;
}

/*Sets the value of a single pin*/
u8 MDIO_u8SetPinValue(u8 Copy_u8Port, u8 Copy_u8Pin, u8 Copy_u8Value)
{
	switch(Copy_u8Port)
	{
		case PORTA: WRITE_BIT(PORTA_REG,Copy_u8Pin,Copy_u8Value); break;
		case PORTB: WRITE_BIT(PORTB_REG,Copy_u8Pin,Copy_u8Value); break;
		case PORTC: WRITE_BIT(PORTC_REG,Copy_u8Pin,Copy_u8Value); break;
		case PORTD: WRITE_BIT(PORTD_REG,Copy_u8Pin,Copy_u8Value); break;
		default: return 1;
	}	
	return 0;
}			


/*Sets the value of the whole port*/
u8 MDIO_u8SetPortValue(u8 Copy_u8Port, u8 Copy_u8Value)
{
	switch(Copy_u8Port)
	{
		case PORTA: PORTA_REG = Copy_u8Value; break;
		case PORTB: PORTB_REG = Copy_u8Value; break;
		case PORTC: PORTC_REG = Copy_u8Value; break;
		case PORTD: PORTD_REG = Copy_u8Value; break;
		default: return 1;
	}
	return 0;
}

/*Gets the value of a single pin*/
u8 MDIO_u8GetPinValue(u8 Copy_u8Port, u8 Copy_u8Pin, u8* ptr_u8Value)
{
	switch(Copy_u8Port)
	{
		
		case PORTA: *ptr_u8Value = GET_BIT(PINA,Copy_u8Pin); break;
		case PORTB: *ptr_u8Value = GET_BIT(PINB,Copy_u8Pin); break;
		case PORTC: *ptr_u8Value = GET_BIT(PINC,Copy_u8Pin); break;
		case PORTD: *ptr_u8Value = GET_BIT(PIND,Copy_u8Pin); break;
		default: return 1;
	}
	return 0;
	
}

/*Gets the value of the whole port*/
u8 MDIO_u8GetPortValue(u8 Copy_u8Port, u8* ptr_u8Value)
{
	
	switch(Copy_u8Port)
	{
		
		case PORTA: *ptr_u8Value = PINA; break;
		case PORTB: *ptr_u8Value = PINB; break;
		case PORTC: *ptr_u8Value = PINC; break;
		case PORTD: *ptr_u8Value = PIND; break;
		default: return 1;
	}
	return 0;
	
}

u8 MDIO_u8TogPinValue(u8 Copy_u8Port, u8 Copy_u8Pin)
{
	switch(Copy_u8Port)
		{

			case PORTA: TOG_BIT(PORTA_REG,Copy_u8Pin); break;
			case PORTB: TOG_BIT(PORTB_REG,Copy_u8Pin); break;
			case PORTC: TOG_BIT(PORTC_REG,Copy_u8Pin); break;
			case PORTD: TOG_BIT(PORTD_REG,Copy_u8Pin); break;
			default: return 1;
		}
		return 0;
}


