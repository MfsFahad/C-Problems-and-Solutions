//14.11. Write a function that gets length and width of a rectangle and returns area

//gets - parameter available
//reads - void parameter

#include <stdio.h>

double Area(double x, double y)
{
    double area = x * y;

    return area;
}

int main()
{
    double length, width;

    printf("Give length:\n");

    scanf("%lf", &length);

    printf("Give width:\n");

    scanf("%lf", &width);

    double area = Area(length, width);

    printf("Area of the rectangle = %.2lf", area);

    return 0;
}
