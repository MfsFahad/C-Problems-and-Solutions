#include <stdio.h>

int main()
{
    int n, r, i, j, mult1=1, mult2=1;

    float nPr;

    scanf("%d %d", &n, &r);

    for(i=n; i>=1; i--)
    {
        mult1 = mult1 * i;
    }

    for(j=n-r; j>=1; j--)
    {
        mult2 = mult2 * j;
    }

    nPr = mult1 / mult2;

    printf("%f", nPr);

    return 0;
}
