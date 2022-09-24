/*Could you expect the size of this struct … ?
Write a C code to print the size of this structure
and verify that it meets your expectations.
After that modify the structure to achieve the a
minimum size. Can you see the difference … ?
Note that:
Your tool chain consider that the memory width
is 4 byte.*/

#include<stdio.h>
#include"STD_TYPES.h"

typedef struct
{
	u16 x;
	u32 y;
	u16 z;
	u32 w;
}myStruct;

void main(void)
{
	myStruct abanob;
	printf("%d",sizeof(abanob));
}