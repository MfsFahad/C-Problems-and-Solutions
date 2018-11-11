//4.4. Write a program that read three numbers and display maximum
#include <stdio.h>

#include <math.h>

int main()
{
    int a, b, c;

    scanf("%d%d%d", &a, &b, &c);

    if(a>b && a>c)
    {
        printf("a max");
    }
    else if(b>a && b>c)
    {
        printf("b max");
    }
    else if(c>a && c>b)
    {
        printf("c max");
    }
    else if(a==b && a>c)
    {
        printf("a or b max");
    }
    else if(b==c && b>a)
    {
        printf("b or c max");
    }
    else if(c==a && c>b)
    {
        printf("a or c max");
    }
    else
    {
        printf("all equal");
    }

    return 0;
}
