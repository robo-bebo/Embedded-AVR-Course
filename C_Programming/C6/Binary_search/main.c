#include<stdio.h>
#include"app.h"

void main(void)
{
	int arr[SIZE];
	int x;
	int i;
	int end,middle,start;
	sort(arr);
	end = SIZE-1;
	middle = (SIZE-1)/2;
	start = 0;
	
	printf("enter tha value you want to search :");
	scanf("%d",&x);
	
	
	for(i =0; i<SIZE; i++)
	{
		if(x == arr[middle])
		{
			printf("the element exist in index %d\n",middle);
			break;
		}
		else if(x > arr[middle])
		{
			start = middle+1;
			middle = (end + start)/2;
		}
		else if(x<arr[middle])
		{
			end = middle-1;
			middle = (end + start)/2;
		}
	}
	if(i >= SIZE-1)
	{
		printf("element does not exist");
	}
	
	
}