/* Name: gcd.c
 * Purpose: Calculates the greatest common divisor between two numbers
 * Date Implemented: 05-03-2017
 */

#include <stdio.h>

int main(void)
{
    int firstNum, secondNum, temp;

    printf("Enter two integers: ");
    scanf("%d %d", &firstNum, &secondNum);

    while(secondNum != 0)
    {
        temp = firstNum % secondNum;
        firstNum = secondNum;
        secondNum = temp;
    }
    printf("Greatest common divisor: %d\n", firstNum);
    return 0;
}