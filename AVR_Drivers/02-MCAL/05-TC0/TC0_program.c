#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "TC0_private.h"	
#include "TC0_registers.h"	
#include "TC0_config.h"	
#include "TC0_interface.h"	
#include"DIO_interface.h"
#include"util/delay.h"

void (*Gptr_ISR_logic) (void) = NULL;
u32 Gno_of_matches;

void MTC0_voidInitialize(void)
{
	/* wave generation mode */
	#if GENERATION_MODE == NORMAL
	CLR_BIT(TCCR0,TCCR0_WGM00);
	CLR_BIT(TCCR0,TCCR0_WGM01);
	
	
	#elif GENERATION_MODE == PWM_PHASE_CORRECT
	SET_BIT(TCCR0,TCCR0_WGM00);
	CLR_BIT(TCCR0,TCCR0_WGM01);
	
		/* Compare match output mode options(phase_correct_pwm mode)*/
		#if PHASE_CORRECT_COMPARE_MATCH_MODE == PHASE_CORRECT_PWM_OC0_DISSCONNECT
		CLR_BIT(TCCR0,TCCR0_COM00);
		CLR_BIT(TCCR0,TCCR0_COM01);
		
		#elif PHASE_CORRECT_COMPARE_MATCH_MODE == PHASE_CORRECT_PWM_UP_CLR_DOWN_SET
		CLR_BIT(TCCR0,TCCR0_COM00);
		SET_BIT(TCCR0,TCCR0_COM01);
		
		#elif PHASE_CORRECT_COMPARE_MATCH_MODE == PHASE_CORRECT_PWM_UP_SET_DOWN_CLR	
		SET_BIT(TCCR0,TCCR0_COM00);
		SET_BIT(TCCR0,TCCR0_COM01);	
		#endif	
		
		
	
	#elif GENERATION_MODE == CTC
	CLR_BIT(TCCR0,TCCR0_WGM00);
	SET_BIT(TCCR0,TCCR0_WGM01);

		/* Compare match output mode options(non_pwm mode) */
		#if NO_PWM_COMPARE_MATCH_MODE == NON_PWM_OC0_DISSCONNECT
		CLR_BIT(TCCR0,TCCR0_COM00);
		CLR_BIT(TCCR0,TCCR0_COM01);
		
		#elif NO_PWM_COMPARE_MATCH_MODE == NON_PWM_TOG_OC0
		SET_BIT(TCCR0,TCCR0_COM00);
		CLR_BIT(TCCR0,TCCR0_COM01);
		
		#elif NO_PWM_COMPARE_MATCH_MODE == NON_PWM_CLR_OC0
		CLR_BIT(TCCR0,TCCR0_COM00);
		SET_BIT(TCCR0,TCCR0_COM01);
		
		#elif NO_PWM_COMPARE_MATCH_MODE == NON_PWM_SET_OC0
		SET_BIT(TCCR0,TCCR0_COM00);
		SET_BIT(TCCR0,TCCR0_COM01);
		#endif
		
		
		
	#elif GENERATION_MODE == PWM_FAST
	SET_BIT(TCCR0,TCCR0_WGM00);
	SET_BIT(TCCR0,TCCR0_WGM01);
	
		/* Compare match output mode options(fast_pwm mode)	*/ 
		#if FAST_PWM_COMPARE_MATCH_MODE == FAST_PWM_OC0_DISSCONNECT
		CLR_BIT(TCCR0,TCCR0_COM00);
		CLR_BIT(TCCR0,TCCR0_COM01);
		
		#elif FAST_PWM_COMPARE_MATCH_MODE == FAST_PWM_NON_INVERTING
		CLR_BIT(TCCR0,TCCR0_COM00);
		SET_BIT(TCCR0,TCCR0_COM01);
		
		#elif FAST_PWM_COMPARE_MATCH_MODE == FAST_PWM_INVERTING
		SET_BIT(TCCR0,TCCR0_COM00);
		SET_BIT(TCCR0,TCCR0_COM01);
		#endif
		
	#endif
	
	/* select Timer clk (start count) */
	TCCR0 &= CLK_SELECT_MASK;
	TCCR0 |= COUNTER_CLK_SELECT;
		
}	


void MTC0_voidDelayMillis(u32 copy_u32TimeMilliSec)
{
	/*disable interrupt */
	CLR_BIT(TIMSK,TIMSK_OCIE0);
	
	/*reset the counter */
	TCNT0 = 0;
	u32 TickTime = PRE_SCLAER/8;
	u32 no_of_ticks_to_match = ((u64)copy_u32TimeMilliSec*1000.0)/TickTime;
	u32 no_of_matches;
	
	if(no_of_ticks_to_match <= 256)
	{
		OCR0 = (no_of_ticks_to_match-1);
		while(GET_BIT(TIFR,TIFR_OCF0) == 0)
		{
			//busy wait
		}	
		SET_BIT(TIFR,TIFR_OCF0); 
	}
	
	else
	{
		OCR0 =  MTC0_u16GetMaxFactor(no_of_ticks_to_match);
		no_of_matches = (no_of_ticks_to_match /OCR0);
		for(u32 i=0; i < no_of_matches; i++)
		{
			while(GET_BIT(TIFR,TIFR_OCF0 ) == 0)
			{
				//busy wait
			}

			SET_BIT(TIFR,TIFR_OCF0);
		}
	}
	
	
}


void MTC0_voidStartCountAsync(void (* ptr_ISR_logic)(void),u32 copy_u32TimeMilliSec)
{
	
	
	u32 TickTime = PRE_SCLAER/8;
	u32 no_of_ticks_to_match = (copy_u32TimeMilliSec*1000UL)/TickTime;
	u32 no_of_matches;
	
	if(no_of_ticks_to_match <= 256)
	{
		OCR0 = (no_of_ticks_to_match);
		Gptr_ISR_logic = ptr_ISR_logic;
		Gno_of_matches = 1;
	}
	
	else
	{
		//MDIO_voidSetPinValue(PORTA,PIN0,HIGH);
		OCR0 = MTC0_u16GetMaxFactor(no_of_ticks_to_match);
		no_of_matches = (no_of_ticks_to_match / OCR0);
		Gno_of_matches = no_of_matches;
		Gptr_ISR_logic = ptr_ISR_logic;
	}

	/*enable interrupt */
	SET_BIT(TIMSK,TIMSK_OCIE0);

	/*reset the counter */
	TCNT0 = 0;
	
}


u16 MTC0_u16GetMaxFactor(u32 copy_no_of_ticks_to_match)
{
	s16 i;
	s16 temp =0;
	for(i = 255; i>=1; i--)
	{
		if((copy_no_of_ticks_to_match % i) == 0)
		{
			temp = i;
			break;
		}
	}
	return temp;
}


void __vector_10 (void)
{
	static u32 counter=1;
	if(counter == Gno_of_matches)
	{
		Gptr_ISR_logic();
		counter = 1;
	}
	else
	{
		counter++;
	}
}

void __vector_11 (void)
{
	
}
