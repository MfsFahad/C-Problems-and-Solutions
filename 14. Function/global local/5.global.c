#include <stdio.h>

void Mult()
{
        a = a * 3;   /// this will give error
                         ///  Mult() doesn't know global variable a
                       ///because, the global a is declared after Mult() function
}

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

        Add();  /// void function

        Mult();  /// void function

        a = a + 2; /// global

        printf("%d\n", a);

        return 0;
}

