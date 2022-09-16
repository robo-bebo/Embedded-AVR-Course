/*Write a code that will ask the user to enter 3
numbers, the program will print the maximum
number of them.*/

#include<stdio.h>

void main(void)
{
	int n1,n2,n3;
	printf("please enter three numbers:\n");
	scanf("%d%d%d",&n1,&n2,&n3);
	
	if((n1>n2) && (n1>n3))
		printf("the maximum number is %d",n1);
	else if(n2>n3)
		printf("the maximum number is %d",n2);
	else 
		printf("the maximum number is %d",n3);
}