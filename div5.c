#include<stdio.h>
int main ()
{
	int n;
	printf("\nEnter any Number:");
	scanf("%d", &n);
	
	if(n%5==0)
	{
    	printf("\nNumber is Fully Divisible by 5");
    }
    else
    {
    	printf("\nNumber is Not Divisible by 5");
	}
	return 0;
}
