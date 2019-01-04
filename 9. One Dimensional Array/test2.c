#include <stdio.h>

int main()
{
    int i, n, target;

    printf("Give size: ");

    scanf("%d", &n);

    int a[n];

    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Give target: ");

    scanf("%d", &target);

    for(i=0; i<n; i++)
    {
        if(a[i] == target)
        {
            printf("Found at a[%d]\n", i);
            break;
        }
        else
        {
            printf("Not Found\n");
        }
    }

    return 0;
}
