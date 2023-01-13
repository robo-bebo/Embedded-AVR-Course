#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "TWI_registers.h"
#include "TWI_interface.h"
#include "TWI_private.h"
#include "TWI_config.h"
#include "DIO_interface.h"


void MTWI_voidMasterInitialize(u8 copy_u8MasterAddress)
{
	
	/*set clk to 400Kbps*/
	CLR_BIT(TWSR,TWSR_TWPS1);
	CLR_BIT(TWSR,TWSR_TWPS0);
	
	TWBR = 2;

	/*Setting master address in case needed*/
	if(copy_u8MasterAddress != 0)
	{
		TWAR = copy_u8MasterAddress << 1;
		
	}

	/* Enable TWI*/
	SET_BIT(TWCR,TWCR_TWEN);
	
}

void MTWI_voidSlaveInitialize(u8 copy_u8SlaveAddress)
{
	/*enable ACK bit*/
	SET_BIT(TWCR,TWCR_TWEA);


	/*set slave address*/
	TWAR = copy_u8SlaveAddress << 1;
	
	/* Enable TWI*/
	SET_BIT(TWCR,TWCR_TWEN);
	
}

void MTWI_voidStart(void)
{
	/* send start condition*/
	SET_BIT(TWCR,TWCR_TWSTA);
	
	/* clear flag*/
	SET_BIT(TWCR,TWCR_TWINT);
	
	/*wait till the flag is raised again to ensure end of start condition*/
	while(GET_BIT(TWCR,TWCR_TWINT == 0))
	{
		//busy wait
	}
	
	/*clear start condition bit*/
	CLR_BIT(TWCR,TWCR_TWSTA);
	
}

void MTWI_voidStop(void)
{
	/*send stop condition*/
	SET_BIT(TWCR,TWCR_TWSTO);
	
		/* clear flag*/
	SET_BIT(TWCR,TWCR_TWINT);
	
}

void MTWI_voidMasterSendData(u8 copy_u8Data)
{
	/*set Data*/
	TWDR = copy_u8Data;
	
	/* clear flag*/
	SET_BIT(TWCR,TWCR_TWINT);
	
	/*wait till the flag is raised again to ensure end of operation*/
	while(GET_BIT(TWCR,TWCR_TWINT == 0))
	{
		//busy wait
	}
	
}

void MTWI_voidSendAddress(u8 copy_u8Address, u8 copy_u8Direction)
{
	/*set slave address*/
	TWDR = copy_u8Address << 1;
	
	/*SET direction*/
	WRITE_BIT(TWDR,8,copy_u8Direction);
	
	/* clear flag*/
	SET_BIT(TWCR,TWCR_TWINT);
	
	/*wait till the flag is raised again to ensure end of operation*/
	while(GET_BIT(TWCR,TWCR_TWINT == 0))
	{
		//busy wait
	}
	
}

void MTWI_voidMasterGetData(u8* ptr_u8Data)
{
	/*enable ACK bit*/
	SET_BIT(TWCR,TWCR_TWEA);
	
	/* clear flag*/
	SET_BIT(TWCR,TWCR_TWINT);
	
	/*wait till the flag is raised again to ensure end of operation*/
	while(GET_BIT(TWCR,TWCR_TWINT == 0))
	{
		//busy wait
	}
	
	
	/*read recieved data*/
	*ptr_u8Data = TWDR;
	
}


