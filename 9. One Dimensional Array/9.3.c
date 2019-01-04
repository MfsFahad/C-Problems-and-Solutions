//9.3. Write a program that read an array and display average

#include <stdio.h>

int main()
{
    int i, x, sum=0;

    float avg;

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

    avg = sum / (float)x;

    printf("Average = %.2f\n", avg);

    return 0;
}
