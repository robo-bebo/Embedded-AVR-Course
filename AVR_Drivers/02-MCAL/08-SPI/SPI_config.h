#ifndef SPI_CONFIG_H
#define SPI_CONFIG_H


/* Data order select options
	1-LSB_FIRST
	2-MSB_FIRST					*/
	
#define DATA_ORDER LSB_FIRST


/*Master slave select
	1-MASTER
	2-SLAVE						*/

#define ADMINISTRATION MASTER


/*Clock polarity options
	1-LOW
	2-HIGH						*/
	
#define CLK_POLARITY LOW

/*Clock phase options
	1-SAMPLE_FIRST
	2-SETUP_FIRST				*/
	
#define CLK_PHASE SAMPLE_FIRST

/*CLK selection options
	1-DIV_4
	2-DIV_16
	3-DIV_64
	4-DIV_128					*/

#define CLK_SELECT DIV_16


/*SPI port */
#define SPI_PORT PORTB


/*SPI_pins*/
#define SPI_SCK	 7
#define SPI_MISO 6
#define SPI_MOSI 5
#define SPI_SS	 4


#endif
