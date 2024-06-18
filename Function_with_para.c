#include<stdio.h>
void add(int ,int );
int main()
{
	int a,b,c=0;
	printf("\nEnter the 2 Numbers:");
	scanf("%d %d",&a,&b);
	add(a,b);
	return 0;
}
void add(int x , int y)
{
	printf("\nAddition=%d",x+y);
}