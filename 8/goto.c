#include <stdio.h>

int main()
{
    int a = 50, b = 0, i;

    i = b; /// initialization

    fahad:

    printf("%d ", i);

    i = i+5; /// increment

    if(i <= a)
    {
        goto fahad;
    }

    return 0;
}
