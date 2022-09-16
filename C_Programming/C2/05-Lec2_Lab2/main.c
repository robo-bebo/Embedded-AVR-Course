/*
Write a C code to calculate employee
salary in a week based on the his
working hours, hour rate is 50.
The program will ask the user to enter
the working hours, then it will print his
salary.
But if the working hours are less than 40
hours, a 10% deduction will be applied.
*/


#include <stdio.h>
#define RATE 50

void main(void)
{
	int hours;
	
	printf("Enter the number of hours: ");
	scanf("%d",&hours);
	int salary;
	
	if( hours >= 40)
	{
		salary = hours*RATE;
		printf("salary = %d",salary);
	}
	
	else 
	{
		salary = hours*RATE - 0.1*hours*RATE;
		printf("salary = %d",salary);
	}
	
}
