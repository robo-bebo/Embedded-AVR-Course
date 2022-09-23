#include<stdio.h>
#include"app.h"

int ScalerMul(int* arr1, int* arr2)
{
	int result = 0;
	for(int i=0; i<SIZE; i++)
	{
		result = result+(arr1[i]*arr2[i]);
	}
	
	return result;
}