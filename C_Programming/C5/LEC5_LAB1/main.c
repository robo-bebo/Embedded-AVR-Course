/*Write a C code that ask the user to enter 10
values and save them in an array using a for
loop. Then print the values entered by the
user in reverse order using another for loop*/

#include<stdio.h>

void main(void)
{
	int arr[10];
	printf("enter 10 numbers :\n");
	
	for(int i =0; i<10; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	
	for(int i =9; i>=0; i--)
	{
		printf("%d\n",arr[i]);
	}
}