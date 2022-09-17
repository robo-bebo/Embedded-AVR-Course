/*Write a program in C to read 10 numbers
from the user and find their summation and
average*/

#include<stdio.h>

void main(void)
{
	int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10;
	float sum;
	float avarage;
	printf("please enter 10 nubers: \n");
	
	scanf("%d%d%d%d%d%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10);
	
	sum = n1+n2+n3+n4+n5+n6+n7+n8+n9+n10;
	avarage = sum/10;
	
	printf("the sum is : %f\n",sum);
	printf("the avarage id : %f\n",avarage);
}