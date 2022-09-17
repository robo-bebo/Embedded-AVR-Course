
/*Write C code implement a function to swap 2
global variables.*/

#include<stdio.h>

int x = 5;
int y = 10;

void swap(void);

void main(void)
{
	printf("x before swap = %d\ny before swap = %d\n",x,y);
	swap();
	printf("x after swap = %d\ny after swap = %d\n",x,y);
}

void swap(void)
{
	int temp = x;
	x = y;
	y = temp;
}