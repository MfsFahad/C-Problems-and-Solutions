//9.1. Write a program that read and display an array

#include <stdio.h>

int main()
{
    int i, x;

    printf("Give the size of an array: ");

    scanf("%d", &x);

    int a[x];

    for(i=0; i<x; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<x; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}
