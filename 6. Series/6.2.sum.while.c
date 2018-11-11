/*
6.2. Write a program to calculate the series: 2 + 4 + 6 + 8 + ... + n
sum-while
*/

#include <stdio.h>

int main()
{
    int i=2, n, sum=0;

    scanf("%d", &n);

    while(i<=n)
    {
        sum = sum + i;

        i+=2;
    }

    printf("%d\n", sum);

    return 0;
}
