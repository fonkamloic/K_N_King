/* Name: countdigit.c
 * Purpose: count the number of digits in a number
 * Date Implemented: 02-03-2017
 */

#include <stdio.h>

int main(void)
{
    int number, digits;
    printf("Enter a number: ");
    scanf("%d", &number);

    if(number > 999 && number <= 9999)
        digits = 4;
    else if(number > 99 && number <= 999)
        digits = 3;
    else if(number > 9 && number <= 99)
        digits = 2;
    else if(number > 0 && number < 9)
        digits = 1;
    else 
    {
        printf("Enter a minimum of one digit number or maximum of 4 digits number\n");
        return 1;
    }
    printf("The number %d has %d digits\n", number, digits);
    
    return 0;
}