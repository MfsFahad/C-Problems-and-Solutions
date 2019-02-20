//14.22. Write a function that gets an array and returns sum

#include <stdio.h>

int Sum(int ar[], int size)
{
        int i, sum = 0;

        for(i=0; i<size; i++)
        {
                sum = sum + ar[i];
        }

        return sum;
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

        int sum = Sum(ar, n);

        printf("The summation is: %d", sum);

        return 0;
}
