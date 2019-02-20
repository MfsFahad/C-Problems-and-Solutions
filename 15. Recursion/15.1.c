//15.1. Factorial

#include <stdio.h>

int Fact(int x)
{
        if(x == 1)
        {
                return 1;
        }
        else
        {
                return x * Fact(x-1);

                /*
                        Alternative way to return:

                                1. int sum = x * Fact(x-1);

                                    return sum;

                                2. int x = x * Fact(x-1);

                                    return x;
                */
        }
}

int main()
{
        int n;

        printf("Give a number\n");

        scanf("%d", &n);

        int result = Fact(n);

        printf("Result = %d\n", result);

        return 0;
}
