#ifndef TCNT1_CONFIG_H_
#define TCNT2_CONFIG_H_

/* compare output mode channel A options(non_PWM)
	1-NON_PWM_CHANNEL_A_DISCONNECT
	2-NON_PWM_CHANNEL_A_TOG
	3-NON_PWM_CHANNEL_A_CLR
	4-NON_PWM_CHANNEL_A_SET		*/

#define NON_PWM_CHANNEL_A_OUTPUT_MODE   NON_PWM_CHANNEL_A_TOG


/* compare output mode channel B options (non_PWM)
	1-NON_PWM_CHANNEL_B_DISCONNECT
	2-NON_PWM_CHANNEL_B_TOG
	3-NON_PWM_CHANNEL_B_CLR
	4-NON_PWM_CHANNEL_B_SET		*/

#define NON_PWM_CHANNEL_B_OUTPUT_MODE   NON_PWM_CHANNEL_B_TOG

/* compare output mode channel A options(fast_PWM)
	1-FAST_PWM_CHANNEL_A_DISCONNECT
	2-FAST_PWM_CHANNEL_A_TOG   								(only for WGM13:10 = 15)
	3-FAST_PWM_CHANNEL_A_NON_INVERTING
	4-FAST_PWM_CHANNEL_A_INVERTING					*/
	
#define FAST_PWM_CHANNEL_A_OUTPUT_MODE   FAST_PWM_CHANNEL_A_NON_INVERTING



/* compare output mode channel B options(fast_PWM)
	1-FAST_PWM_CHANNEL_B_DISCONNECT
	2-FAST_PWM_CHANNEL_B_DISCONNECT   							
	3-FAST_PWM_CHANNEL_B_NON_INVERTING
	4-FAST_PWM_CHANNEL_B_INVERTING					*/
	
#define FAST_PWM_CHANNEL_B_OUTPUT_MODE   FAST_PWM_CHANNEL_B_DISCONNECT


/* compare output mode channel A options(phase_correct_PWM)
	1-PHASE_CORRECT_PWM_CHANNEL_A_DISCONNECT
	2-PHASE_CORRECT_PWM_CHANNEL_A_TOG   								(only for WGM13:10 = 9 or 14)
	3-PHASE_CORRECT_PWM_CHANNEL_A_CLR_UP_SET_DOWN
	4-PHASE_CORRECT_PWM_CHANNEL_A_SET_UP_CLR_DOWN					*/
	
#define PHASE_CORRECT_PWM_CHANNEL_A_OUTPUT_MODE   PHASE_CORRECT_PWM_CHANNEL_A_CLR_UP_SET_DOWN


/* compare output mode channel B options(phase_correct_PWM)
	1-PHASE_CORRECT_PWM_CHANNEL_B_DISCONNECT
	2-PHASE_CORRECT_PWM_CHANNEL_B_DISCONNECT   					
	3-PHASE_CORRECT_PWM_CHANNEL_B_CLR_UP_SET_DOWN
	4-PHASE_CORRECT_PWM_CHANNEL_B_SET_UP_CLR_DOWN					*/
	
#define PHASE_CORRECT_PWM_CHANNEL_B_OUTPUT_MODE   PHASE_CORRECT_PWM_CHANNEL_B_CLR_UP_SET_DOWN


/* wave form generation mode options	
	1- NORMAL
	2- PWM_Phase_Correct_8_bit
	3- PWM_Phase_Correct_9_bit
	4- PWM_Phase_Correct_10_bit
	5- CTC_TOP_OCR1A
	6- Fast_PWM_8_bit
	7- Fast_PWM_9_bit
	8- Fast_PWM_10_bit
	9- PWM_Phase_and_Frequency_Correct_TOP_ICR1
	10-PWM_Phase_and_Frequency_Correct_TOP_OCR1A
	11-PWM_Phase_Correct_TOP_ICR1
	12-PWM_Phase_Correct_TOP_OCR1A
	13-CTC_TOP_ICR1
	14-RESERVED
	15-Fast_PWM_TOP_ICR1
	16-Fast_PWM_TOP_OCR1A						*/
	
#define WAVE_GENERATION_MODE	NORMAL



/*clk selection options 
	1-STOP_TIMER
	2-SOURCE_CLK
	3-PRE_8
	4-PRE_64
	5-PRE_256
	6-PRE_1024
	7-EXTCLK_T1_FALLING_EDGE
    8-EXTCLK_T1_RISING_EDGE			*/
	
#define TIMER1_CLK PRE_64
	
	
	
/* set pre scaler */
#define PRE_SCALER 64

/*clk mask */
#define TIMER1_CLK_MASK 0b11111000

#endif
