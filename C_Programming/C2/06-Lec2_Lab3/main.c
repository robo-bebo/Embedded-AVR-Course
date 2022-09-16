/*
Write a C code that ask the user
to enter a number and check if it
is Even or Odd number
*/


#include <stdio.h>

void main(void)
{
	int num;
	printf("please enter a number :");
	scanf("%d",&num);
	
	if(num%2 == 0)
	{
		printf("Even");
	}
	else
	{
		printf("Odd");
	}
	
}
