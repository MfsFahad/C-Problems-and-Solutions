/*
7.x.
		2
		3 4
		4 5 6
		5 6 7 8
		6 7 8 9 10

*/

#include <stdio.h>

int main()
{
    int i, j, k, n=2;

    for(i=1; i<=5; i++, n++)
    {
        k = n;
        for(j=1; j<=i; j++, k++)
        {
            printf("%d ", k);

        }
        printf("\n");
    }

    return 0;
}
