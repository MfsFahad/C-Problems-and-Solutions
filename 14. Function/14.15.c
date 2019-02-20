//14.15. Write a function that gets any positive integer and returns it's reverse

#include <stdio.h>

int Reverse(int n)
{
        int digit, result, reverseNumber = 0;

        while(n != 0)
        {
                result = n / 10;

                digit = n % 10;

                n = result;

                reverseNumber = (reverseNumber*10) +digit;
        }

        return reverseNumber;
}

int main()
{
        int n;

        printf("Give a positive number:\n");

        scanf("%d", &n);

        int reverse = Reverse(n);

        printf("Reverse: %d\n", reverse);

        return 0;
}

