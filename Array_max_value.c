#include<stdio.h>
int main()
{
	int size;
	printf("Enter the Size of Array:");
	scanf("%d",&size);
	int a[size];
	
	printf("\nEnter the Array Elements:");
	for(int i=0; i<size; i++)
	{
		scanf("%d",&a[i]);
	}
	int max=a[0];
	printf("\nArray Elements are:");
	for(int i=0;  i<size; i++)
	{
		printf("\n Index=%d",a[i]);
		if(max<a[i])
		{
	       max=a[i];
		}
	}
	printf("\n Maximum Value in Array=%d",max);
	return 0;
}