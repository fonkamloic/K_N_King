/* Name: phoneNum.c
 * Purpose: convert alphabetical phone number into numerical form
 * Date Implemented: 07-03-2017
 */

#include <stdio.h>

int main(void)
{
    char alphaNumber;

    printf("Enter phone number: ");
    alphaNumber = getchar();
    while(alphaNumber != '\n')
    {
        if(alphaNumber == 'A' || alphaNumber == 'B' || alphaNumber == 'C')
            printf("%d", 2);
        else if(alphaNumber == 'D' || alphaNumber == 'E' || alphaNumber == 'F')
            printf("%d", 3);
        else if(alphaNumber == 'G' || alphaNumber == 'H' || alphaNumber == 'I')
            printf("%d", 4);
        else if(alphaNumber == 'J' || alphaNumber == 'K' || alphaNumber == 'L')
            printf("%d", 5);
        else if(alphaNumber == 'M' || alphaNumber == 'N' || alphaNumber == 'O')
            printf("%d", 6);
        else if(alphaNumber == 'P' || alphaNumber == 'R' || alphaNumber == 'S')
            printf("%d", 7);
        else if(alphaNumber == 'T' || alphaNumber == 'U' || alphaNumber == 'V')
            printf("%d", 8);
        else if(alphaNumber == 'W' || alphaNumber == 'X' || alphaNumber == 'Y')
            printf("%d", 9);
        else
            printf("%c", alphaNumber);
        alphaNumber = getchar();
    }
    printf("\n");

    return 0;
}