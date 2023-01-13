

#include<stdio.h>
#include<stdlib.h>

void main(void)
{
	int size;
	int* ptr;
	int temp;
	printf("please enter the number of values: ");
	scanf("%d",&size);
	
	ptr = (int*)malloc(size);
	
	
	for(int i=0; i<size; i++)
	{
		printf("enter value %d: ",i);
		scanf("%d",ptr+i);
	}
	
	for(int i =0; i<size-1; i++)
	{
		for(int j =0; j<size-1-i; j++)
		{
			if(*(ptr+j) > *(ptr+1+j))
			{
				temp = *(ptr+j);
				*(ptr+j) = *(ptr+1+j);
				*(ptr+1+j) = temp;
			}
			
		}
		
	}
	
	printf("values after sorting are:\n");
	
	for(int i=0; i<size; i++)
	{
		printf("%d\n",*(ptr+i));
	}
	
	
}
