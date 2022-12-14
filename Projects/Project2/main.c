#include"STD_TYPES.h"
#include"BIT_MATH.h"
#include"DIO_registers.h"
#include"DIO_interface.h"
#include"util/delay.h"

void main()
{
	u8 Button;
	MDIO_u8SetPinDirection(PORTB,PIN0,INPUT);
	MDIO_u8SetPortDirection(PORTA,OUTPUT);
	MDIO_u8SetPinDirection(PORTD,PIN3,OUTPUT);

	MDIO_u8SetPinValue(PORTB,PIN0,HIGH);

	while(1)
	{
		MDIO_u8GetPinValue(PORTB,PIN0,&Button);
		if(Button == 0)
		{
			MDIO_u8SetPortValue(PORTA,PORT_HIGH);
			MDIO_u8SetPinValue(PORTD,PIN3,HIGH);
		}
		else
		{
			MDIO_u8SetPortValue(PORTA,0);
			MDIO_u8SetPinValue(PORTD,PIN3,LOW);
		}
	}

}


