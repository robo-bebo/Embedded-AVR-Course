/*******************************************************************************************/
/*******************************************************************************************/
/*******************************	Author: Abanoub Ramsis	********************************/
/*******************************	Layer: HAL				********************************/
/*******************************	AWC: CLCD				********************************/
/*******************************	Version: 1.0			********************************/
/*******************************************************************************************/
/*******************************************************************************************/

#ifndef CLCD_CONFIG_H
#define CLCD_CONFIG_H


/*Data Port Selection Options:

 	1-PORTA
	2-PORTB
	3-PORTC
	4-PORTD				*/

#define CLCD_DATA_PORT	PORTA

/*Control Port Selection Options:

 	1-PORTA
	2-PORTB
	3-PORTC
	4-PORTD				*/

#define CLCD_CONTROL_PORT	PORTB

/*RS pin selection Options:

 1-PIN0
 2-PIN1
 3-PIN2
 4-PIN3
 5-PIN4
 6-PIN5
 7-PIN6
 8-PIN7				*/

#define CLCD_RS_PIN	PIN2

/*RW pin selection Options:

 1-PIN0
 2-PIN1
 3-PIN2
 4-PIN3
 5-PIN4
 6-PIN5
 7-PIN6
 8-PIN7				*/

#define CLCD_RW_PIN	PIN1

/*Enable pin selection Options:

 1-PIN0
 2-PIN1
 3-PIN2
 4-PIN3
 5-PIN4
 6-PIN5
 7-PIN6
 8-PIN7				*/

#define CLCD_E_PIN	PIN0

/*Display options

 1-CLCD_TWO_lines_5x7_8Pins
 2-CLCD_ONE_lines_5x7_8Pins
 3-CLCD_TWO_lines_5x10_8Pins
 4-CLCD_ONE_lines_5x10_8Pins	 */

#define CLCD_DISPLAY_OPTION	TWO_lines_5x10_8Pin

#endif
