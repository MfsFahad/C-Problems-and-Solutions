//11.1. Write a program that read and display read and display a 2D array

#include <stdio.h>

int main()
{
    int i, j, row, col;

    printf("Give row size: ");

    scanf("%d", &row);

    printf("Give column size: ");

    scanf("%d", &col);

    int a[row][col];

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("a[%d][%d] = %d\n", i, j, a[i][j]);
        }
    }

    printf("\n\n");

    for(i=0; i<row; i++)
    {
        printf("\t");
        for(j=0; j<col; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
