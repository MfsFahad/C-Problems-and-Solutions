/*
14.3.2. Write a function that gets two integers and display Division
type-2
return_type: void
parameter: available
*/

#include <stdio.h>

void Division(double x, double y)
{
    if(y == 0)
    {
        printf("Infinity");

        return 0;
    }
    
    double div = (double)x / y;

    printf("Division = %.2lf", div);
}

int main()
{
    double a, b;
    
    printf("Give a and b:\n");

    scanf("%lf %lf", &a, &b);

    Division(a, b);

    return 0;
}