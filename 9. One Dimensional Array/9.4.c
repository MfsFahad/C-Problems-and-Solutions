//9.4. Write a program that read an array and display maximum

#include <stdio.h>

int main()
{
    int i, n, max = -999999;

    printf("Give size: ");

    scanf("%d", &n);

    int a[n];

    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<n; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }

    printf("Max: %d\n", max);

    return 0;
}
