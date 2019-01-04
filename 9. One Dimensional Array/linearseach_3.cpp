//9.8. Write a program that searches any number from an array

#include <stdio.h>

#include <stdbool.h>

int main()
{
    int i, n, target, position;
    bool found = false;

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
            found = true;

            position = i;

            break;
        }
    }

    if(found == true)
    {
        printf("Found at a[%d]\n", position);
    }
    else
    {
        printf("Not found\n");
    }

    return 0;
}

