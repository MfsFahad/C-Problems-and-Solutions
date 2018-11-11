/*
6.3. Write a program to calculate the series: 1 + 3 + 5 + 7 + ... + n
sum-for
*/

#include <stdio.h>

int main()
{
    int i=1, n, sum=0;

    scanf("%d", &n);

    while(i<=n)
    {
        sum = sum + i;

        i+=2;
    }

    printf("%d", sum);

    return 0;
}
