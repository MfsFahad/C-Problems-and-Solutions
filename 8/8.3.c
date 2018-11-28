#include <stdio.h>

int main()
{
    int x, digit, result;

    scanf("%d", &x);

    while(x>0)
    {
        result = x/10;

        digit = x%10;

        printf("%d", digit);

        x = result;
    }

    return 0;
}
