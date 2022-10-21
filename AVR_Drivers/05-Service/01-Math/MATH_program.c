/*******************************************************************************************/
/*******************************************************************************************/
/*******************************	Author: Abanoub Ramsis	********************************/
/*******************************	Layer: Service			********************************/
/*******************************	AWC: MATH				********************************/
/*******************************	Version: 1.0			********************************/
/*******************************************************************************************/
/*******************************************************************************************/



#include"STD_TYPES.h"
#include"MATH_interface.h"
#include<stdio.h>

/*takes a number in ASCII format and returns its decimal value*/
u8 SMATH_u8AsciiToDec(u8 copy_u8AsciiNumber)
{
	return(copy_u8AsciiNumber-48);
}

/*takes a number in decimal and returns it in ASCII format*/
u8 SMATH_u8DecToAscii(u8 copy_u8Number)
{
	return(copy_u8Number+48);
}

/*takes a number of multi-digits in decimal and returns it in a string of characters*/
void SMATH_voidDecToStr(u32 copy_u32Number,u8* arr_u8Str)
{
	u8 CurrentNumber;
	u8 Counter = 0;
	u8 TempArr[20];
	u8 CharactersNumber;
	
	
	/*take the least significant digits one by one and put them in a temp array in reversed order*/
	while((copy_u32Number%10)!=0)
	{
		CurrentNumber= copy_u32Number%10;
		TempArr[Counter] = (CurrentNumber+48);
		Counter++;
		copy_u32Number/=10;
	}
	
	/*the counter exits with value = number of Characters+1*/
	CharactersNumber = Counter-1;
	Counter =0;
	
	/*corrects the order of the characters*/
	while(TempArr[Counter]!='\0')
	{
			arr_u8Str[CharactersNumber-Counter] = TempArr[Counter];
			Counter++;
	}
	
}

/*takes a string of numbers and returns one decimal number*/
u32 SMATH_u32StrToDec(u8* arr_u8Str)
{
	u8 Counter=0;
	u32 Number = 0;
	while(arr_u8Str[Counter]!='\0')
	{
		Number = ((Number*10)+(arr_u8Str[Counter]-48));
		Counter++;
	}
	return(Number);
}


/*takes a number and a power and returns the number raised to the power*/ 
u32 SMATH_u32Pow(u32 copy_u32Number, u32 copy_u32Power)
{
	u32 Ans =1;
	
	for(u32 i=0; i<copy_u32Power; i++)
	{
		Ans*=copy_u32Number;
	}
	
	return(Ans);
}