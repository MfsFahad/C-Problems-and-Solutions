#include <stdio.h>

#include <math.h>

int main()
{
    int a, b, c;

    scanf("%d%d%d", &a, &b, &c);

    if(a != b && b != c && a != c)
    {
        if(b == c)
    }
    else if(a != b && a != c && b == c)
    {

    }
    else if(a == b && a != c && b != c)
    {

    }
    else if(b != a && a == c && b != c)
    {

    }
    else
    {
        printf("all are equal");
    }
    return 0;
}
