//9.2. Write a program that read an array and display sum

#include <stdio.h>

int main()
{
    int i, x, sum=0;

    printf("Give the size of an array: ");

    scanf("%d", &x);

    int a[x];

    for(i=0; i<x; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<x; i++)
    {
        sum = sum + a[i];
    }

    printf("Summation = %d\n", sum);

    return 0;
}
