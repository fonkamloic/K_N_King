/* Name: hour.c
 * Purpose: converts 24-hours time into 12-hours time
 * Date Implemented: 02-03-2017
 */

#include <stdio.h>

int main(void)
{
    int hour, munite;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &munite);

    if(hour > 0  && hour <= 12)
    {
        printf("Equivalent 12-hour time: %d:%d AM\n", hour, munite % 60);
    }
    else if(hour > 12 && hour <= 23)
    {
        printf("Equivalent 12-hour time: %d:%d PM\n", hour % 12, munite % 60);
    }
    else if(hour == 0 || hour == 24)
        printf("Equivalent 12-hour time: %d:%d PM\n", (hour + 12) % 24, munite % 60);
    return 0;
}