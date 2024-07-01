#include <stdio.h>
void main()
{
    int a, b, sum, sub, mul, div;
    char operator;
    printf("\n enter the operator:");
    scanf("%c", &operator);

    printf("\n enter the operand:");
    scanf("%d%d", &a, &b);

    switch (operator)
    {
    case '+':
        sum = a + b;
        printf("sum=%d", sum);
        break;

    case '-':
        sub = a - b;
        printf("sub=%d", sub);
        break;

    case '*':
        mul = a * b;
        printf("mul=%d", mul);
        break;

    case '/':
        div = a / b;
        printf("div=%d", div);
        break;
    }
}