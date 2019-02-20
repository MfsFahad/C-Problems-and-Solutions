//14.17. Write a function that gets two positive integer(a,b) and returns a to the power b

#include <stdio.h>

int Power(int x, int y)
{
        int i, pwr=1;

        for(i=1; i <= y; i++)
        {
                pwr = pwr * x;
        }

        return pwr;
}

int main()
{
        int x, y;

        printf("Give two integer numbers:\n");

        scanf("%d %d", &x, &y);

        int power = Power(x, y);

        printf("Power of the number is: %d", power);

        return 0;
}
