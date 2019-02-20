//14.12. Write a function that gets any positive integer and returns it's factorial

#include <stdio.h>

int Fact(int x)
{
        int i,  fact=1;

        for(i=x; i>=1; i--)
        {
                fact = fact * i;
        }

        return fact;
}

int main()
{
        int n;

        printf("Give a positive number:\n");

        scanf("%d", &n);

        int fact = Fact(n);

        printf("The factorial of the positive number is %d", fact);

        return 0;
}
