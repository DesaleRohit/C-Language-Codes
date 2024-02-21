#include<stdio.h>
int main()
{
	int a , b, Addition=0, Subtraction=0, Division=0, Multiplication=1;
	
	printf("\nEnter the first number:");
	scanf("%d",&a);
	
	printf("\nEnter the second number:");
	scanf("%d", &b);
	
	Addition=a+b;
	Subtraction=a-b;
	Division=a/b;
	Multiplication=a*b;
	
	printf("\nAddition:%d",Addition);
	printf( "\nSubtraction:%d", Subtraction);
	printf( "\nDivision:%d", Division);
	printf( "\nMultiplication:%d", Multiplication);
		
	return 0;
}