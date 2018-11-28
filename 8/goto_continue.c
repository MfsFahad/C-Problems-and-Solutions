#include <stdio.h>

int main()
{
    int i,j;

    for(i = 30; i<= 100; i++)
    {
        if(i == 40 || i == 60 || i == 80)
        {
            goto fahad;
        }
        else
        {
            printf("%d ", i);
        }

        fahad:
        j=0;  // there must be an statement after goto label in a code block
    }


    return 0;
}
