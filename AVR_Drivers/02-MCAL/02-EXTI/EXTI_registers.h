/*******************************************************************************************/
/*******************************************************************************************/
/*******************************	Author: Abanoub Ramsis	********************************/
/*******************************	Layer: MCAL				********************************/
/*******************************	AWC: EXTI				********************************/
/*******************************	Version: 1.0			********************************/
/*******************************************************************************************/
/*******************************************************************************************/



#ifndef EXTI_REGISTERS_H
#define EXTI_REGISTERS_H

#define MCUCR 	*((volatile u8*)0x55)		//MCU Control Register
#define MCUCR_ISC00 0						//Interrupt Sense Control 0 Bit 0
#define MCUCR_ISC01 1						//Interrupt Sense Control 0 Bit 1
#define MCUCR_ISC10 2						//Interrupt Sense Control 1 Bit 0
#define MCUCR_ISC11 3						//Interrupt Sense Control 0 Bit 1


#define MCUCSR	*((volatile u8*)0x54)		//MCU Control and Status Register
#define MCUCSR_ISC2 6						//Interrupt Sense Control 2


#define GICR	*((volatile u8*)0x5B)		//General Interrupt Control Register
#define GICR_INT2 5							//External Interrupt Request 2 Enable
#define GICR_INT0 6							//External Interrupt Request 0 Enable
#define GICR_INT1 7							//External Interrupt Request 1 Enable


#define GIFR	*((volatile u8*)0x5A)  		//General Interrupt Flag Register
#define GIFR_INTF2	5						//External Interrupt Flag 2
#define GIFR_INTF0	6						//External Interrupt Flag 0
#define GIFR_INTF1	7						//External Interrupt Flag 1

#endif
