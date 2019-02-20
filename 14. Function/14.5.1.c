//14.5.1. Write a function that reads two integers and display maximum

// read = no parameter
//gets = parameter

#include <stdio.h>

void Max()
{
    double a, b;

    printf("Give a and b:\n");

    scanf("%lf %lf", &a, &b);

    if(a > b)
    {
        printf("Max : a = %.2lf\n", a);
    }
    else if(a < b)
    {
        printf("Max : b = %.2lf\n", b);
    }
    else
    {
        printf("Both are equal\n");
    }
}

int main()
{
    Max();

    return 0;
}
