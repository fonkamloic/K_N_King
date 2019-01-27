/* Name: largeNum.c
 * Purpose: Displays the largest number in a series of number
 * Date implemented: 05-03-2017
 */

#include <stdio.h>

int main(void)
{
    float number, large = 0;
    do
    {
        printf("Enter a number: ");
        scanf("%f", &number);
        if(number > large)
            large = number;
    }while(number > 0);

    printf("The largest number entered was %.2f\n", large);
    return 0;
}