/*
6.4. Write a program to calculate the series: 4 + 12 + 20 + 28 + ... + n
series-while
*/

#include <stdio.h>

int main()
{
    int i=4, n, sum=0;

    scanf("%d", &n);

    while(i<=n)
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
        i+=8;
    }

    printf(" = %d", sum);

    return 0;
}

