#include<stdio.h>
void main()
{
	int A,B,C;
	printf("\nEnter the value of A:");
	scanf("%d",&A);
	printf("\nEnter the value of B:");
	scanf("%d",&B);
	printf("\nEnter the value of c:");
	scanf("%d",&C);
	if( A > B)
	{
		if( A > C)
		{
			printf("\nA is Big");
		}
		else
		{
			printf("\nC is Big");
		}
	}
	else
	{
		if( B > C)
		{
			printf("\n B is Big");
		}
		else
		{
			printf("\n C is big");
		}
	}
	return 0;
}