#include<stdio.h>
int main()
{
	int size;
	printf("Enter the of Size Array:");
	scanf("%d",&size);
	int a[size];
	
	printf("Enter the Array Element:");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	int mini=a[0];
	printf("\nThe Array Element are:");
	for(int i=0; i<size; i++)
	{
		printf("\nIndex=%d",a[i]);
		if(mini>a[i])
		{
			mini=a[i];
		}
	}
	printf("\nMinimum Value in Array= %d",mini);
	return 0;
}