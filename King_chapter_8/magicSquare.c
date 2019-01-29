/* Name: magicSquare.c
 * Purpose: Creates a magic square of a specified size.
 * Date Implemented: 18-04-2017
 */

#include <stdio.h>
 
int main(void)
{
    int size;
    printf("Enter size of magic square: ");
    scanf("%d", &size);

    if(size % 2 == 0)
    {
        printf("The size must be an odd number between 1 and 99.\n");
        return 1;
    }

    int array[99][99] = {0};
    for(int i = size * size, j = size / 2, count = 1; count <= size * size; count++)
    {

        //puts magic numbers in empty array elements
        if(array[i % size][j % size] == 0)
        {
            array[i % size][j % size] = count;
            i--;
            j++;
        }

        //checks if a particular array element is already occupied the print bellow;
        else 
        {
            i += 2;
            j--;
            array[i % size][j % size] = count;
            i--;
            j++;
        }
    }

   for(int i = 0; i < size; i++)
   {
       for(int j = 0; j < size; j++)
       {
           printf("%2d  ", array[i][j]);
       }
       printf("\n");
   }

   return 0;
}