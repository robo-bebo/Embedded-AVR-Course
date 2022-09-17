/*Write C code that ask will ask the user to
enter the result of 3 x 4, In case the user
entered correct answer the program will
print Thanks, otherwise the program will
print try again until the user enters the
correct answer*/

#include<stdio.h>

void main(void)
{
	int x = 0;
	printf("enter the result of 3x4 : ");
	while(x!=12)
	{
		scanf("%d",&x);
		if(x!=12)
			printf("try again\n");
	}
	printf("Thanks");
}