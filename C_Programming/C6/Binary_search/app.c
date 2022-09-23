#include<stdio.h>
#include"app.h"

void sort(int* arr)
{
	int temp;
	printf("enter 10 numbers :\n");
	
	for(int i =0; i<10; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(int i =0; i<(SIZE-1); i++)
	{
		for(int j=0; j<(SIZE-i-1); j++)
		{
			if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
	for(int i=0; i<10; i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
	
}