/*
6.2. Write a program to calculate the series: 2 + 4 + 6 + 8 + ... + n
series-for
*/

#include <stdio.h>

int main()
{
    int i, n, sum=0;

    scanf("%d", &n);

    for(i=2; i<=n; i+=2)
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

    printf(" = sum", sum);

    return 0;
}
