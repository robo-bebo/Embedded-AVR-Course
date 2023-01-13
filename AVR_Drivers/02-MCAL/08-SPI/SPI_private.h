#ifndef SPI_PRIVATE_H
#define SPI_PRIVATE_H

/* Data order select options*/
#define LSB_FIRST	1
#define MSB_FIRST	2				
	
/*Master slave select*/
#define MASTER	1
#define SLAVE	2


/*Clock polarity options*/
#define LOW		1
#define HIGH	2
	
	
/*Clock phase options*/
#define SAMPLE_FIRST	1
#define SETUP_FIRST		2
	

/*CLK selection options*/
#define DIV_4			0
#define DIV_16			1
#define DIV_64			2
#define DIV_128			3

#endif