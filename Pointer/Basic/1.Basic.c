#include <stdio.h>

int main()
{
        int a = 7;

        int *p = &a; /// p is a int type pointer variable
                             /// here p is pointing int type variable a's address

        a = a + 3;

        *p = *p + 5;  /// accessing the value of the pointed address

        printf("Using normal variable: %d\n", a);

        a = a + 12;

        printf("Using pointer variable: %d\n", *p);

        return 0;
}
