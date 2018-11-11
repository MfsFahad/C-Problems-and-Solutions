/*
6.1. Write a program to calculate the series: 1 + 2 + 3 + 4 + ... + n
printf-while
*/

#include <stdio.h>

int main()
{
    int i=1, n;

    scanf("%d", &n);

    while(i<=n)
    {
        printf("%d ", i);

        i++;
    }
    return 0;
}
