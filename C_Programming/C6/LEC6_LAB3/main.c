/*Write a C code that ask the user to enter 2
values and save them in two variables, then
the program sends these variables to
function that calculates the summation and
subtraction of them, the function returns the
2 results and return them in two pointers
received as input arguments . The program
then print the 2 results.*/

#include<stdio.h>

void calc(int n1, int n2, int* ptr_sub, int* ptr_sum);

void main(void)
{
	int n1,n2,sum,sub;
	
	printf("enter the two numbers: \n");
	scanf("%d%d",&n1,&n2);
	calc(n1,n2,&sub,&sum);
	printf("the sum = %d\nthe subtraction = %d",sum,sub);
	
	
}

void calc(int n1, int n2, int* ptr_sub, int* ptr_sum)
{
	*ptr_sum = n1+n2;
	*ptr_sub = n1-n2;
}