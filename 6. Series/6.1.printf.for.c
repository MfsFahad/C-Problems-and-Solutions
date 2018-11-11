/*
6.1. Write a program to calculate the series: 1 + 2 + 3 + 4 + ... + n
printf-for
*/

#include <stdio.h>

int main()
{
    int i, n;

    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        printf("%d ", i);
    }
    return 0;
}
