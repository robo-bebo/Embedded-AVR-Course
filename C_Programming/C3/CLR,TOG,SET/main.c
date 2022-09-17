#include<stdio.h>

void main(void)
{
	unsigned int x;
	unsigned int bit;
	unsigned int set,clr,tog;
	printf("enter a number and the bit location from 0 to 7: \n");
	scanf("%d%d",&x,&bit);
	
	set = (x|(1<<bit));
	clr = (x&(~(1<<bit)));
	tog = (x^(1<<bit));
	printf("SET = %d\n",set);
	printf("CLR = %d\n",clr);
	printf("TOG = %d\n",tog);
}