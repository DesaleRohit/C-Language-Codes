#include<stdio.h>
int main()
{
	int age;
	
	printf("\nEnter the Age:");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf("\nYou are Allowed for Driving");
	}
	else
	{
		printf("\nYou are Not Allowed for Driving");
	}
	
	
	return 0;
}