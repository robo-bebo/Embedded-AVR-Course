
#include "STD_TYPES.h"

#include "util/delay.h"
#include "DIO_interface.h"
#include "CLCD_interface.h"
#include "MATH_interface.h"

void main(void)
{
	u32 x = 123457;
	u8 str[15];
	HCLCD_voidInit();
	SMATH_voidDecToStr(x,str);
	HCLCD_voidSendString(str);
	while(1)
	{
	}

}

