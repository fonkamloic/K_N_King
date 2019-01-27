/* Name: calender.c
 * Purpose: displays a one-month calender
 * Date Implemented: 06-03-2017
 */

#include <stdio.h>

#define DAYS 7

int main(void)
{
    int numDays, startDay, day = 0;

    do
    {
        printf("Enter number of days in month: ");
        scanf("%d", &numDays);
    }while(numDays < 28 || numDays > 31);
    do
    {
        printf("Enter starting day of the week (1=Sun, 7=sat): ");
        scanf("%d", &startDay);
    }while(startDay < 1 || startDay > DAYS);
    
    int i = 1;
    for(; i < startDay ; i++)
        {
            printf("   ");    //prints space before start of first day
        }
    for(;i < numDays + startDay; i++)
    {
        if(i % (DAYS + 1) == 0) //print new line after printing seven days
        {
            printf("\n");
            ++day;
        }
        else
            printf("%2d ", ++day);
    }
    printf("\n");
}