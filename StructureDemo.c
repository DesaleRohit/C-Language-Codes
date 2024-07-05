#include<stdio.h>
void input();
void output();
	struct student 
	{
		int rollno;
		char name[10];
		float fees;
	};
	struct student S;
	
	void input(){
		printf("\nEnter the rollno:");
		scanf("%d",&S.rollno);
		
		printf("\nEnter the name:");
		scanf("%s",&S.name);
		
		printf("\nEnter the fees:");
		scanf("%f",&S.fees);
	}
	void output(){
		printf("\nRollno=%d",S.rollno);
		printf("\nName=%s",S.name);
		printf("\nfees=%f",S.fees);
	}
	
int main(){ 
	 
	input();
	output();
	return 0;
}