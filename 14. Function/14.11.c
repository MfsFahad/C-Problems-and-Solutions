//14.12. Write a function that gets radius of a circle and returns area

#include <stdio.h>

double Area(double radious)
{
    const double pi = 3.1416;

    double area = pi * radious * radious;

    return area;
}

int main()
{
    double radious;

    printf("Give radious:\n");

    scanf("%lf", &radious);

    double area = Area(radious);

    printf("Area = %.2lf", area);

    return 0;
}
