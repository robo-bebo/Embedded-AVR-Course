
#include "STD_TYPES.h"

#include"util/delay.h"
#include "DIO_interface.h"
#include "CLCD_interface.h"

void main(void)
{

	HCLCD_voidInit();
	HCLCD_voidSendData('1');
	while(1)
	{
	}

}

