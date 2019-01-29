/* Name: names2.c
 * Purpose: Take a first name and last name from user and displays the last name and the first initial.
 * Date modified: 15-04-2017
 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char lastName[20];
    char firstName, other;

    printf("Enter a first and last name: ");

    //gets the initial of firstname
    firstName = toupper(getchar());

    //do-while loop skips all other letters of the firstname
    do
    {
         other = getchar();
    }while(other != ' ');

    //capitalizes firstletter of second name and put in array with other letters
    other = toupper(getchar());
    int i = 0;

    //puts other letters in array while printing at the same time
    printf("You entered the name: ");
    while(other != '\n')
    {
        lastName[i] = other;
        other = getchar();
        printf("%c",lastName[i]);
    }
    printf(", %c.\n", firstName);

    return 0;
}