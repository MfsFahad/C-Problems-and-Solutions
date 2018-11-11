/*
6.4. Write a program to calculate the series: 4 + 12 + 20 + 28 + ... + n
series-for
*/

#include <stdio.h>

int main()
{
    int i, n, sum=0;

    scanf("%d", &n);

    for(i=4; i<=n; i+=8)
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

