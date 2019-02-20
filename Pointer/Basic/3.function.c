#include <stdio.h>

void Add(int *ptr) /// call by reference
{
        *ptr = *ptr + 15;  /// will effect like global variable
}

int main()
{
        int a = 7;

        a = a + 3;

        printf("Using normal variable: %d\n", a);

        Add(&a);  /// call by reference

        printf("Using normal variable: %d\n", a);

        return 0;
}


