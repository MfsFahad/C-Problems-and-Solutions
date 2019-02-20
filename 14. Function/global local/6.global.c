#include <stdio.h>

int a = 0; /// this is a global variable

void Add()
{
        a = a+ 12; /// global
                        /// any value change will be effected

        printf("From Add: %d\n", a);
}

int main()
{
        int a = 5;  /// local

        a = a + 2; /// local

        Add();

        a = a + 2; /// local

        printf("From main: %d\n", a);

        return 0;
}

/**
        When same name global and local variable is declared

        in that case local variable variable will have priority in that local scope or context
*/
