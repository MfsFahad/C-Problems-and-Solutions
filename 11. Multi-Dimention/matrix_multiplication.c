#include <stdio.h>

int main()
{
        int a_row, a_col, b_row, b_col;

        printf("input a matrix row and column size\n");
        scanf("%d %d", &a_row, &a_col);
        
        printf("input b matrix row and column size\n");
        scanf("%d %d", &b_row, &b_col);

        int a[a_row][a_col], b[b_row][b_col], c[a_row][b_col];

        printf("Input the A matrix\n");

        int i, j, k, sum;

        for( i = 0; i < a_row; i++)
        {
                
                for( j = 0; j < a_col; j++)
                {
                        scanf("%d", &a[i][j]);
                }
                
        }

        printf("Input the B matrix\n");

        for( i = 0; i < a_row; i++)
        {
                
                for( j = 0; j < a_col; j++)
                {
                        scanf("%d", &b[i][j]);
                }
                
        }


        if( a_col == b_row)
        {
                for( i = 0; i < a_row; i++)
                {
                        
                        for( j = 0; j < b_col; j++)
                        {
                                sum = 0;

                                for(k = 0; k < a_col ; k++)
                                {
                                        sum = sum + a[i][k] * b[k][j];
                                }

                                c[i][j] = sum;
                        }
                        
                }


                for( i = 0; i < a_row; i++)
                {
                        printf("\t");
                        
                        for( j = 0; j < a_col; j++)
                        {
                                printf("%d ", c[i][j]);
                        }

                        printf("\n");
                        
                }



        }
        else
        {
                printf("Multipication not possible\n");
        }



        
        


        return 0;
}
