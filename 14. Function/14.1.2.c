/*
14.1. Write a function that gets two integers and display Addition
type-2
return_type: void
parameter: available
*/

#include <stdio.h>

void Add(int x, int y)
{
    int sum = x + y;

    printf("Summation = %d", sum);
}

int main()
{
    int x, y;

    printf("Give x and y:\n");

    scanf("%d %d", &x, &y);

    Add(x, y);

    return 0;
}

