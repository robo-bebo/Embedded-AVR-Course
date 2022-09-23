/*Write a C code that define 3 int variables x, y and z and 3 pointers to int p, q
and r. Set x, y, z to three distinct values. Set p, q, r to the addresses of x, y, z
respectively.
a- Print with labels the values of x, y, z, p, q, r, *p, *q, *r.
b- Print the message: Swapping pointers.
c- Execute the swap code: r = p; p = q; q = r;
d- Print with labels the values of x, y, z, p, q, r, *p, *q, *r.*/

#include<stdio.h>


void main(void)
{
	int x = 5;
	int y = 10;
	int z = 15;
	
	int* p=&x;
	int* q=&y;
	int* r=&z;
	int* temp = 0;

	printf("the value of x = %d\n",x);
	printf("the value of y = %d\n",y);	
	printf("the value of z = %d\n",z);
	printf("the value of p = %p\n",p);
	printf("the value of q = %p\n",q);
	printf("the value of r = %p\n",r);
	printf("the value of *p = %d\n",*p);
	printf("the value of *q = %d\n",*q);
	printf("the value of *r = %d\n",*r);
	
	printf("swapping pointers:\n");
	
	temp = r;
	r = p;
	p = q;
	q = temp;
	
	printf("the value of x = %d\n",x);
	printf("the value of y = %d\n",y);	
	printf("the value of z = %d\n",z);
	printf("the value of p = %d\n",p);
	printf("the value of q = %d\n",q);
	printf("the value of r = %d\n",r);
	printf("the value of *p = %d\n",*p);
	printf("the value of *q = %d\n",*q);
	printf("the value of *r = %d\n",*r);
	
}