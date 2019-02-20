//14.23. Write a function that gets an array and returns average

#include <stdio.h>

double Avg(int ar[], int size)
{
        int i, sum = 0;

        double avg;

        for(i=0; i<size; i++)
        {
                sum = sum + ar[i];

                avg = (double)sum / size;
        }

        return avg;
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

        double avg = Avg(ar, n);

        printf("The average is: %.2lf", avg);

        return 0;
}
