#include <stdio.h>

int main()
{
        int x;

        int *p = &x;

        x = 5;

        printf("%d\n", x);

        printf("%d\n", *p);

        *p = 57;

        printf("%d\n", x);

        return 0;
}
