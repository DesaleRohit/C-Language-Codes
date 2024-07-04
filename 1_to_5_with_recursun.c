#include<stdio.h>
int inc(int);
int main()
{
	int a=1;
	inc(a);
	return 0;
}
int inc(int x)
{
	printf("\n%d",x);
	x++;
	if(x>5)
	return;
	else
	inc(x);
}