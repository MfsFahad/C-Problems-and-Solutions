/*
7.7.
		0
		1 0
		0 1 0
		1 0 1 0
		0 1 0 1 0
*/

#include <stdio.h>

int main()
{
    int i, j, n;

    for(i=1; i<=5; i++)
    {
        for(j=1; j<=i; j++)
        {
            n = i + j;

            if(n%2 == 0)
            {
                printf("0 ");
            }
            else if(n%2 == 1)
            {
                printf("1 ");
            }
        }

    printf("\n");

    }

    return 0;
}
