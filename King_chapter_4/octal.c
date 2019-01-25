/* Name: octal.c
 * Purpose: converts integers to octal
 * Date implemented: 02-03-2017
 */

#include <stdio.h> 

#define OCTAL 8

int main(void)
{
    int decimalNum, firstD, secondD, thirdD, forthD, fithD;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &decimalNum);

    fithD = decimalNum % OCTAL;
    forthD = (decimalNum / OCTAL) % OCTAL;
    thirdD = (decimalNum / (OCTAL * OCTAL)) % OCTAL;
    secondD = (decimalNum / (OCTAL * OCTAL * OCTAL)) % OCTAL;
    firstD = (decimalNum / (OCTAL * OCTAL * OCTAL * OCTAL)) % OCTAL;

    printf("In octal, your number is: %d%d%d%d%d\n", firstD, secondD, thirdD, forthD, fithD);

    return 0;
}