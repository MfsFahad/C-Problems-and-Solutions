/*
6.4. Write a program to calculate the series: 4 + 12 + 20 + 28 + ... + n
printf-while
*/

#include <stdio.h>

int main()
{
    int i=4, n;

    scanf("%d", &n);

    while(i<=n)
    {
        printf("%d ", i);

        i+=8;
    }

    return 0;
}

