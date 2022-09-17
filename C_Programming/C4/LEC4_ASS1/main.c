#include<stdio.h>
#include "app.h"

void main(void)
{
	int n1,n2,n3,n4;
	printf("enter the four numbers :\n");
	scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
	Max(n1,n2,n3,n4);
	Min(n1,n2,n3,n4);
}