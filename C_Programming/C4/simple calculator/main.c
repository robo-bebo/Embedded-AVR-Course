#include<stdio.h>

void main(void)
{
	float op1,op2,ans;
	char operation,exit;
	
	do
	{
		printf("enter operand 1 : ");
		scanf("%f",&op1);
		
		printf("enter operand 2 : ");
		scanf("%f",&op2);
		
		printf("enter the operation : ");
		scanf(" %c",&operation);
		
		switch(operation)
		{
			case '+': printf("%0.2f+%0.2f = %0.2f\n",op1,op2,op1+op2); break;
			case '-': printf("%0.2f-%0.2f = %0.2f\n",op1,op2,op1-op2); break;
			case '*': printf("%0.2f*%0.2f = %0.2f\n",op1,op2,op1*op2); break;
			case '/': printf("%0.2f/%0.2f = %0.2f\n",op1,op2,op1/op2); break;
			default	: printf("invalid operation \n"); continue;
		}
		
		printf("press e to exit or anyother key to continue :");
		scanf(" %c",&exit);
		
		if(exit == 'e')
			break;
	}
	while(1);
}