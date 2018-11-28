
#include <stdio.h>


int main()
{
    int a=0,b=1, sum=0,n;

    scanf("%d", &n);

    while(sum <= n)
    {


        printf("%d ", sum);

        a = b;
        b = sum;
        sum = a+b;
    }

    return 0;
}

