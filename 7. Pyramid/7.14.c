/*
7.14.
		1 0 1 0 1
		1 0 1 0
		1 0 1
		1 0
		1
*/

#include <stdio.h>

int main()
{
    int i, j;

    for(i=5; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            if(j%2 == 0)
            {
                printf("0 ");
            }
            else if(j%2 != 0)
            {
                printf("1 ");
            }
        }
    printf("\n");
    }

    return 0;
}

