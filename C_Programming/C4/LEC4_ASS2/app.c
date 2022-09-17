#include<stdio.h>

void add (void)
{
	int a,b;
	printf("please enter the two operands:\n");
	scanf("%d%d",&a,&b);
	
	printf("the addition = %d\n",(a+b));
}

void sub (void)
{
	int a,b;
	printf("please enter the two operands:\n");
	scanf("%d%d",&a,&b);
	
	printf("the subtraction = %d\n",(a-b));
}

void mul (void)
{
	int a,b;
	printf("please enter the two operands:\n");
	scanf("%d%d",&a,&b);
	
	printf("the multiplication = %d\n",(a*b));
}

void div (void)
{
	int a,b;
	printf("please enter the two operands:\n");
	scanf("%d%d",&a,&b);
	
	printf("the division = %d\n",(a/b));
}

void And (void)
{
	int a,b;
	printf("please enter the two operands:\n");
	scanf("%d%d",&a,&b);
	
	printf("the anding = %d\n",(a&b));
}

void Or (void)
{
	int a,b;
	printf("please enter the two operands:\n");
	scanf("%d%d",&a,&b);
	
	printf("the oring = %d\n",(a|b));
}

void Xor (void)
{
	int a,b;
	printf("please enter the two operands:\n");
	scanf("%d%d",&a,&b);
	
	printf("the xoring = %d\n",(a^b));
}

void rem (void)
{
	int a,b;
	printf("please enter the two operands:\n");
	scanf("%d%d",&a,&b);
	
	printf("the reminder = %d\n",(a%b));
}

void Not (void)
{
	int a,b;
	printf("please enter the operand: ");
	scanf("%d",&a);
	
	printf("the not = %d\n",(!a));
}

void inc (void)
{
	int a,b;
	printf("please enter the operand: ");
	scanf("%d",&a);
	
	printf("after increment value = %d\n",(a+1));
}

void dec (void)
{
	int a,b;
	printf("please enter the operand: ");
	scanf("%d",&a);
	
	printf("after decrement the value = %d\n",(a-1));
}