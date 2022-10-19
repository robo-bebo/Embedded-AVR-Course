
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_interface.h"
#include "SS_interface.h"

#include "util/delay.h"


void main()
{
	SS Seven1;

	Seven1.Port = PORTA;
	Seven1.ComType=CATHODE;
	Seven1.EnablePin=PIN0;
	Seven1.EnablePort=PORTC;
	HSS_voidEnable(&Seven1);
	while(1)
	{

		for(int i=0; i<=9; i++)
		{
			HSS_voidSetNumber(&Seven1,i);
			_delay_ms(1000);
		}

	}

}
