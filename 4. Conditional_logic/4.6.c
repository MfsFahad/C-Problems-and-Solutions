#include <stdio.h>

int main()
{
    int a,b,c;

    scanf("%d %d %d", &a, &b, &c);

    if(a > b)
    {
        if(b > c)
        {
            printf("B is Medium\n");
        }
        else if(b < c)
        {
            if(a > c)
            {
                printf("C is Medium");
            }
            else if(a < c)
            {
                printf("A is Medium");
            }
        }
    }
    else if(a < b)
    {
        if(a > c)
        {
            printf("A is Medium\n");
        }
        else if(a < c)
        {
            if(b > c)
            {
                printf("C is Medium\n");
            }
            else if(b < c)
            {
                printf("B is Medium\n");
            }
        }
    }

    return 0;
}
