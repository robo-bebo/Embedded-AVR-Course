/*Write a C code that ask the user to enter 10 values and save them in an array
using a for loop. Then print the minimum and the maximum of the values*/

#include<stdio.h>

void main(void)
{
	int arr[10];
	int max ;
	int min ;
	printf("enter 10 numbers :\n");
	
	for(int i =0; i<10; i++)
	{
		scanf("%d",&arr[i]);
		if(i==0)
		{
			max = arr[0];
			min = arr[0];
		}
		if(max < arr[i])
			max = arr[i];
		else if(min > arr[i])
			min = arr[i];
	}
	
	printf("the max number = %d\n",max);
	printf("the min number = %d\n",min);
	
	
	
	
	
}