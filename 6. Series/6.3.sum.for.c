/*
6.3. Write a program to calculate the series: 1 + 3 + 5 + 7 + ... + n
sum-for
*/

#include <stdio.h>

int main()
{
    int i, n, sum=0;

    scanf("%d", &n);

    for(i=1; i<=n; i+=2)
    {
        sum = sum + i;
    }

    printf("%d\n", sum);

    return 0;
}
