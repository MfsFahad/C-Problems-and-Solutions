#include <stdio.h>

int a; /// this is a global variable

void Add()
{
        a = a+ 12; /// global
                        /// any value change will be effected
}

int main()
{
        a = 5;  /// global

        a = a + 2; /// global

        Add();

        a = a + 2; /// global

        printf("%d\n", a);

        return 0;
}
