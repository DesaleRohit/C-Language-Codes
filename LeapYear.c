#include<stdio.h>
int main()
{
	int year;
	
	printf("\nEnter the Year:");
	scanf("%d",&year);
	
	if(year%4==0)
	{
		printf("\nLeap Year");
	}
	else
	{
		printf("\nNot Leap Year");
	}
	
	return 0;
}