/*Write a C code that ask the user to enter 10
values and save them in an array using a for
loop. Then print the summation and the
average of the values entered*/

#include<stdio.h>

void main(void)
{
	int arr[10];
	int sum = 0;
	float avarage = 0;
	printf("enter 10 numbers :\n");
	
	for(int i =0; i<10; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(int i =0; i<10; i++)
	{
		sum = sum + arr[i];
	}
	
	avarage = sum/10.0;
	
	printf("the sum = %d\n",sum);
	printf("the avarage = %0.2f\n",avarage);
	
	
	
}