/*
14.3.1. Write a function that gets two integers and display Division
type-1
return_type: void
parameter: void
*/

#include <stdio.h>

void Division()
{
    double x, y;

    printf("Give x and y:\n");

    scanf("%lf %lf", &x, &y);

    if(y == 0)
    {
        printf("Infinity");

        return 0;
    }

    double div = (double)x / y;

    printf("Divisio = %.2lf", div);
}

int main()
{
    Division();

    return 0;
}
