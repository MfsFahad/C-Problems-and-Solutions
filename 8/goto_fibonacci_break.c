#include <stdio.h>


int main()
{
    int a=0,b=1, sum=0,n;

    scanf("%d", &n);

    printf("%d %d ", a, b);

    while(sum <= n)
    {
        sum = a+b;

        if(sum > n)
        {
            goto fahad; /// implementing break using goto
        }

        printf("%d ", sum);
        a = b;
        b= sum;
    }

    fahad:

    return 0;
}

