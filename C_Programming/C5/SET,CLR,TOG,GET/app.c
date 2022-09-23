#include<stdio.h>

int SetBit(int number, int bit)
{
	return (number|(1<<bit));
}

int ClrBit(int number, int bit)
{
	return (number & ~(1<<bit));
}

int TogBit(int number, int bit)
{
	return (number ^ (1<<bit));
}

int GetBit(int number, int bit)
{
	return ((number>>bit)&1);
}