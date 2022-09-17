#include<stdio.h>

void Max(int n1,int n2, int n3, int n4)
{
	int max = n1;
	if(max < n2)
		max = n2;
	if(max < n3)
		max = n3;
	if(max < n4)
		max = n4;
	
	printf("the max number is : %d\n",max);
	
} 


void Min(int n1,int n2, int n3, int n4)
{
	int min = n1;
	if(min > n2)
		min = n2;
	if(min > n3)
		min = n3;
	if(min > n4)
		min = n4;
	
	printf("the min number is : %d\n",min);
	
} 