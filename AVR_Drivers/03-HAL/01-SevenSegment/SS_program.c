/*******************************************************************************************/
/*******************************************************************************************/
/*******************************	Author: Abanoub Ramsis	********************************/
/*******************************	Layer: HAL				********************************/
/*******************************	AWC: Seven Segment		********************************/
/*******************************	Version: 1.0			********************************/
/*******************************************************************************************/
/*******************************************************************************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_interface.h"

#include "SS_private.h"
#include "SS_interface.h"


u8 SS_Numbers[10]= {0b00111111,0b00000110,0b01011011,0b01001111,0b01100110,
					0b01101101,0b01111101,0b00000111,0b01111111,0b01101111};

void HSS_voidSetNumber(SS* ptr_SS, u8 copy_u8Number)
{
	MDIO_u8SetPortDirection(ptr_SS->Port,PORT_OUTPUT);
	if(ptr_SS->ComType == ANODE)
	{
		MDIO_u8SetPortValue(ptr_SS->Port,~SS_Numbers[copy_u8Number]);
	}
	else if(ptr_SS->ComType == CATHODE)
	{
		MDIO_u8SetPortValue(ptr_SS->Port,SS_Numbers[copy_u8Number]);
	}
}


void HSS_voidEnable(SS* ptr_SS)
{
	MDIO_u8SetPinDirection(ptr_SS->EnablePort,ptr_SS->EnablePin,PIN_OUTPUT);

	if(ptr_SS->ComType == ANODE)
		{
			MDIO_u8SetPinValue(ptr_SS->EnablePort,ptr_SS->EnablePin,PIN_HIGH);
		}
	else if(ptr_SS->ComType == CATHODE)
		{
			MDIO_u8SetPinValue(ptr_SS->EnablePort,ptr_SS->EnablePin,PIN_LOW);
		}

}


void HSS_voidDisable(SS* ptr_SS)
{
	MDIO_u8SetPinDirection(ptr_SS->EnablePort,ptr_SS->EnablePin,PIN_OUTPUT);

	if(ptr_SS->ComType == ANODE)
		{
			MDIO_u8SetPinValue(ptr_SS->EnablePort,ptr_SS->EnablePin,PIN_LOW);
		}
	else if(ptr_SS->ComType == CATHODE)
		{
			MDIO_u8SetPinValue(ptr_SS->EnablePort,ptr_SS->EnablePin,PIN_HIGH);
		}

}

