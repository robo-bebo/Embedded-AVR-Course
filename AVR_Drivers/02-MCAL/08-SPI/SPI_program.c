#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "SPI_interface.h"
#include "SPI_private.h"
#include "SPI_config.h"
#include "SPI_registers.h"
#include "DIO_interface.h"


void MSPI_voidInitialize(void)
{
	
	/*Data order select*/
	#if DATA_ORDER ==  LSB_FIRST
	SET_BIT(SPCR,SPCR_DORD);
	
	#elif DATA_ORDER == MSB_FIRST
	CLR_BIT(SPCR,SPCR_DORD);
	
	#endif
	
	/*Master slave select*/
	#if ADMINISTRATION == MASTER
	SET_BIT(SPCR,SPCR_MSTR);
	MDIO_voidSetPinDirection(SPI_PORT,SPI_MISO,INPUT);
	MDIO_voidSetPinDirection(SPI_PORT,SPI_MOSI,OUTPUT);
	MDIO_voidSetPinDirection(SPI_PORT,SPI_SCK,OUTPUT);
	MDIO_voidSetPinDirection(SPI_PORT,SPI_SS,OUTPUT);
	
	#elif ADMINISTRATION == SLAVE
	CLR_BIT(SPCR,SPCR_MSTR);
	MDIO_voidSetPinDirection(SPI_PORT,SPI_MISO,OUTPUT);
	MDIO_voidSetPinDirection(SPI_PORT,SPI_MOSI,INPUT);
	MDIO_voidSetPinDirection(SPI_PORT,SPI_SCK,INPUT);
	MDIO_voidSetPinDirection(SPI_PORT,SPI_SS,INPUT);
	
	#endif
	
	/*Clock polarity options*/
	#if CLK_POLARITY == LOW
	CLR_BIT(SPCR,SPCR_CPOL);
	
	#elif CLK_POLARITY == HIGH
	SET_BIT(SPCR,SPCR_CPOL);
	
	#endif
	
	/*Clock phase select*/
	#if CLK_PHASE == SAMPLE_FIRST
	CLR_BIT(SPCR,SPCR_CPHA);
	
	#elif CLK_PHASE == SETUP_FIRST
	SET_BIT(SPCR,SPCR_CPHA);
	
	#endif

	
	/*CLK selection*/
	#if CLK_SELECT == DIV_4
	CLR_BIT(SPCR,SPCR_SPR1);
	CLR_BIT(SPCR,SPCR_SPR0);
	
	#elif CLK_SELECT == DIV_16
	CLR_BIT(SPCR,SPCR_SPR1);
	SET_BIT(SPCR,SPCR_SPR0);
	
	#elif CLK_SELECT == DIV_64
	SET_BIT(SPCR,SPCR_SPR1);
	CLR_BIT(SPCR,SPCR_SPR0);
	
	#elif CLK_SELECT == DIV_128
	SET_BIT(SPCR,SPCR_SPR1);
	SET_BIT(SPCR,SPCR_SPR0);
	
	#endif
	
	
	/* enable spi*/
	SET_BIT(SPCR,SPCR_SPE);

}


void MSPI_voidTransive(u8 copy_u8SentData, u8* ptr_RecievedData)
{

	SPDR = copy_u8SentData;

	while(GET_BIT(SPCR,SPCR_SPIF) == 0)
	{
		//busy wait
	}

	*ptr_RecievedData = SPDR;
}
