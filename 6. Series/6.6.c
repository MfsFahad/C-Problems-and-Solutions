#include <stdio.h>

int main()
{
    int i,j,n, sum = 0;

    scanf("%d", &n);

    for(i=1,j=2; i<=n && j<=n+1; i++,j++)
    {
        sum += i*j;
    }

    printf("%d",sum);

    return 0;
}
