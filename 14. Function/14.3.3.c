/*
14.3.3. Write a function that gets two integers and display Division
type-3
return_type: available
parameter: void
*/

#include <stdio.h>

double Division()
{
    double x,  y;

    printf("Give a and b:\n");

    scanf("%lf  %lf", &x, &y);

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
    double div = Division();

    printf("Division = %.2lf", div);

    return 0;
}
