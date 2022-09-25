#include<stdio.h>
#include"BIT_MATH.h"
void main(void)
{
	
	int x = 7;
	printf("set = %d\n",Set_Bit(x,2));
	x =7;
	printf("clr = %d\n",Clr_Bit(x,2));
	x =7;
	printf("tog = %d\n",Tog_Bit(x,2));
	x =7;
	printf("get = %d\n",Get_Bit(x,2));
	
}