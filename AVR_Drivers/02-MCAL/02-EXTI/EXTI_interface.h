/*******************************************************************************************/
/*******************************************************************************************/
/*******************************	Author: Abanoub Ramsis	********************************/
/*******************************	Layer: MCAL				********************************/
/*******************************	AWC: EXTI				********************************/
/*******************************	Version: 1.0			********************************/
/*******************************************************************************************/
/*******************************************************************************************/


#ifndef EXTI_INTERFACE_H
#define EXTI_INTERFACE_H

#define FALLING_EDGE	0
#define RISING_EDGE		1
#define LOGIC_CHANGE	2
#define LOW_LEVEL		3

void MEXTI_voidInt0Initialize(u8 copy_u8Method);
void MEXTI_voidInt1Initialize(u8 copy_u8Method);
void MEXTI_voidInt2Initialize(u8 copy_u8Method);
void MEXTI_voidInt0SetCallBack(void (*INT0_ISR) (void));
void MEXTI_voidInt1SetCallBack(void (*INT1_ISR) (void));
void MEXTI_voidInt2SetCallBack(void (*INT2_ISR) (void));
#endif
