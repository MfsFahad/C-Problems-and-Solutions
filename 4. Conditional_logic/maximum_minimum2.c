#include <stdio.h>

#include <math.h>

int main()
{
    int a, b, c;

    scanf("%d%d%d", &a, &b, &c);

    if(a != b && a != c && b != c)
    {
        if(a > c)
        {
            if(a > b)
            {
                printf("a max");
            }
            else if(b > a)
            {
                printf("b max");
            }
            else
            {
                printf("a or b max");
            }
        }
        else if(b > a)
        {
            if(b > c)
            {
                printf("b max");
            }
            else if(c > b)
            {
                printf("c max");
            }
            else
            {
                printf("b or c max");
            }
        }
        else if(a > b)
        {
            if(a > c)
            {
                printf("a max");
            }
            else if(c > a)
            {
                printf("c max");
            }
            else
            {
                printf("a or c max");
            }
        }
        else
        {
            printf("all are equal");
        }
    }
    else
    {
        printf("all are equal");
    }
}

