/*Write a c program that draw a pyramid of
stars with height entered by the user*/

#include<stdio.h>

void main(void)
{
	int h;
	printf("please enter the height : ");
	scanf("%d",&h);
	
	for(int i=h; i>=1; i--)
	{
		for (int j =0; j<(i-1); j++)
		{
			printf(" ");
		}
		
		for(int j=0; j<(2*(h-i+1)-1); j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	
}