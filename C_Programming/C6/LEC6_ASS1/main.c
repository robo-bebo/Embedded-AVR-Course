/*Write a C code that defines a function which takes an array as input argument and
apply the bubble sorting algorithm on it, then print the result*/

#include<stdio.h>
#include"app.h"


void main(void)
{
	int arr[SIZE];
	printf("enter 10 numbers :\n");
	
	for(int i =0; i<10; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	sort(arr);
	
	printf("the array values after sorting are :\n");
	for(int i =0; i<10; i++)
	{
		printf("%d\n",arr[i]);
	}
	
	
}