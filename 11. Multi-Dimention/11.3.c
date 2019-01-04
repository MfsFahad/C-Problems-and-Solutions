//11.1. Write a program that read and display read and display a 2D array

#include <stdio.h>

int main()
{
    int i, j, row1, row2, col1, col2;

    printf("Give row1 size: ");

    scanf("%d", &row1);

    printf("Give column1 size: ");

    scanf("%d", &col1);

    printf("Give row2 size: ");

    scanf("%d", &row2);

    printf("Give column2 size: ");

    scanf("%d", &col2);

    int a[row1][col1], b[row2][col2];

    int c[row1][col1];

    for(i=0; i<row1; i++)
    {
        for(j=0; j<col1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }


    for(i=0; i<row2; i++)
    {
        for(j=0; j<col2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    if(row1 == row2 && col1 == col2)
    {
        for(i=0; i<row1; i++)
        {
            for(j=0; j<col1; j++)
            {
                c[i][j] = a[i][j] + b[i][j];
            }
        }


        printf("\n\n");

        for(i=0; i<row1; i++)
        {
            printf("\t");  /// for every row

            for(j=0; j<col1; j++)
            {
                printf("%d ", c[i][j]);
            }

            printf("\n");
        }
    }
    else
    {
        printf("Addition not possible\n");
    }



    return 0;
}

