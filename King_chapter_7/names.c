/* Name: names.c
 * Purpose: Takes a first name and last name from user and displays
            the last name and the first initial.
 * Date Implemented: 14-03-2017
 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char firstInitial, lastName;
    int check = 0;

    printf("Enter a first and a last name: ");
    scanf(" %1c", &firstInitial);
    lastName = getchar();

    firstInitial = toupper(firstInitial);

    while(lastName != '\n')
    {
        if(lastName == ' ')
        {
            check = 1;
            lastName = getchar();
            putchar(toupper(lastName));
        }
        lastName = getchar();
        if(lastName == '\n')
             goto done;
        if(check )
        {
            putchar(lastName);
        }
        
    }
    done:printf(", %c.\n", firstInitial);

    return 0;
}