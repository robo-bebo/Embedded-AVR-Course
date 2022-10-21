/*******************************************************************************************/
/*******************************************************************************************/
/*******************************	Author: Abanoub Ramsis	********************************/
/*******************************	Layer: HAL				********************************/
/*******************************	AWC: CLCD				********************************/
/*******************************	Version: 1.0			********************************/
/*******************************************************************************************/
/*******************************************************************************************/

#ifndef CLCD_INTERFACE_H
#define CLCD_INTERFACE_H

#define CLCD_CLR_DISPLAY 				0x01
#define CLCD_RETURN_HOME 				0x02
#define CLCD_DEC_CURSOR  				0x04
#define CLCD_INC_CURSOR  				0x06
#define CLCD_SHIFT_DISPLAY_RIGHT		0x1C
#define CLCD_SHIFT_DISPLAY_LEFT			0x18
#define CLCD_DISPLAY_OFF_CURSOR_OFF     0x08
#define	CLCD_DISPLAY_ON_CURSOR_OFF		0x0C
#define	CLCD_DISPLAY_OFF_CURSOR_ON		0x0A
#define	CLCD_DISPLAY_ON_CURSOR_ON		0x0E
#define CLCD_DISPLAY_ON_CURSOR_BLINK	0x0F
#define	CLCD_SHIFT_CURSOR_RIGHT			0x14
#define	CLCD_SHIFT_CURSOR_LEFT			0x10
#define	CLCD_CURSOR_1ST_LINE			0x80
#define	CLCD_CURSOR_2ND_LINE			0xC0
#define	CLCD_TWO_lines_5x7_8Pins		0x38
#define	CLCD_ONE_line_5x7_8Pins			0x30
#define	CLCD_TWO_lines_5x10_8Pins		0x3C
#define	CLCD_ONE_line_5x10_8Pins		0x34


#define CLCD_PATTERN_0	  0
#define CLCD_PATTERN_1    1
#define CLCD_PATTERN_2    2
#define CLCD_PATTERN_3    3
#define CLCD_PATTERN_4    4
#define CLCD_PATTERN_5    5
#define CLCD_PATTERN_6    6
#define CLCD_PATTERN_7    7


void HCLCD_voidInit(void);

void HCLCD_voidSendData(u8 copy_u8Data);

void HCLCD_voidSendCommand(u8 copy_u8Command);

void HCLCD_voidSendString(u8* ptr_u8Str);


/*Line options:
 	 1-CLCD_CURSOR_1ST_LINE
     2-CLCD_CURSOR_2ND_LINE

column numbers are from 0 to 39*/
void HCLCD_voidGoTo(u8 copy_u8Line,u8 copy_u8Column);



/*Pattern number options:
	1-CLCD_PATTERN_0
	2-CLCD_PATTERN_1
	3-CLCD_PATTERN_2
	4-CLCD_PATTERN_3
	5-CLCD_PATTERN_4
	6-CLCD_PATTERN_5
	7-CLCD_PATTERN_6
	8-CLCD_PATTERN_7 		*/
void HCLCD_voidWriteSpecialCharacter(const u8* arr_u8Pattern,u8 copy_u8PatternNumber, u8 copy_u8Line,u8 copy_u8Column);





#endif
