/*
14.2.1. Write a function that gets two integers and display Addition, substraction , multiplication
type-4
return_type: available
parameter: available
*/

#include <stdio.h>

int Add(int x, int y)
{
    int sum = x + y;

    return sum;
}

int Sub(int x, int y)
{
    int sub = x - y;

    return sub;
}

int Mult(int x, int y)
{
    int mult = x * y;

    return mult;
}

int main()
{
    int a, b;

    printf("Give a and b:\n");

    scanf("%d %d", &a, &b);

    int sum  = Add(a, b);

    int sub = Sub(a, b);

    int mult = Mult(a, b);

    printf("Summation = %d\n", sum);

    printf("Substraction = %d\n", sub);

    printf("Multiplication = %d\n", mult);

    return 0;
}