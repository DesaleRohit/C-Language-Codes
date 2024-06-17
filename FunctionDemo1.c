#include<stdio.h>
void add();
void sub();
int main()
{
	add();
	sub();
	return 0;
}
void add()
{
	int a,b,c=0;
	printf("\nEnter the 2 Numbers:");
	scanf("%d %d",&a ,&b);
	c=a+b;
	printf("\nAddition=%d",c);
}
void sub()
{
	int a,b,c=0;
	printf("\nEnter the 2 Numbers:");
	scanf("%d %d",&a,&b);
	c=a-b;
	printf("\nSubtraction=%d",c);
}