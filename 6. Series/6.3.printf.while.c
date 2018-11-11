/*
6.3. Write a program to calculate the series: 1 + 3 + 5 + 7 + ... + n
printf-while
*/

#include <stdio.h>

int main()
{
    int i=1, n;

    scanf("%d", &n);

    while(i<=n)
    {
        printf("%d ", i);

        i+=2;
    }

    return 0;
}
