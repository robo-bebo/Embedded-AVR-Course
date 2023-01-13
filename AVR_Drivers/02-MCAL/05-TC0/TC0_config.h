#ifndef TCNT0_CONFIG_H_
#define TCNT0_CONFIG_H_

/* wave generation mode options 
	1-NORMAL
	2-PWM_PHASE_CORRECT
	3-CTC
	4-PWM_FAST				*/
	
	#define GENERATION_MODE CTC


/* Compare match output mode options(non_pwm mode)	
	1-NON_PWM_OC0_DISSCONNECT
	2-NON_PWM_TOG_OC0
	3-NON_PWM_CLR_OC0
	4_NON_PWM_SET_OC0				*/
	
	#define NO_PWM_COMPARE_MATCH_MODE  NON_PWM_OC0_DISSCONNECT
	


/* Compare match output mode options(fast_pwm mode)	
	1-FAST_PWM_OC0_DISSCONNECT      
	2-FAST_PWM_NON_INVERTING		cleared on compare match and set on Bottom
	3-FAST_PWM_INVERTING			set on compare match and cleared on Bottom			*/
	
	#define FAST_PWM_COMPARE_MATCH_MODE  FAST_PWM_NON_INVERTING
	
	
	/* Compare match output mode options(phase_correct_pwm mode)	
	1-PHASE_CORRECT_PWM_OC0_DISSCONNECT
	2-PHASE_CORRECT_PWM_UP_CLR_DOWN_SET
	3_PHASE_CORRECT_PWM_UP_SET_DOWN_CLR				*/
	
	#define PHASE_CORRECT_COMPARE_MATCH_MODE  PHASE_CORRECT_PWM_UP_CLR_DOWN_SET

/* clk select options
	1-DISABLE_MODULE
	2-SOURCE_CLK
	3-PRES_8
	4-PRES_64
	5-PRES_256
	6-PRES_1024
	7-FALLING_T0
	8-RISING_T0			*/
	
#define COUNTER_CLK_SELECT PRES_64

/* Set PRE_SCALER to use in calculations (this should be same as the above one)*/
#define PRE_SCLAER 64
	

#endif
