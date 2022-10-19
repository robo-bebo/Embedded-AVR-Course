
#include "STD_TYPES.h"

#include"util/delay.h"
#include "DIO_interface.h"
#include "CLCD_interface.h"

void main(void)
{
	HCLCD_voidInit();
	HCLCD_voidSendString((u8*)"ABANOUB");
	HCLCD_voidGoTo(CLCD_CURSOR_1ST_LINE,35);
	HCLCD_voidSendData('F');
	HCLCD_voidSendCommand(CLCD_SHIFT_DISPLAY_RIGHT);
	HCLCD_voidSendCommand(CLCD_SHIFT_CURSOR_RIGHT);
	_delay_ms(1000);
	HCLCD_voidSendCommand(CLCD_TWO_lines_5x7_8Pins);
	while(1)
	{
		MDIO
	}

}

