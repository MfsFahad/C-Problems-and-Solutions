#include <stdio.h>

int main()
{
    int i, x;

    printf("enter the size of the array\n");

    scanf("%d", &x);

    int a[x];

    printf("Now, input the array\n");

    for(i=0; i < x; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Now, Displaying the array\n");

    for(i=0; i < x; i++)
    {
        printf("%d ",a[i]);
    }


    return 0;
}
