/*Write a C code to manage a class of 10
students. Each student studies 4 subjects
Math, Language, Physics and Chemistry.
First define an array of 10 elements and assign
random grades for students. The system will
ask the user to enter the student ID then the
system will show its grades. The software shall
manage wrong IDs.*/

#include<stdio.h>
#define SIZE 10

typedef struct
{
	int Math, Language, Physics, Chemistry;
	
}Student;

void main(void)
{
	int ID;
	Student S_arr[SIZE] = { {40,70,57,37},
						    {35,57,79,34},
							{53,47,67,35},	
		                    {34,91,74,37},
							{96,85,73,53},
	                        {57,38,98,47},
							{87,34,39,28},
							{97,35,67,38},
							{47,89,90,78},
							{67,78,89,48}
						};
							

	while(1)
	{
		printf("enter the student ID to view his grades: ");
		scanf("%d",&ID);
		if((ID<0) || (ID>SIZE-1))
		{
			printf("wrong id\n");
		}
		else
			break;
	}
	
	printf("the student grades are: \n");
	printf("Math = %d\n",S_arr[ID].Math);
	printf("Language = %d\n",S_arr[ID].Language);
	printf("Physics = %d\n",S_arr[ID].Physics);
	printf("Chemistry = %d\n",S_arr[ID].Chemistry);
	
	
	
}