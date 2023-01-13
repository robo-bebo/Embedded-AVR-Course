#ifndef TCNT1_PRIVATE_H_
#define TCNT1_PRIVATE_H_

/* compare output mode channel A options(non PWM) */
#define NON_PWM_CHANNEL_A_DISCONNECT	0
#define NON_PWM_CHANNEL_A_TOG			1
#define NON_PWM_CHANNEL_A_CLR			2
#define NON_PWM_CHANNEL_A_SET			3



/* compare output mode channel B options(non PWM) */
#define NON_PWM_CHANNEL_B_DISCONNECT	0
#define NON_PWM_CHANNEL_B_TOG			1
#define NON_PWM_CHANNEL_B_CLR			2
#define NON_PWM_CHANNEL_B_SET			3


/* compare output mode channel A options(fast_PWM)*/
#define FAST_PWM_CHANNEL_A_DISCONNECT			0
#define FAST_PWM_CHANNEL_A_TOG   				1				//(only for WGM13:10 = 15)
#define FAST_PWM_CHANNEL_A_NON_INVERTING		2
#define FAST_PWM_CHANNEL_A_INVERTING			3	


/* compare output mode channel B options(fast_PWM)*/
#define FAST_PWM_CHANNEL_B_DISCONNECT			0
#define FAST_PWM_CHANNEL_B_DISCONNECT   		1							
#define FAST_PWM_CHANNEL_B_NON_INVERTING		2
#define FAST_PWM_CHANNEL_B_INVERTING			3


/* compare output mode channel A options(phase_correct_PWM)*/
#define PHASE_CORRECT_PWM_CHANNEL_A_DISCONNECT			0
#define PHASE_CORRECT_PWM_CHANNEL_A_TOG   				1			//(only for WGM13:10 = 9 or 14)
#define PHASE_CORRECT_PWM_CHANNEL_A_CLR_UP_SET_DOWN		2
#define PHASE_CORRECT_PWM_CHANNEL_A_SET_UP_CLR_DOWN		3								



/* compare output mode channel B options(phase_correct_PWM)*/
#define PHASE_CORRECT_PWM_CHANNEL_B_DISCONNECT			0	
#define PHASE_CORRECT_PWM_CHANNEL_B_DISCONNECT   		1				
#define PHASE_CORRECT_PWM_CHANNEL_B_CLR_UP_SET_DOWN		2
#define PHASE_CORRECT_PWM_CHANNEL_B_SET_UP_CLR_DOWN		3				
	

/* wave form generation mode options*/	
#define NORMAL										0
#define PWM_Phase_Correct_8_bit						1
#define PWM_Phase_Correct_9_bit                     2
#define PWM_Phase_Correct_10_bit                    3
#define CTC_TOP_OCR1A                               4
#define Fast_PWM_8_bit                              5
#define Fast_PWM_9_bit                              6
#define Fast_PWM_10_bit                             7
#define PWM_Phase_and_Frequency_Correct_TOP_ICR1    8
#define PWM_Phase_and_Frequency_Correct_TOP_OCR1A   9
#define PWM_Phase_Correct_TOP_ICR1                  10
#define PWM_Phase_Correct_TOP_OCR1A                 11
#define CTC_TOP_ICR1                                12
#define RESERVED                                    13
#define Fast_PWM_TOP_ICR1                           14
#define Fast_PWM_TOP_OCR1A						    15



/*clk selections options*/ 
#define STOP_TIMER									0
#define SOURCE_CLK									1
#define PRE_8                   					2
#define PRE_64                  					3
#define PRE_256                 					4
#define PRE_1024                					5
#define EXTCLK_T1_FALLING_EDGE  					6
#define EXTCLK_T1_RISING_EDGE						7
                                


void __vector_6 (void) __attribute__((signal));
                                            
#endif