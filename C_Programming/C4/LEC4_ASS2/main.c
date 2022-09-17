#include <stdio.h>
#include"app.h"

void main(void)
{
	
	int id;
	while(1)
	{
		printf("enter the operation id: ");
		scanf("%d",&id);
		
		switch(id)
		{
			case 1:
			add();
			break;
			
			case 2:
			sub();
			break;
			
			case 3:
			mul();
			break;
			
			case 4:
			div();
			break;
			
			case 5:
			And();
			break;
			
			case 6:
			Or();
			break;
			
			case 7:
			Not();
			break;
			
			case 8:
			Xor();
			break;
			
			case 9:
			rem();
			break;
			
			case 10:
			inc();
			break;
			
			case 11:
			dec();
			break;
			
			default:
			printf("invalid operation pleas try again");
			
		}
	}
}

