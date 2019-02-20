/*
14.2.1. Write a function that gets two integers and display Addition, substraction , multiplication
type-3
return_type: available
parameter: void
*/

#include <stdio.h>

int Add()
{
    int x, y;

    printf("Addition: Give x and y:\n");

    scanf("%d %d", &x, &y);

    int sum = x + y;

    return sum;
}

int Sub()
{
    int x, y;

    printf("Substration: Give x and y:\n");

    scanf("%d %d", &x, &y);

    int sub = x - y;

    return sub;
}

int Mult()
{
     int x, y;

    printf("Multiplication: Give x and y:\n");

    scanf("%d %d", &x, &y);

    int mult = x * y;

    return mult;
}

int main()
{
    int sum  = Add();

    int sub = Sub();

    int mult = Mult();

    printf("Summation = %d\n", sum);

    printf("Substraction = %d\n", sub);

    printf("Multiplication = %d\n", mult);6

    return 0;
}