/*
6.2. Write a program to calculate the series: 2 + 4 + 6 + 8 + ... + n
sum-for
*/

#include <stdio.h>

int main()
{
    int i, n, sum=0;

    scanf("%d", &n);

    for(i=2; i<=n; i+=2)
    {
        sum = sum + i;
    }

    printf("%d\n", sum);

    return 0;
}
