
#include <stdio.h>
int main()
{
    int s1, s2, s3, s4, s5, s6, s7;
    float marks = 0.0, percentage = 0.0;

    // Take the 7 Subject marks
    printf("\nEnter the Marks of Computer:");
    scanf("%d", &s1);

    printf("\nEnter the Marks Accounting:");
    scanf("%d", &s2);

    printf("\nEnter the Marks C Programming-I:");
    scanf("%d", &s3);

    printf("\nEnter the Marks Web Design-I:");
    scanf("%d", &s4);

    printf("\nEnter the Marks Practical-I:");
    scanf("%d", &s5);

    printf("\nEnter the Marks Practical-II:");
    scanf("%d", &s6);

    printf("\nEnter the Marks Practical-III:");
    scanf("%d", &s7);

    // Sum of All Subject
    marks = s1 + s2 + s3 + s4 + s5 + s6 + s7;
    printf("\n Total=%f", marks);

    // Student Percentage
    percentage = marks * 100 / 700;
    printf("\nTotal Percentage of Student=%f", percentage);
    
    

    return 0;
}
