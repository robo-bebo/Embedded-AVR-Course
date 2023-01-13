#ifndef TWI_REGISTERS_H
#define TWI_REGISTERS_H

/*TWI Bit Rate Register */
#define TWBR			*((volatile u8*)0x20)



/*TWI Control Register*/
#define TWCR			*((volatile u8*)0x56)
#define TWCR_TWINT					7			//TWI Interrupt Flag
#define TWCR_TWEA					6			//TWI Enable Acknowledge Bit
#define TWCR_TWSTA					5			//TWI START Condition Bit
#define TWCR_TWSTO					4			//TWI STOP Condition Bit
#define TWCR_TWWC					3			//TWI Write Collision Flag
#define TWCR_TWEN					2			//TWI Enable Bit
#define TWCR_Res					1			//Reserved Bit
#define TWCR_TWIE					0			//TWI Interrupt Enable

/*TWI Status Register*/
#define TWSR			*((volatile u8*)0x21)
#define TWSR_RES					2			//Reserved bit
#define TWSR_TWPS1					1			//TWI Prescaler Bit 1
#define TWSR_TWPS0					0			//TWI Prescaler Bit 0



/*TWI Data Register*/
#define TWDR			*((volatile u8*)0x23)



/*TWI (Slave) Address Register*/
#define TWAR			*((volatile u8*)0x22)
#define TWAR_TWGCE				0				//TWI General Call Recognition Enable Bit


#endif
