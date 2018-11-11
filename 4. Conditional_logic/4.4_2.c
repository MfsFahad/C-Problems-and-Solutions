#include <stdio.h>
#include <math.h>


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
        else
        {
            printf("C max\n");
        }
    }
    else
    {
        if(b > c)
        {
            printf("B max\n");
        }
        else
        {
            printf("C max\n");
        }
    }

    return 0;
}
