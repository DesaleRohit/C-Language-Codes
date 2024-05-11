#include<stdio.h>
int main()
{
int i,evensum=0,oddsum=0;
printf("\nOdd \tEven");
for( i=1; i<=20; i++)
{
	if(i%2==0)
	{
		printf("\t%d",i);
		evensum=evensum+i;
	}
	else
	{
		printf("\n%d",i);
		oddsum=oddsum+i;
	}	
}
printf("\n-------------");
 printf("\n%d\t%d",oddsum,evensum);



return 0;
}
