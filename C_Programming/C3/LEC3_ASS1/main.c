/*Write a C program that ask the user to
enter two numbers and print their
summation, this program should never
ends until the user close the window*/

#include<stdio.h>
void main(void)
{
	int n1,n2,sum;
	
	while(1)
	{
		printf("please enter two numbers:\n");
		scanf("%d%d",&n1,&n2);
		printf("Sum = %d\n",n1+n2);
	}
	
}