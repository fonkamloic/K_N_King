/* Name: perfectSquare.c
 * Purpose: prints all the square between 0 and a given number n
 * Date Implemented: 06-03-2017
 */

#include <stdio.h>

int main(void)
{
    int base = 2, number, square = 0, sum;

    printf("Enter the bigest perfect square you want to see: ");
    scanf("%d", &number);

    for(int i = 0; ;i++)
    {
        sum = 0;
        for(int j = 0; j < base; j++)
        {
            sum += base;
        }
        square = sum;
        base++;
        if(i % 2 == 0)
        {
            if(square <= number)
                printf("%d\n", square);
            else
                return 0;
        }
    }
}