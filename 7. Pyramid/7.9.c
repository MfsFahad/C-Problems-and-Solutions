/*
7.9.
		A
		B B
		C C C
		D D D D
		E E E E E
*/

#include <stdio.h>

int main()
{
    int i, j;

    char n;

    for(i=1, n='A'; i<=5; i++, n++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%c ", n);
        }

        printf("\n");
    }

    return 0;
}
