/*
14.3.4. Write a function that gets two integers and display Division
type-3
return_type: available
parameter: available
*/

#include <stdio.h>

double Division(double x, double y)
{
    if(y == 0)
    {
        printf("Infinity");

        return 0;
    }

    double div = (double)x / y;

    return div;
}

int main()
{
    double a, b;
    
    printf("Give a and b:\n");

    scanf("%lf  %lf", &a, &b);
    
    double div = Division(a, b);

    printf("Division = %.2lf", div);

    return 0;
}
