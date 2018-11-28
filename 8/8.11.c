#include <stdio.h>

int main()
{
    int n, r, i, mult1=1, mult2=1, mult3=1, nCr;


    scanf("%d %d", &n, &r);

    for(i=n; i>=1; i--)
    {
        mult1 = mult1 * i;
    }

    for(i=n-r; i>=1; i--)
    {
        mult2 = mult2 * i;
    }

    for(i=r; i >= 1; i--)
    {
        mult3 = mult3 * i;
    }

    nCr = mult1 / (mult2 * mult3);

    printf("%d", nCr);

    return 0;
}
