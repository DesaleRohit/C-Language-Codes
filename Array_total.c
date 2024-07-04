#include<stdio.h>
int main()
{
	int size,total,i,j;
	printf("\nEnter the Size of Array:");
	scanf("%d",&size);
	int array[size];
	printf("\nEnter the Array element:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("\nArray element are :");
	
	for(j=0;j<size;j++)
	{
		printf("\n:index=%d",array[j]);
			total+=array[j];
	}
	printf("\nTotal=%d",total);
	
	return 0;
}