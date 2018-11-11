/*
6.1. Write a program to calculate the series: 1 + 2 + 3 + 4 + ... + n
sum-for
*/

#include <stdio.h>

int main()
{
    int i, n, sum=0;

    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        sum = sum + i;
    }

    printf("%d\n", sum);

    return 0;
}
