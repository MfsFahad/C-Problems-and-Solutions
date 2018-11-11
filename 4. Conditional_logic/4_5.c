//4.4. Write a program that read three numbers and display minimum
#include <stdio.h>

#include <math.h>

int main()
{
    int a, b, c;

    scanf("%d%d%d", &a, &b, &c);

    if(a<b && a<c)
    {
        printf("a min");
    }
    else if(b<a && b<c)
    {
        printf("b min");
    }
    else if(c<a && c<b)
    {
        printf("c min");
    }
    else if(a==b && a<c)
    {
        printf("a or b min");
    }
    else if(b==c && b<a)
    {
        printf("b or c min");
    }
    else if(a==c && a<b)
    {
        printf("a or c min");
    }
    else
    {
        printf("all equal");
    }
    return 0;
}
