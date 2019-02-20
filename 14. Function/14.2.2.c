/*
14.2.1. Write a function that gets two integers and display Addition, substraction , multiplication
type-2
return_type: void
parameter: available
*/

#include <stdio.h>

void Add(int x, int y)
{
    int sum = x + y;

    printf("Summation = %d\n", sum);
}

void Sub(int x, int y)
{
    int sub = x - y;

    printf("Substraction = %d\n", sub);
}

void Mult(int x, int y)
{
    int mult = x * y;

    printf("Multiplication = %d\n", mult);
}

int main()
{
    int x, y;

    printf("Give x and y:\n");

    scanf("%d %d", &x, &y);

    Add(x, y);

    Sub(x, y);

    Mult(x, y);

    return 0;
}