/*Write a C code that ask the user to enter 10
numbers, then ask him to enter another number
to search on it in the 10 numbers and print its
location in case it is found.
In case the number is not found, it will print
number no exist*/

#include<stdio.h>

void main(void)
{
	int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10;
	int x;
	printf("please enter 10 nubers: \n");
	
	scanf("%d%d%d%d%d%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10);
	
	printf("enter a number to search for: ");
	scanf("%d",&x);
	
	if(x == n1)
	{
		printf("the number is %d and it exist on location 1",x);
	}
	else if(x == n2)
	{
		printf("the number is %d and it exist on location 2",x);
	}
	else if(x == n3)
	{
		printf("the number is %d and it exist on location 3",x);
	}
	else if(x == n4)
	{
		printf("the number is %d and it exist on location 4",x);
	}
	else if(x == n5)
	{
		printf("the number is %d and it exist on location 5",x);
	}
	else if(x == n6)
	{
		printf("the number is %d and it exist on location 6",x);
	}
	else if(x == n7)
	{
		printf("the number is %d and it exist on location 7",x);
	}
	else if(x == n8)
	{
		printf("the number is %d and it exist on location 8",x);
	}
	else if(x == n9)
	{
		printf("the number is %d and it exist on location 9",x);
	}
	else if(x == n10)
	{
		printf("the number is %d and it exist on location 10",x);
	}
	else
		printf("number does not exist");
	
}