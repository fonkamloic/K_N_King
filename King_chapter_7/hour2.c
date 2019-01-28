/* Name: hour.c
 * Purpose: converts 24-hours time into 12-hours time
 * Date Implemented: 02-03-2017
 */

#include <stdio.h>
#include <ctype.h>


int main(void)
{
    int hour, munite;
    char pm, space ;

    printf("Enter a 12-hour or 24-hour time: ");
    scanf("%d:%d", &hour, &munite);
    space = getchar();

    if(space == '\n')  //ensure program doesn't keep waiting for pm or am input if it's 24-hour format.
        goto next;

    pm = getchar();
    
    next:pm = toupper(pm);
    space = toupper(space);

    if(space == '\n' || (space == ' ' && pm == '\n'))
    {
        if(hour > 0  && hour <= 12)
        {
            printf("Equivalent 12-hour time: %d:%.2d AM\n", hour, munite % 60);
        }
        else if(hour > 12 && hour <= 23)
        {
            printf("Equivalent 12-hour time: %d:%.2d PM\n", hour % 12, munite % 60);
        }
        else if(hour == 0 || hour == 24)
            printf("Equivalent 12-hour time: %d:%d PM\n", (hour + 12) % 24, munite % 60);
    }
    else
    {
        if(space == 'P' || pm == 'P')
            printf("Equivalent 24-hour time: %d:%.2d\n", hour + 12, munite % 60);
        else if(space == 'A' || pm == 'A')
            printf("Equivalent 24-hour time: %d:%.2d\n", hour, munite % 60);
    }
    return 0;
}