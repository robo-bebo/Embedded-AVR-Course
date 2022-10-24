
#include "STD_TYPES.h"
#include "GIE_interface.h"
#include "DIO_interface.h"
#include "EXTI_interface.h"

void TogLed (void);

void main()
{
	MGIE_voidEnable();
	MDIO_u8SetPinDirection(PORTA,PIN0,PIN_OUTPUT);
	MEXTI_voidInt0SetCallBack(&TogLed);
	MEXTI_voidInt0Initialize(FALLING_EDGE);
	while(1)
	{

	}

}

void TogLed (void)
{
	MDIO_u8TogPinValue(PORTA,PIN0);

}
