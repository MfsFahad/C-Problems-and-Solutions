/*
6.5. Write a program to calculate the series: 2 + 5 + 8 + 11 + ... + n
sum-while
*/

#include <stdio.h>

int main()
{
    int i=2, n, sum=0;

    scanf("%d", &n);

    while(i<=n)
    {
        sum = sum + i;

        if(i!=n)
        {
            printf("%d + ", i);
        }
        else
        {
            printf("%d", n);
        }

        i+=3;

    }


    printf("= %d", sum);

    return 0;
}
