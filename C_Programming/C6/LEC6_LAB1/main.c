/*Write a C code defines an int initialized with
10, then print it, then define a pointer that
points to that int and change the value of the
int through the pointer to be 20, then print it
again*/

#include<stdio.h>

void main(void)
{
	int x = 10;
	int* ptr_x = &x;
	
	printf("the value before = %d\n",x);
	*ptr_x = 20;
	printf("the value after = %d\n",x);
}