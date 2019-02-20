/*
14.1. Write a function that read two integers and returns Addition
type-3
return_type: available
parameter: void
*/

#include <stdio.h>

int Add()
{
    int x, y;

    printf("Give x and y:\n");

    scanf("%d %d", &x, &y);

    int sum = x + y;

    return sum;
}

int main()
{
    int sum = Add();

    printf("Summation = %d", sum);

    return 0;
}

