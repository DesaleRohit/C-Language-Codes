#include<stdio.h>
int main()
{
	int n,i,f=1;
	
	printf("\nEnter the Number:");
	scanf("%d",&n);
	
	for( i = n ; i >= 1; i-- )
	{
		f = f * i;
	}
	
	printf("\nFactorial = %d",f);
	
	return 0;
}