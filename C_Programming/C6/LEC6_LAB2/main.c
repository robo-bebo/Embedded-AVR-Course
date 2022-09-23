/*Write a C code that ask the user to enter 2
values and save them in two variables, then
the program sends these variables by address
to a function that returns the summation of
them. The program then prints the result.*/

#include<stdio.h>

int Sum(int* n1, int* n2);

void main(void)
{
	int n1,n2,sum;
	printf("please enter two numbers: \n");
	scanf("%d%d",&n1,&n2);
	sum = Sum(&n1,&n2);
	printf("the sum = %d",sum);
}

int Sum(int* n1, int* n2)
{
	return *n1 + *n2;
}