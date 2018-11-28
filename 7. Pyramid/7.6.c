/*
7.6.
		1
		2 3
		3 4 5
		4 5 6 7
		5 6 7 8 9
*/

#include <stdio.h>

int main()
{
    int i, j, n=2;

    for(i=1; i<=5; i++)
    {
        for(j=1, n=i+1; j<=i; j++, n++)
        {
            printf("%d ",n);
        }

        printf("\n");
    }

    return 0;
}
