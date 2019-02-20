/*
14.2.1. Write a function that gets two integers and display Addition, substraction , multiplication
type-1
return_type: void
parameter: void
*/

#include <stdio.h>

void Add()
{
    int x, y;

    printf("Give x and y:\n");

    scanf("%d %d", &x, &y);

    int sum = x + y;

    printf("Summation = %d\n", sum);
}

void Sub()
{
    int x, y;

    printf("Give x and y:\n");

    scanf("%d %d", &x, &y);

    int sub = x - y;

    printf("Substraction = %d\n", sub);
}

void Mult()
{
    int x, y;

    printf("Give x and y:\n");

    scanf("%d %d", &x, &y);

    int mult = x * y;

    printf("Multiplication = %d\n", mult);
}

int main()
{
    Add();

    Sub();

    Mult();

    return 0;
}