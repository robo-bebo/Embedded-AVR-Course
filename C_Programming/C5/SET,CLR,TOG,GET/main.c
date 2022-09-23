#include<stdio.h>
#include "app.h"

void main(void)
{
	int number,bit;
	printf("enter the number : ");
	scanf("%d",&number);
	
	printf("enter the bit location : ");
	scanf("%d",&bit);
	
	printf("after setting = %d\n",SetBit(number,bit));
	printf("after clearing = %d\n",ClrBit(number,bit));
	printf("after toggling = %d\n",TogBit(number,bit));
	printf("after getting = %d\n",GetBit(number,bit));
}