/* Name: rowcolumn.c
 * Purpose: Ask user for inputs, displays in 4 by 4 arrangement and sum it row by column by diagonal
 * Date implemented: 01-03-2017
 */

#include <stdio.h>

#define ARRAYSIZE 16
#define MATRIXSIZE 4

int main(void)
{
    int matrix[ARRAYSIZE];
     
    printf("Enter the numbers from 1 to 16 in any order: ");
    for(int i = 0; i < ARRAYSIZE; i++)
    {
        scanf("%d", &matrix[i]);
    }

    int count = 0, index = -1;
    while(count < MATRIXSIZE)
    {
        for( int j = MATRIXSIZE; j > 0; j--)
        {
            printf("%2d  ", matrix[++index]);
        }
        printf("\n");
        count++;
    }
    int column1 = 0, column2 = 0, column3 = 0, column4 = 0, row1 = 0, row2 = 0, row3 = 0, row4 = 0, diago1 = 0, diago2 = 0;

    for(int k = 0; k < 4; k++)
    {
        row1 += matrix[k];
    }
    for(int k = 4; k < 8; k++)
    {
        row2 += matrix[k];
    }
    for(int k = 8; k < 12; k++)
    {
        row3 += matrix[k];
    }
    for(int k = 12; k < 16; k++)
    {
        row4 += matrix[k];
    }
    
    for(int k = 0, c = 0; k < 4; k++)
    {
        column1 += matrix[c];
        c += 4;
    }
    for(int k = 0, c = 1; k < 4; k++)
    {
        column2 += matrix[c];
        c += 4;
    }
    for(int k = 0, c = 2; k < 4; k++)
    {
        column3 += matrix[c];
        c += 4;
    }
    for(int k = 0, c = 3; k < 4; k++)
    {
        column4 += matrix[c];
        c += 4;
    }

    for(int k = 0, c = 0; k < 4;k++)
    {
        diago1 += matrix[c];
        c += 5;
    }
    for(int k = 0, c = 3; k < 4;k++)
    {
        diago2 += matrix[c];
        c += 3;
    }

    printf("\nRow sums: %d  %d  %d  %d\nColumn sums: %d  %d  %d  %d\nDiagonal sums: %d  %d\n", row1, row2, row3, row4, column1, column2, column3, column4, diago1, diago2);

return 0;
}