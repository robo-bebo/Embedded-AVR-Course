#include"STD_TYPES.h"
#include"BIT_MATH.h"
#include"DIO_interface.h"

#include "KEYPAD_interface.h"
#include "KEYPAD_privte.h"
#include "KEYPAD_config.h"

void HKEYPAD_voidInitialize(void)
{
	
	/*Direction initialization*/
	MDIO_voidSetPinDirection(KEYPAD_PORT,KEYPAD_R1,INPUT);
	MDIO_voidSetPinDirection(KEYPAD_PORT,KEYPAD_R2,INPUT);
	MDIO_voidSetPinDirection(KEYPAD_PORT,KEYPAD_R3,INPUT);
	MDIO_voidSetPinDirection(KEYPAD_PORT,KEYPAD_R4,INPUT);
	
	MDIO_voidSetPinDirection(KEYPAD_PORT,KEYPAD_C1,OUTPUT);
	MDIO_voidSetPinDirection(KEYPAD_PORT,KEYPAD_C2,OUTPUT);
	MDIO_voidSetPinDirection(KEYPAD_PORT,KEYPAD_C3,OUTPUT);
	MDIO_voidSetPinDirection(KEYPAD_PORT,KEYPAD_C4,OUTPUT);
	
	/*Data initialization*/
	MDIO_voidSetPortValue(KEYPAD_PORT,HIGH);
}

u8 HKEYPAD_u8GetPressedKey(void)
{
	u8 local_u8KeyPressed = 0;
	u8 c;
	u8 r;
	u8 digit[4][4] = {
						{'1','2','3','+'},
						{'4','5','6','-'},
						{'7','8','9','/'},
						{'*','0','=','C'}
		
					};
					
	for(c =0; c<4; c++)
	{
		MDIO_voidSetPinValue(KEYPAD_PORT,(c+4),LOW);
		for(r=0; r<4; r++)
		{
			if(MDIO_u8Get_PinValue(KEYPAD_PORT,r) == 0)
			{
				local_u8KeyPressed = digit[r][c];
				_delay_ms(100);
			}
		}
		MDIO_voidSetPinValue(KEYPAD_PORT,(c+4),HIGH);
	}
	
	return local_u8KeyPressed;
}