/* Name: reversdigit.c
 * Purpose: reverses three digit inputed by the user
 * Date implimented: 02-03-2017
 */

#include <stdio.h>

int main(void)
{
    int number, firstDigit, secondDigit, lastDigit;

    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    firstDigit = number / 100;
    secondDigit = number / 10 - firstDigit * 10;
    lastDigit = number - ((number / 10) * 10);

    printf("The reversal is %d%d%d\n",lastDigit, secondDigit, firstDigit);

    return 0;
}