#ifndef USART_PRIVATE_H
#define USART_PRIVATE_H




/* Operation mode selection*/
#define SYNC	1
#define ASYNC	2						


/* Parity mode selection*/
#define DISABLED	1
#define EVEN		2
#define ODD			3				


/* NO. of stop bits selection*/
#define ONE_BIT		1
#define TWO_BITS	2					
	
/* character size (NO. of data bits)*/
#define _5_BITS		0
#define _6_BITS		1
#define _7_BITS		2
#define _8_BITS		3
#define _9_BITS		7		

/* baud rate calculation */

#define CALCULATE_UBRR_VALUE  (SOURCE_CLK / (u32)(16*BAUD_RATE)) -1  			

	
	








#endif