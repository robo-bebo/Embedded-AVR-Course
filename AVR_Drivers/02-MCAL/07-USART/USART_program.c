#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "USART_interface.h"
#include "USART_private.h"
#include "USART_config.h"
#include "USART_registers.h"

void MUSART_voidInitialize(void)
{
	/* variable for holding the value of UCSRC register before writing it*/
	u8 local_u8UCSRC_value = 0;
	
	/* mode of operation*/
	#if OPERATION_MODE == SYNC
	SET_BIT(local_u8UCSRC_value,UCSRC_UMSEL);
	
	#elif OPERATION_MODE == ASYNC
	CLR_BIT(local_u8UCSRC_value,UCSRC_UMSEL);
	
	#endif
	
	/*parity mode */
	#if PARITY_MODE == DISABLED
	CLR_BIT(local_u8UCSRC_value,UCSRC_UPM0);
	CLR_BIT(local_u8UCSRC_value,UCSRC_UPM1);
	
	#elif PARITY_MODE == EVEN
	CLR_BIT(local_u8UCSRC_value,UCSRC_UPM0);
	SET_BIT(local_u8UCSRC_value,UCSRC_UPM1);	
	
	#elif PARITY_MODE == ODD
	SET_BIT(local_u8UCSRC_value,UCSRC_UPM0);
	SET_BIT(local_u8UCSRC_value,UCSRC_UPM1);	
	
	#endif
	
	/*no. of stop bits*/
	#if NO_OF_STOP_BITS == ONE_BIT
	CLR_BIT(local_u8UCSRC_value,UCSRC_USBS);

	#elif NO_OF_STOP_BITS == TWO_BITS
	SET_BIT(local_u8UCSRC_value,UCSRC_USBS);
	
	#endif

	/*character size*/
	#if CHARACTER_SIZE == _5_BITS
	CLR_BIT(local_u8UCSRC_value,UCSRC_UCSZ0);
	CLR_BIT(local_u8UCSRC_value,UCSRC_UCSZ1);
	CLR_BIT(UCSRB,UCSRB_UCSZ2);
	
	#elif CHARACTER_SIZE == _6_BITS
	SET_BIT(local_u8UCSRC_value,UCSRC_UCSZ0);
	CLR_BIT(local_u8UCSRC_value,UCSRC_UCSZ1);
	CLR_BIT(UCSRB,UCSRB_UCSZ2);
	
	#elif CHARACTER_SIZE == _7_BITS
	CLR_BIT(local_u8UCSRC_value,UCSRC_UCSZ0);
	SET_BIT(local_u8UCSRC_value,UCSRC_UCSZ1);
	CLR_BIT(UCSRB,UCSRB_UCSZ2);
	
	#elif CHARACTER_SIZE == _8_BITS
	SET_BIT(local_u8UCSRC_value,UCSRC_UCSZ0);
	SET_BIT(local_u8UCSRC_value,UCSRC_UCSZ1);
	CLR_BIT(UCSRB,UCSRB_UCSZ2);
	
	#elif CHARACTER_SIZE == _9_BITS
	SET_BIT(local_u8UCSRC_value,UCSRC_UCSZ0);
	SET_BIT(local_u8UCSRC_value,UCSRC_UCSZ1);
	SET_BIT(UCSRB,UCSRB_UCSZ2);
	
#endif
	/* write in the UCSRC register*/
	SET_BIT(local_u8UCSRC_value,UCSRC_URSEL);
	UCSRC = local_u8UCSRC_value;
	
	/* set baud rate*/
	UBRRL = CALCULATE_UBRR_VALUE;
	
	/*enable transmitter*/
	SET_BIT(UCSRB,UCSRB_TXEN);
	
	/*enable reciever*/
	SET_BIT(UCSRB,UCSRB_RXEN);
	
	
}

u8 MUSART_u8RecieveData(void)
{
	while (GET_BIT(UCSRA,UCSRA_RXC) == 0)
	{
		//wait until there is data to read
	}
	
	return UDR;
}

void MUSART_voidSendData(u8 copy_u8Data)
{
	while (GET_BIT(UCSRA,UCSRA_UDRE) == 0)
	{
		//wait till the transmit buffer is empty
	}
	
	UDR = copy_u8Data;
}
