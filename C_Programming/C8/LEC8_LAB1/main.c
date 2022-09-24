/*Write a c code that defines a structure for
employees that contains his salary, bonus and
deductions. The program shall ask the user to
enter these information for three employees (
Ahmed, Waleed and Amr). Then the program
will print the total value shall be supplied by
finance team.*/

#include<stdio.h>

struct employee
{
	int salary;
	int bonus;
	int deductions;
};

void main(void)
{
	struct employee abanoub;
	struct employee amr;
	struct employee waleed;
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