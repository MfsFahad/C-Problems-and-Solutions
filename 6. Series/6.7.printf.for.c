/*
6.7. Write a program to calculate the series: 2.1 + 5.3 + 8.5 + ... + n
*/

#include <stdio.h>

int main()
{
    int i,j,n;

    scanf("%d", &n);

    for(i=1,j=2; i<=n && j<=n+1; i++,j++)
    {
        if(i!=n && j!=n+1)
        {
            printf("(%d * %d) + ", i, j);
        }
        else
        {
            printf("(%d * %d)", n, n+1);
        }
    }

    return 0;
}
