//14.24. Write a function that gets an array and returns maximum

#include <stdio.h>

int Max(int ar[], int size)
{
        int i, max;

        max = ar[0];

        for(i=0; i<size; i++)
        {
                if (ar[i] > max)
                {
                    max  = ar[i];
                }
        }

        return max;
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

        int max = Max(ar, n);

        printf("The maximum is: %d", max);

        return 0;
}
