/*******************************************************************************************/
/*******************************************************************************************/
/*******************************	Author: Abanoub Ramsis	********************************/
/*******************************	Layer: HAL				********************************/
/*******************************	AWC: CLCD				********************************/
/*******************************	Version: 1.0			********************************/
/*******************************************************************************************/
/*******************************************************************************************/

#include"util/delay.h"

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include"DIO_interface.h"

#include "CLCD_private.h"
#include "CLCD_interface.h"
#include "CLCD_config.h"

void HCLCD_voidSendData(u8 copy_u8Data)
{

		/*Set RS pin to HIGH for Data*/
		MDIO_u8SetPinValue(CLCD_CONTROL_PORT,CLCD_RS_PIN,PIN_HIGH);

		/*Set RW pin to LOW for write*/
		MDIO_u8SetPinValue(CLCD_CONTROL_PORT,CLCD_RW_PIN,PIN_LOW);

		/*write the Data on the data port*/
		MDIO_u8SetPortValue(CLCD_DATA_PORT,copy_u8Data);

		/*Send enable pulse*/
		MDIO_u8SetPinValue(CLCD_CONTROL_PORT,CLCD_E_PIN,PIN_HIGH);
		_delay_ms(2);
		MDIO_u8SetPinValue(CLCD_CONTROL_PORT,CLCD_E_PIN,PIN_LOW);

}

void HCLCD_voidSendCommand(u8 copy_u8Command)
{
	/*Set RS pin to LOW for command*/
	MDIO_u8SetPinValue(CLCD_CONTROL_PORT,CLCD_RS_PIN,PIN_LOW);

	/*Set RW pin to LOW for write*/
	MDIO_u8SetPinValue(CLCD_CONTROL_PORT,CLCD_RW_PIN,PIN_LOW);

	/*write the command on the data port*/
	MDIO_u8SetPortValue(CLCD_DATA_PORT,copy_u8Command);

	/*Send enable pulse*/
	MDIO_u8SetPinValue(CLCD_CONTROL_PORT,CLCD_E_PIN,PIN_HIGH);
	_delay_ms(2);
	MDIO_u8SetPinValue(CLCD_CONTROL_PORT,CLCD_E_PIN,PIN_LOW);

}

void HCLCD_voidInit(void)
{

	/*set data port to output*/
	MDIO_u8SetPortDirection(CLCD_DATA_PORT,PORT_OUTPUT);

	/*set the control pins to output*/
	MDIO_u8SetPinDirection(CLCD_CONTROL_PORT,CLCD_E_PIN,PIN_OUTPUT);
	MDIO_u8SetPinDirection(CLCD_CONTROL_PORT,CLCD_RS_PIN,PIN_OUTPUT);
	MDIO_u8SetPinDirection(CLCD_CONTROL_PORT,CLCD_RW_PIN,PIN_OUTPUT);

	/*wait more than 30ms after startup*/
	_delay_ms(40);

	/*set the display options*/
	HCLCD_voidSendCommand(CLCD_TWO_lines_5x10_8Pins);

	/*Set cursor to move right when writing*/
	HCLCD_voidSendCommand(CLCD_INC_CURSOR);

	/*Set display on and cursor to blink*/
	HCLCD_voidSendCommand(CLCD_DISPLAY_ON_CURSOR_BLINK);


	/*clear the display*/
	HCLCD_voidSendCommand(CLCD_CLR_DISPLAY);

}

void HCLCD_voidGoTo(u8 copy_u8Line,u8 copy_u8Column)
{
		u8 address;

		/*set the DDRAM address required*/
		address = copy_u8Line + copy_u8Column;

		/*(1<<7) is to define that this address is for DDRAM*/
		HCLCD_voidSendCommand(address|(1<<7));
}

void HCLCD_voidSendString(u8* ptr_u8Str)
{
	u8 i=0;
	while(ptr_u8Str[i]!='\0')
	{
		HCLCD_voidSendData(ptr_u8Str[i]);
		i++;
	}
}


void HCLCD_voidWriteSpecialCharacter(const u8* arr_u8Pattern,u8 copy_u8PatternNumber, u8 copy_u8Line,u8 copy_u8Column)
{
	u8 address;

	/*set the CGRAM address required*/
	address = copy_u8PatternNumber*8;

	/*(1<<6) is to define that this address is for CGRAM*/
	HCLCD_voidSendCommand(address|(1<<6));

	/*write the pattern in the CGRAM*/
	for(int i=0; i<8; i++)
	{
		HCLCD_voidSendData(arr_u8Pattern[i]);
	}

	/*set DDRAM address for display location*/
	HCLCD_voidGoTo(copy_u8Line, copy_u8Column);

	/*display the pattern*/
	HCLCD_voidSendData(copy_u8PatternNumber);

}
