#include <stdio.h>

void Average(int ar[], int size, int *result)
{
        int i, sum = 0;

        for(i=0; i<size; i++)
        {
                sum = sum + ar[i];
        }

        *result = sum / size;
}

int main()
{
        int n;

        printf("Give size:\n");

        scanf("%d", &n);

        int fahad[n];
        int i;

        for(i = 0; i < n; i++)
        {
                scanf("%d", &fahad[i]);
        }

        int avg;

        Average(fahad, n, &avg);

        printf("Average: %d", avg);

        return 0;
}
