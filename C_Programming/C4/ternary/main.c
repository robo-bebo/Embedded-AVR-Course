#include<stdio.h>

void main(void)
{
	int a,b,c,max;
	printf("enter three numbers:\n");
	scanf("%d%d%d",&a,&b,&c);
	
	max = (a>b)&&(a>c)? a : b>c? b : c;
	printf("the mac number is : %d",max);
}