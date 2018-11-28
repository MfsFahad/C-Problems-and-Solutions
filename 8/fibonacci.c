#include <stdio.h>


int main()
{
    int a=0,b=1, sum=0,n;

    scanf("%d", &n);

    printf("%d %d ", a, b);

    while(sum <= n)
    {
        sum = a+b;

        if(sum > n)
        {
            break;
        }

        printf("%d ", sum);
        a = b;
        b= sum;
    }

    return 0;
}
