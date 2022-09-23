#include<stdio.h>
#include"app.h"

void main(void)
{
	int arr1[SIZE];
	int arr2[SIZE];
	int result;
	
	printf("enter the %d values of the first array: \n",SIZE);
	for(int i=0; i<SIZE; i++)
	{
		scanf("%d",arr1+i);
	}
	
	printf("enter the %d values of the second array: \n",SIZE);
	for(int i=0; i<SIZE; i++)
	{
		scanf("%d",arr2+i);
	}
	result = ScalerMul(arr1, arr2);
	
	printf("the result = %d",result);
	
}