#include <stdio.h>

int main()
{
        int a, b;

        printf("enter two int numbers\n");

        scanf("%d %d", &a, &b);

        int result = Product(a, b); /// in some compilers this will give error
                                                    /// because Product() function is not declared above main() function
                                                  /// so, main() function will not recognized Product() function

        printf("Result: %d\n", result);

        return 0;
}

int Product(int x, int y)
{
        return x * y;
}
