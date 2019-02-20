#include <stdio.h>

void Mult(int x)
{
        x = x * 20;
}

int main()
{
        int a = 5;

        a = a * 10;

        Mult(a);

        printf("%d", a);

        return 0;
}
