#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],z[3][3],r,c;
	printf("\nEnter the Number of 3x3 Matrix:");
	for(r=0; r<=2; r++)
	{
		for(c=0; c<=2; c++)
		{
			scanf("%d",&a[r][c]);
		}
	}
	
	printf("\nEnter the Number of 3x3 Matrix:");
	for(r=0; r<=2; r++)
	{
		for(c=0; c<=2; c++)
		{
			scanf("%d",&b[r][c]);
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

	
	printf("\nThe Array Elements are:\n");
	for(r=0; r<=2; r++)
	{
		for(c=0; c<=2; c++)
		{
			printf("\t%d",b[r][c]);
		}
		printf("\n");
	}
	

	for(r=0; r<=2; r++)
	{
		for(c=0; c<=2; c++)
		{
			z[r][c]= a[r][c]+b[r][c];
		}
	}
	
	printf("\nAddition of 3x3 Matrix is:\n");
	for(r=0; r<=2; r++)
	{
		for(c=0; c<=2; c++)
		{
			printf("\t%d",z[r][c]);
		}
		printf("\n");
	}
	
	return 0;
}