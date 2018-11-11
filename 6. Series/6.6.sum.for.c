/*
6.6. Write a program to calculate the series: 1.2 + 2.3 + 3.4 + ... + n.(n+1)
sum-for
*/

#include <stdio.h>

int main()
{
    int i,j,n, sum=0;

    scanf("%d", &n);

    for(i=1,j=2; i<=n && j<=n+1; i++,j++)
    {
        sum = sum + i * j;

        if(i!=n && j!=n+1)
        {
            printf("(%d * %d) + ", i, j);
        }
        else
        {
            printf("(%d * %d)", n, n+1);
        }
    }

    printf(" = %d", sum);

    return 0;
}
