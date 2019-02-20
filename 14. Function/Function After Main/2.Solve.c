#include <stdio.h>

int Product(int x, int y); /// fast forward declaration of  Product function

int main()
{
        int a, b;

        printf("enter two int numbers\n");

        scanf("%d %d", &a, &b);

        int result = Product(a, b); /// now this will not give you any error

        printf("Result: %d\n", result);

        return 0;
}

int Product(int x, int y)
{
        return x * y;
}

