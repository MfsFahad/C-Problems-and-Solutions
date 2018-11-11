/*
6.3. Write a program to calculate the series: 1 + 3 + 5 + 7 + ... + n
printf-for
*/

#include <stdio.h>

int main()
{
    int i, n;

    scanf("%d", &n);

    for(i=1; i<=n; i+=2)
    {
        printf("%d ", i);
    }

    return 0;
}
