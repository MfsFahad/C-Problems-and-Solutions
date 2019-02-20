//14.25. Write a function that gets an array and returns minimum

#include <stdio.h>

int Min(int ar[], int size)
{
        int i, min;

        min = ar[0];

        for(i=0; i<size; i++)
        {
                if (ar[i] < min)
                {
                    min  = ar[i];
                }
        }

        return min;
}

int main()
{
        int n, i;

        printf("Give the size of an array:\n");

        scanf("%d", &n);

        int ar[n];

        printf("Give the elements of an array:\n");

        for(i=0; i<n; i++)
        {
                scanf("%d", &ar[i]);
        }

        int min = Min(ar, n);

        printf("The minimum is: %d", min);

        return 0;
}

