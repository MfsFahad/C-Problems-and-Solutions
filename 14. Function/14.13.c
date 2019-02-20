//14.13. Write a function that gets any positive integer and returns it's digital sum

#include <stdio.h>

int DigitalSum(int n)
{
        int digit, result, sum = 0;

        while(n != 0)
        {
                result = n / 10;

                digit = n % 10;

                n = result;

                sum = sum + digit;
        }

        return sum;
}

int main()
{
        int n;

        printf("Give a positive number:\n");

        scanf("%d", &n);

        int sum = DigitalSum(n);

        printf("Digital sum is: %d", sum);

        return 0;
}
