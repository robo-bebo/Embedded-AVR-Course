#ifndef TCNT0_PRIVATE_H_
#define TCNT0_PRIVATE_H_

/* wave generation mode options */ 
#define NORMAL					0
#define PWM_PHASE_CORRECT		1
#define CTC						2
#define PWM_FAST				3


/* Compare match output mode options(non_pwm mode) */	
#define NON_PWM_OC0_DISSCONNECT	0
#define NON_PWM_TOG_OC0			1	
#define NON_PWM_CLR_OC0			2
#define NON_PWM_SET_OC0			3


/* Compare match output mode options(fast_pwm mode) */	
#define FAST_PWM_OC0_DISSCONNECT	0
#define FAST_PWM_INVERTING			1
#define FAST_PWM_NON_INVERTING		2


/* Compare match output mode options(phase_correct_pwm mode) */	
#define PHASE_CORRECT_PWM_OC0_DISSCONNECT	0
#define PHASE_CORRECT_PWM_UP_CLR_DOWN_SET	1
#define PHASE_CORRECT_PWM_UP_SET_DOWN_CLR	2		
					

/* clk select options */
#define DISABLE_MODULE	 0
#define SOURCE_CLK       1
#define PRES_8           2
#define PRES_64          3
#define PRES_256         4
#define PRES_1024        5
#define FALLING_T0       6
#define RISING_T0		 7
						


/* clk select mask */
#define CLK_SELECT_MASK 0b11111000; 



/* timer 0 compare match ISR */
void __vector_10 (void) __attribute__((signal));

/* timer 0 overflow ISR */
void __vector_11 (void)__attribute__((signal));


u16 MTC0_u16GetMaxFactor(u32 copy_no_of_ticks_to_match);



#endif
