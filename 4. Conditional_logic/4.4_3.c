#include <stdio.h>


int main()
{
    int a,b,c;

    scanf("%d %d %d", &a, &b, &c);

    if(a > b)
    {
        if(a > c)
        {
            printf("A max\n");
        }
        else if(a < c)
        {
            printf("C max\n");
        }
        else
        {
            printf("A and C max");
        }
    }
    else if(a < b)
    {
        if(b > c)
        {
            printf("B max\n");
        }
        else if(b < c)
        {
            printf("C max\n");
        }
        else
        {
            printf("B and C max");
        }
    }
    else
    {
        if(b > c)
        {
            printf("A and B max\n");
        }
        else if(b < c)
        {
            printf("C max\n");
        }
        else
        {
            printf("A, B, C are equal");
        }
    }

    return 0;
}

