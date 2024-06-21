#include<stdio.h>
int main()
{
	int a[5],i;
	printf("\nEnter any 5 Number:");
	
	for(i=0;i<=4;i++)
	{
    	scanf("%d",&a[i]);	
	}
	for(i=0;i<=4;i++)
	{
		printf("\n%d",a[i]);
	}
	int greatest =a[0];
	for(int i=0;i<=4;i++)
	{
		while(greatest <= a[i])
	{
			greatest = a[i];
			i++;
		}
	}
	printf("\n\t %d is the greatest number",greatest);
	
	return 0;
}