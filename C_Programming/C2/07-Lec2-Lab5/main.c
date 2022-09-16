/*
Write a C code that ask the user to enter his ID and
then the program will print his name.
Available IDs are:
1234-> Ahmed
5678 -> Youssef
1145 -> Mina
Any other number, the program will print Wrong ID
*/


#include <stdio.h>

void main(void)
{
	int ID;
	printf("please enter your ID :");
	scanf("%d",&ID);
	
	switch(ID)
	{
		case 1234: printf("Ahmed"); break;
		case 5678: printf("youssef"); break;
		case 1145: printf("Mina"); break;
		default: printf("Wrong ID"); break;
	}
}
