/* Name: telNumber.c
 * Purpose: prompts the user to enter a telephone number and displays 
 * Date implimented: 01-03-2017
 */

#include <stdio.h>

int main(void)
{
    int areaCode, firstpart, secondpart;

    printf("Enter phone number [(xxx) xxx-xxxx] : ");
    scanf("(%d) %d-%d", &areaCode, &firstpart, &secondpart);

    printf("You entered %d.%d.%d\n", areaCode, firstpart, secondpart);

    return 0;
}