/*
7.x.
		2
		3 4
		4 5 6
		5 6 7 8
		6 7 8 9 10

		2
		3 4
		5 6 7
		8 9 10 11
		12 13 14 15 16
*/

#include <stdio.h>

int main()
{
    int i, j, n=2;

    for(i=1; i<=5; i++)
    {
        for(j=1; j<=i; j++, n++)
        {
            printf("%d ", n);
        }
        printf("\n");
    }
    return 0;
}
