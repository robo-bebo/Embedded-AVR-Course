#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_interface.h"
#include "TC1_private.h"	
#include "TC1_registers.h"	
#include "TC1_config.h"	
#include "TC1_interface.h"	

u32* Gptr_PeriodTime;
u32* Gptr_Ton;
void (*Gptr_InputCaptureLogic)(void) = NULL;

void MTC1_voidInitialize(void)
{
	/* wave generation mode */
	
	/* 0000 */
	#if WAVE_GENERATION_MODE == NORMAL
	CLR_BIT(TCCR1A,TCCR1A_WGM10);
	CLR_BIT(TCCR1A,TCCR1A_WGM11);
	CLR_BIT(TCCR1B,TCCR1B_WGM12);
	CLR_BIT(TCCR1B,TCCR1B_WGM13);
	
	/* 0001 */
	#elif WAVE_GENERATION_MODE == PWM_Phase_Correct_8_bit	
	SET_BIT(TCCR1A,TCCR1A_WGM10);
	CLR_BIT(TCCR1A,TCCR1A_WGM11);
	CLR_BIT(TCCR1B,TCCR1B_WGM12);
	CLR_BIT(TCCR1B,TCCR1B_WGM13);
	
	/* 0010 */
	#elif WAVE_GENERATION_MODE == PWM_Phase_Correct_9_bit 	
	CLR_BIT(TCCR1A,TCCR1A_WGM10);
	SET_BIT(TCCR1A,TCCR1A_WGM11);
	CLR_BIT(TCCR1B,TCCR1B_WGM12);
	CLR_BIT(TCCR1B,TCCR1B_WGM13);
	
	/* 0011 */
	#elif WAVE_GENERATION_MODE == PWM_Phase_Correct_10_bit	
	SET_BIT(TCCR1A,TCCR1A_WGM10);
	SET_BIT(TCCR1A,TCCR1A_WGM11);
	CLR_BIT(TCCR1B,TCCR1B_WGM12);
	CLR_BIT(TCCR1B,TCCR1B_WGM13);
	
	/* 0100 */
	#elif WAVE_GENERATION_MODE == CTC_TOP_OCR1A	
	CLR_BIT(TCCR1A,TCCR1A_WGM10);
	CLR_BIT(TCCR1A,TCCR1A_WGM11);
	SET_BIT(TCCR1B,TCCR1B_WGM12);
	CLR_BIT(TCCR1B,TCCR1B_WGM13);
	
	/* 0101 */
	#elif WAVE_GENERATION_MODE == Fast_PWM_8_bit	
	SET_BIT(TCCR1A,TCCR1A_WGM10);
	CLR_BIT(TCCR1A,TCCR1A_WGM11);
	SET_BIT(TCCR1B,TCCR1B_WGM12);
	CLR_BIT(TCCR1B,TCCR1B_WGM13);
	
	/* 0110 */
	#elif WAVE_GENERATION_MODE == Fast_PWM_9_bit 	
	CLR_BIT(TCCR1A,TCCR1A_WGM10);
	SET_BIT(TCCR1A,TCCR1A_WGM11);
	SET_BIT(TCCR1B,TCCR1B_WGM12);
	CLR_BIT(TCCR1B,TCCR1B_WGM13);
	
	/* 0111 */
	#elif WAVE_GENERATION_MODE == Fast_PWM_10_bit	
	SET_BIT(TCCR1A,TCCR1A_WGM10);
	SET_BIT(TCCR1A,TCCR1A_WGM11);
	SET_BIT(TCCR1B,TCCR1B_WGM12);
	CLR_BIT(TCCR1B,TCCR1B_WGM13);
	
	/* 1000 */
	#elif WAVE_GENERATION_MODE == PWM_Phase_and_Frequency_Correct_TOP_ICR1	
	CLR_BIT(TCCR1A,TCCR1A_WGM10);
	CLR_BIT(TCCR1A,TCCR1A_WGM11);
	CLR_BIT(TCCR1B,TCCR1B_WGM12);
	SET_BIT(TCCR1B,TCCR1B_WGM13);
	
	/* 1001 */
	#elif WAVE_GENERATION_MODE == PWM_Phase_and_Frequency_Correct_TOP_OCR1A	
	SET_BIT(TCCR1A,TCCR1A_WGM10);
	CLR_BIT(TCCR1A,TCCR1A_WGM11);
	CLR_BIT(TCCR1B,TCCR1B_WGM12);
	SET_BIT(TCCR1B,TCCR1B_WGM13);
	
	/* 1010 */
	#elif WAVE_GENERATION_MODE == PWM_Phase_Correct_TOP_ICR1	
	CLR_BIT(TCCR1A,TCCR1A_WGM10);
	SET_BIT(TCCR1A,TCCR1A_WGM11);
	CLR_BIT(TCCR1B,TCCR1B_WGM12);
	SET_BIT(TCCR1B,TCCR1B_WGM13);
	
	/* 1011 */
	#elif WAVE_GENERATION_MODE == PWM_Phase_Correct_TOP_OCR1A	
	SET_BIT(TCCR1A,TCCR1A_WGM10);
	SET_BIT(TCCR1A,TCCR1A_WGM11);
	CLR_BIT(TCCR1B,TCCR1B_WGM12);
	SET_BIT(TCCR1B,TCCR1B_WGM13);
	
	/* 1100 */
	#elif WAVE_GENERATION_MODE == CTC_TOP_ICR1	
	CLR_BIT(TCCR1A,TCCR1A_WGM10);
	CLR_BIT(TCCR1A,TCCR1A_WGM11);
	SET_BIT(TCCR1B,TCCR1B_WGM12);
	SET_BIT(TCCR1B,TCCR1B_WGM13);
	
	/* 1101 */
	#elif WAVE_GENERATION_MODE == RESERVED	
	SET_BIT(TCCR1A,TCCR1A_WGM10);
	CLR_BIT(TCCR1A,TCCR1A_WGM11);
	SET_BIT(TCCR1B,TCCR1B_WGM12);
	SET_BIT(TCCR1B,TCCR1B_WGM13);	
	
	/* 1110 */
	#elif WAVE_GENERATION_MODE == Fast_PWM_TOP_ICR1	
	CLR_BIT(TCCR1A,TCCR1A_WGM10);
	SET_BIT(TCCR1A,TCCR1A_WGM11);
	SET_BIT(TCCR1B,TCCR1B_WGM12);
	SET_BIT(TCCR1B,TCCR1B_WGM13);
	
		/* channel A output mode */
		#if FAST_PWM_CHANNEL_A_OUTPUT_MODE == FAST_PWM_CHANNEL_A_DISCONNECT
		CLR_BIT(TCCR1A,TCCR1A_COM1A0);
		CLR_BIT(TCCR1A,TCCR1A_COM1A1);
		
		#elif FAST_PWM_CHANNEL_A_OUTPUT_MODE == FAST_PWM_CHANNEL_A_TOG
		SET_BIT(TCCR1A,TCCR1A_COM1A0);
		CLR_BIT(TCCR1A,TCCR1A_COM1A1);
		
		#elif FAST_PWM_CHANNEL_A_OUTPUT_MODE == FAST_PWM_CHANNEL_A_NON_INVERTING
		CLR_BIT(TCCR1A,TCCR1A_COM1A0);
		SET_BIT(TCCR1A,TCCR1A_COM1A1);
		
		#elif FAST_PWM_CHANNEL_A_OUTPUT_MODE == FAST_PWM_CHANNEL_A_INVERTING
		SET_BIT(TCCR1A,TCCR1A_COM1A0);
		SET_BIT(TCCR1A,TCCR1A_COM1A1);
		
		#endif
		
		/* channel B output mode */
		#if FAST_PWM_CHANNEL_B_OUTPUT_MODE == FAST_PWM_CHANNEL_B_DISCONNECT
		CLR_BIT(TCCR1A,TCCR1A_COM1B0);
		CLR_BIT(TCCR1A,TCCR1A_COM1B1);
			
		#elif FAST_PWM_CHANNEL_B_OUTPUT_MODE == FAST_PWM_CHANNEL_B_NON_INVERTING
		CLR_BIT(TCCR1A,TCCR1A_COM1B0);
		SET_BIT(TCCR1A,TCCR1A_COM1B1);
		
		#elif FAST_PWM_CHANNEL_B_OUTPUT_MODE == FAST_PWM_CHANNEL_B_INVERTING
		SET_BIT(TCCR1A,TCCR1A_COM1B0);
		SET_BIT(TCCR1A,TCCR1A_COM1B1);
		
		#endif
		
	/* 1111 */
	#elif WAVE_GENERATION_MODE == Fast_PWM_TOP_OCR1A	
	SET_BIT(TCCR1A,TCCR1A_WGM10);
	SET_BIT(TCCR1A,TCCR1A_WGM11);
	SET_BIT(TCCR1B,TCCR1B_WGM12);
	SET_BIT(TCCR1B,TCCR1B_WGM13);
	
	#endif
	
	
	/* set pre_scaler */
	 TCCR1B &= TIMER1_CLK_MASK;
	 TCCR1B |= TIMER1_CLK;
	
	
}	


