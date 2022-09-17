/*Write a program in C to calculate the
factorial of an integer entered by the
user using while loop*/

#include<stdio.h>
void main(void)
{
	int x,fac,num;
	printf("please enter a number : ");
	scanf("%d",&num);
	x = num;
	fac = 1;
	while(x!=1)
	{
		if(x==0)
			break;
		fac = fac*x;
		x--;
	}
	printf("factorial %d = %d",num,fac);
}
