/*
7.15.
		6 7 8 9 10
		5 6 7 8
		4 5 6
		3 4
		2
*/

#include <stdio.h>

int main()
{
    int i, j, n;

    for(i=1; i<=5; i++)
    {
        for(j=5, n=10; j>=i, n<=10; j--, n--)
        {
            ///printf("* ");

            printf("%d ", n);

        }

        printf("\n");
    }

    return 0;
}
