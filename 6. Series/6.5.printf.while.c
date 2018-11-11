/*
6.5. Write a program to calculate the series: 2 + 5 + 8 + 11 + ... + n
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

        i+=3;
    }

    return 0;
}
