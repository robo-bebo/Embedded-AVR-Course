/*Write C code that will ask the user to enter 2
numbers, then the main function will call a
function named Get_Max that takes the 2
values entered by the user then return the
maximum of them.
The main function then will print the
returned value*/

#include<stdio.h>

int GetMax(int n1, int n2);

void main(void)
{
	int n1,n2;
	printf("enter the two numbers :\n");
	scanf("%d%d",&n1,&n2);
	printf("the max number = %d",GetMax(n1,n2));
}

int GetMax(int n1, int n2)
{
	int max = n1>n2? n1 : n2;
	return max;
}