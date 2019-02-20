#include <stdio.h>

int Mult(int x)
{
        x = x * 20;  /// no changes will have any effect on main function variable a
                           /// because,
                          /// here local variable x has the value of a not the reference

        return x;  /// returning the changed value, catching this value with main function a will have effect
}

int main()
{
        int a = 5;  /// here a is a local variable

        a = a * 10;

        a = Mult(a);  /// this function has return type

        printf("%d", a);

        return 0;
}

