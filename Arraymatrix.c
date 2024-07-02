#include<stdio.h>
int main()
{
	int a[3][3],r,c;
	printf("\nEnter the 3x3 Array Number:");
	
	for(r=0; r<=2; r++)
	{
		for(c=0; c<=2; c++)
		{
			scanf("%d",&a[r][c]);
		}
	}
	
	printf("\nThe Array Elements are:\n");
	for(r=0; r<=2; r++)
	{
		for(c=0; c<=2; c++)
		{
			printf("\t%d",a[r][c]);
		}
		printf("\n");
	}
	
	return 0;
}