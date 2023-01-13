#ifndef USART_CONFIG_H
#define USART_CONFIG_H


/* Operation mode selection
	1-SYNC
	2-ASYNC						*/

#define OPERATION_MODE ASYNC

/* Parity mode selection
	1-DISABLED
	2-EVEN
	3-ODD						*/
#define PARITY_MODE		ODD


/* NO. of stop bits selection
	1- ONE_BIT
	2- TWO_BITS					*/
#define NO_OF_STOP_BITS ONE_BIT
	
/* character size (NO. of data bits)
	1- _5_BITS
	2- _6_BITS
	3- _7_BITS
	4- _8_BITS
	5- _9_BITS					*/
#define CHARACTER_SIZE _8_BITS	

/* Baud rate */
#define BAUD_RATE 9600UL

/*Source clk */
#define SOURCE_CLK 8000000UL
	
	
#endif