//9.5. Write a program that read an array and display minimum

#include <stdio.h>

int main()
{
    int i, n, min = 999999;

    printf("Give size: ");

    scanf("%d", &n);

    int a[n];

    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<n; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
        }
    }

    printf("Min: %d\n", min);

    return 0;
}
