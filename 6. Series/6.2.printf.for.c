/*
6.2. Write a program to calculate the series: 2 + 4 + 6 + 8 + ... + n
printf-for
*/

#include <stdio.h>

int main()
{
    int i, n;

    scanf("%d", &n);

    for(i=2; i<=n; i+=2)
    {
        printf("%d ", i);
    }
    return 0;
}
