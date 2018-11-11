/*
6.5. Write a program to calculate the series: 2 + 5 + 8 + 11 + ... + n
printf-for
*/

#include <stdio.h>

int main()
{
    int i, n;

    scanf("%d", &n);

    for(i=2; i<=n; i+=3)
    {
        printf("%d ", i);
    }

    return 0;
}
