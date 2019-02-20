//14.5.4. Write a function that gets two integers and returns maximum

// read = no parameter
//gets = parameter

#include <stdio.h>

double Max(double x, double y)
{
    double max;

    if(a > b)
    {
        printf("Max : a = %.2lf\n", a);

        max = a;
    }
    else if(a < b)
    {
        printf("Max : b = %.2lf\n", b);

        max = b;
    }
    else
    {
        printf("Both are equal\n");

        max = a;
    }

    return max;
}

int main()
{
    double a, b;
    
    printf("Give a and b:\n");

    scanf("%lf %lf", &a, &b);

    double max = Max(a, b);



    return 0;
}