#include <stdio.h>

void main(void)
{
	int length;
	int width;
	
	printf("Enter the rectangle length: ");
	scanf("%d",&length);
	
	printf("Enter the rectangle width: ");
	scanf("%d",&width);
	
	printf("The circumference = %d \n",(2*length + 2*width));
	printf("The Area = %d",length*width);
	
}
