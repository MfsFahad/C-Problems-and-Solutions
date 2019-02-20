/**
        local variable logic
*/

#include <stdio.h>

void Add(int x)
{
        x = x + 32;  /// no changes will have any effect on main function variable a
                           /// because,
                          /// here local variable x has the value of a not the reference
}


int main()
{
        int a = 7; /// here a is a local variable

        a = a +18;

        Add(a); /// void type function

        printf("%d\n", a);
        

        return 0;
}
