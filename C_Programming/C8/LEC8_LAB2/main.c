/*Repeat Lab1 using the typedef keyword when
declaring the structure.*/

#include<stdio.h>

typedef struct 
{
	int salary;
	int bonus;
	int deductions;
}employee;

void main(void)
{
	employee abanoub;
	employee amr;
	employee waleed;
	int total_value;
	
	printf("Please enter Abanoub's salary: ");
	scanf("%d",&abanoub.salary);
	printf("Please enter Abanoub's bonus: ");
	scanf("%d",&abanoub.bonus);
	printf("Please enter Abanoub's dedcution: ");
	scanf("%d",&abanoub.deductions);
	
	printf("Please enter Amr's salary: ");
	scanf("%d",&amr.salary);
	printf("Please enter Amr's bonus: ");
	scanf("%d",&amr.bonus);
	printf("Please enter Amr's dedcution: ");
	scanf("%d",&amr.deductions);
	
	printf("Please enter waleed's salary: ");
	scanf("%d",&waleed.salary);
	printf("Please enter waleed's bonus: ");
	scanf("%d",&waleed.bonus);
	printf("Please enter waleed's dedcution: ");
	scanf("%d",&waleed.deductions);
	
	total_value = abanoub.salary +
				  abanoub.bonus	-
				  abanoub.deductions +
				  amr.salary +
				  amr.bonus	-
				  amr.deductions +
				  waleed.salary +
				  waleed.bonus	-
				  waleed.deductions;
				  
	printf("total value = %d\n",total_value);
	
	
}