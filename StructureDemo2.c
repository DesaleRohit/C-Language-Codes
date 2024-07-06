#include <stdio.h>
void input();
void output();
struct student
{
	int rollno;
	char name[10];
	float fees;
};
struct student S[4];

void input()
{
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("\nEnter the rollno:");
		scanf("%d", &S[i].rollno);

		printf("\nEnter the name:");
		scanf("%s", &S[i].name);

		printf("\nEnter the fees:");
		scanf("%f", &S[i].fees);
	}
}

void output()
{
	for (int i = 0; i < 3; i++)
	{
		printf("\nRollno=%d", S[i].rollno);
		printf("\tName=%s", S[i].name);
		printf("\tfees=%f", S[i].fees);
	}
}
int main()
{

	input();
	output();
	return 0;
}