/*
14.1.1. Write a function that read two integers and display Addition
type-1
return_type: void
parameter: void
*/

#include <stdio.h>

void Add()
{
    int x, y, sum;

    printf("Give x and y:\n");

    scanf("%d %d", &x, &y);

    sum = x + y;

    printf("Summation = %d", sum);
}

int main()
{
    Add();

    return 0;
}