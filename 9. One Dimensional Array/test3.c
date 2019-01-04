#include <stdio.h>

int main()
{
    int i, n, target, flag=0, position;

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
            flag = 1;

            position = i;

            break;
        }
    }

    if(flag == 1)
    {
        printf("Found at a[%d]\n", position);
    }
    else
    {
        printf("Not found\n");
    }

    return 0;
}
