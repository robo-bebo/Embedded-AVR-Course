/*******************************************************************************************/
/*******************************************************************************************/
/*******************************	Author: Abanoub Ramsis	********************************/
/*******************************	Layer: Service			********************************/
/*******************************	AWC: MATH				********************************/
/*******************************	Version: 1.0			********************************/
/*******************************************************************************************/
/*******************************************************************************************/


#ifndef MATH_INTERFACE_H
#define MATH_INTERFACE_H


u8 SMATH_u8AsciiToDec(u8 copy_u8AsciiNumber);
u8 SMATH_u8DecToAscii(u8 copy_u8Number);


/*pass an array with the number of digits or more*/
void SMATH_voidDecToStr(u32 copy_u32Number,u8* arr_u8Str);

/*takes a string of numbers and returns one decimal number*/
u32 SMATH_u32StrToDec(u8* arr_u8Str);

/*takes a number and a power and returns the number raised to the power*/ 
u32 SMATH_u32Pow(u32 copy_u32Number, u32 copy_u32Power);



#endif