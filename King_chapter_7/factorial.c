/* Name: factorial.c
 * Purpose: Computes the factorial of a positive integer
 * Date Implemented: 14-03-2017
 */

#include <stdio.h>

int main(void)
{
    int number, sum, originalNumber;

    printf("Enter a positive integer: ");
    scanf("%i", &number);

    originalNumber = number;
    sum = number;
    for(;;)
    {
        if(number == 0 || number == 1)
        {
            printf("Factorial of %i: %i\n",originalNumber, sum);
            return 0;
        }
        number--;
        sum *= number;
    }
}