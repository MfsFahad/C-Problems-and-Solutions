/*
7.10.
		A
		A B
		A B C
		A B C D
		A B C D E
*/

#include <stdio.h>

int main()
{
    int i, j;

    char n;

    for(i=1; i<=5; i++)
    {
        for(j=1, n='A'; j<=i; j++, n++)
        {
            printf("%c ", n);
        }

        printf("\n");
    }

    return 0;
}
