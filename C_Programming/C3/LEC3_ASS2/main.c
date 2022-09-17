/*Write a login program in C that ask the
user to enter his ID and his password, if
the ID is correct the system will ask the
user to enter his password up to 3 times,
if he enters the password right the
systems welcomes him, if the three times
are incorrect, the system print No more
tries. If the user ID is incorrect the
system print You are not registered*/

#include<stdio.h>
void main(void)
{
	const int ID = 1234;
	const int password = 5678;
	int user_ID;
	int user_password;
	
	while(1)
	{
		printf("please enter your ID :");
		scanf("%d",&user_ID);
		if(user_ID == ID)
			break;
		printf("Wrong ID\n");
	}
	
	printf("please enter your password :");
	scanf("%d",&user_password);
	
	for(int i =0; (i<2 && (user_password != password)); i++)
	{
		printf("try again: ");
		scanf("%d",&user_password);
	}
	
	if(user_password == password)
	{
		printf("welcome Abanoub");
	}
	else
	{
		printf("access denied");
	}
	
}