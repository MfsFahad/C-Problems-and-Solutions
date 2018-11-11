/*
6.2. Write a program to calculate the series: 2 + 4 + 6 + 8 + ... + n
printf-while
*/

#include <stdio.h>

int main()
{
    int i=2, n;

    scanf("%d", &n);

    while(i<=n)
    {
        printf("%d ", i);

        i+=2;
    }

    return 0;
}
