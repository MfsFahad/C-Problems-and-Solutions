/*
6.5. Write a program to calculate the series: 2 + 5 + 8 + 11 + ... + n
series-for
*/

#include <stdio.h>

int main()
{
    int i, n, sum=0;

    scanf("%d", &n);

    for(i=2; i<=n; i+=3)
    {
        sum = sum + i;

        if(i!=n)
        {
            printf("%d + ", i);
        }
        else
        {
            printf("%d", n);
        }
    }

    printf(" = %d", sum);

    return 0;
}

