/*
6.4. Write a program to calculate the series: 4 + 12 + 20 + 28 + ... + n
printf-for
*/

#include <stdio.h>

int main()
{
    int i, n;

    scanf("%d", &n);

    for(i=4; i<=n; i+=8)
    {
        printf("%d ", i);
    }

    return 0;
}
