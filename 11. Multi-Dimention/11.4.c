// 11.4. Write a program that substract two matrices

#include <stdio.h>

int main()
{
    int a_row, a_col, b_row, b_col;

    printf("Give row size of A matrix: ");

    scanf("%d", &a_row);

    printf("Give column size of A matrix: ");

    scanf("%d", &a_col);

    printf("Give row size of B matrix: ");

    scanf("%d", &b_row);

    printf("Give column size of B matrix: ");

    scanf("%d", &b_col);

    int a[a_row][a_col], b[b_row][b_col], i, j;

    printf("Input A matrix: \n");
    
    for(i=0; i<=a_row; i++)
    {
        for(j=0; j<=a_col; j++)
        {
            scanf("%d", &a[row][col]);
        }
    }
    for(i=0; i<=a_row; i++)
    {
        for(j=0; j<=a_col; j++)
        {
            scanf("%d", &a[row][col]);
        }
    }

    printf("Input B matrix: \n");
    
    for(i=0; i<=b_row; i++)
    {
        for(j=0; j<=b_col; j++)
        {
            scanf("%d", &b[row][col]);
        }
    }
    for(i=0; i<=b_row; i++)
    {
        for(j=0; j<=b_col; j++)
        {
            scanf("%d", &b[row][col]);
        }
    }

    
}

