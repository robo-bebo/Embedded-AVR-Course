/*Write a program in C to display the
multiplication table of a given integer.*/

#include<stdio.h>

void main(void)
{
	int x;
	printf("please enter a number: ");
	scanf("%d",&x);
	
	for(int i=1; i<=12; i++)
	{
		printf("%d * %d = %d\n",x,i,(x*i));
	}
	
}