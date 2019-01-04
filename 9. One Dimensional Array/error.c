#include <stdio.h>

int main()
{
    int a[3] = {0,1,5};
    int i;

    for(i=0; i<=3 ;i++)
    {
        printf("%d", a[i]);
    }

    printf("\n%d", a[8]);

    return 0;
}
