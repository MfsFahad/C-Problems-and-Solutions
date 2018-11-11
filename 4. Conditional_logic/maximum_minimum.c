#include <stdio.h>

#include <math.h>

int main()
{
    int a, b, c;

    scanf("%d%d%d", &a, &b, &c);

    if(a != b && a != c)
    {
        if(a == b || a > c)
        {
            if(a > b)
            {
                printf("a max");
            }
            else
            {
                printf("b max");
            }
        }
        else
        {
            printf("c max");
        }
    }
    else
    {
        printf("all are equal");
    }
}
