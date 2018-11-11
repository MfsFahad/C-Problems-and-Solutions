/*
    4.10. Write a program that read three numbers a,b,c and determine the roots of the quadratic equation:
			ax^2 + bx + c = 0
*/

#include <stdio.h>

#include <math.h>

int main()
{
    int a, b, c;

    double x1, x2, y;

    scanf("%d%d%d", &a, &b, &c);

    y = sqrt(b * b - 4 * a * c);

    if(y > 0)
    {
        x1 = (- b + y) / (2 * a);

        x2 = (- b - y) / (2 * a);

        printf("%lf, %lf", x1, x2);
    }
    else
    {
        printf("Roots are imaginary");
    }

    return 0;

}
