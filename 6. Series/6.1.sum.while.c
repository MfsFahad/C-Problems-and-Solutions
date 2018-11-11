/*
6.1. Write a program to calculate the series: 1 + 2 + 3 + 4 + ... + n
sum-while
*/

#include <stdio.h>

int main()
{
    int i=1, n, sum=0;

    scanf("%d", &n);

    while(i<=n)
    {
        sum = sum + i;

        i++;
    }

    printf("%d\n", sum);

    return 0;
}
