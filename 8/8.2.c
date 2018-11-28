#include <stdio.h>

int main()
{
    int x, digit, sum=0, result;

    scanf("%d", &x);

    while(x>0)
    {
        digit = x%10;

        sum = sum + digit;

        result = x/10;

        x = result;

    }

    printf("%d", sum);

    return 0;
}
