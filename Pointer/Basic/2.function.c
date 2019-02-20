#include <stdio.h>

void Add(int *ptr) /// call by reference
{
        *ptr = *ptr + 15;  /// will effect like global variable
}

int main()
{
        int a = 7;

        int *p = &a; /// p is a int type pointer variable
                             /// here p is pointing int type variable a's address

        a = a + 3;

        *p = *p + 5;

        printf("Using normal variable: %d\n", a);

        Add(p);  /// call by reference

        printf("Using pointer variable: %d\n", *p);

        return 0;
}