void MTC1_voidGeneratePWM(u16 copy_u8TonMicrosSec, u16 copy_u8PeriodMicroSec)
{
	/*reset counter */
	TCNT1 = 0;
	
	/* set pin OC1A as output */
	MDIO_voidSetPinDirection(PORTD,PIN5,OUTPUT);
	
	u8 TickTime = PRE_SCALER/8;					//micro seconds
	u32 NO_OF_TICKS_OVERFLOW = (copy_u8PeriodMicroSec/TickTime);
	u32 NO_OF_TICKS_COMPARE = (copy_u8TonMicrosSec/TickTime);
	
	ICR1 = NO_OF_TICKS_OVERFLOW;
	OCR1A = NO_OF_TICKS_COMPARE;
}

void MCT1_voidReadPwmHW(u32* ptr_PeriodTime, u32* ptr_Ton,void (*ptr_InputCaptureLogic)(void))
{
	/*activate noise cancler */
	SET_BIT(TCCR1B,TCCR1B_ICNC1);
	
	/*enable interrupt */
	SET_BIT(TIMSK_TICIE1);
	
	/* set mode to normal */
	CLR_BIT(TCCR1A,TCCR1A_WGM10);
	CLR_BIT(TCCR1A,TCCR1A_WGM11);
	CLR_BIT(TCCR1B,TCCR1B_WGM12);
	CLR_BIT(TCCR1B,TCCR1B_WGM13);
	
	/*save the return pointers in global pointers */
	Gptr_PeriodTime = ptr_PeriodTime;
	Gptr_Ton = ptr_Ton;
	
	/*set the sensing to rising edge*/
	SET_BIT(TCCR1B,TCCR1B_ICES1);
	
	Gptr_InputCaptureLogic = ptr_InputCaptureLogic;
}

void __vector_6 (void)
{
	static u32 ON_counts;
	static u32 Ton;
	static u32 TOTAL_counts;
	static u32 Period;
	static iteration=1;
	
	u8 TickTime = PRE_SCALER/8;	
	
	if(iteration == 1)
	{
		TCNT1 = 0;
		/*set the sensing to falling edge*/
		CLR_BIT(TCCR1B,TCCR1B_ICES1);
		iteration++;
	}
	else if(iteration == 2)
	{
		ON_counts = ICR1;
		/*set the sensing to rising edge*/
		SET_BIT(TCCR1B,TCCR1B_ICES1);
		iteration++;
	}
	else if(iteration == 3)
	{
		/* disable interrsupt*/
		CLR_BIT(TIMSK_TICIE1);
		
		TOTAL_counts = ICR1;
		
		
		*Gptr_PeriodTime = (TickTime*TOTAL_counts);
		*Gptr_Ton = (TickTime*ON_counts);
		
		Gptr_InputCaptureLogic();
	}
}