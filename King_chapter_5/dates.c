/* Name: dates.c
 * Purpose: Takes two dates and displays which comes earlier in the year.
 * Date implemented: 04-03-2017
 */

#include <stdio.h>

int main(void)
{
    int check = 0, day1 = 31, month1 = 12,  year1 = 9999 , day, month, year;
    do
    {
         printf("Enter a date (mm/dd/yy) : ");
         scanf("%d/%d/%d", &month , &day, &year);

        if(day == 0 && month ==0 && year == 00)
        {
            if(check == 1) //to check if the do-while loop has been travesed even once.
                goto done;
            else
                return 1;
        }
        if( year > year1)
        {
            good: year = year1;
            month = month1;
            day = day1;
            check = 1;
        }
        else if(year == year1)
        {
            if(month > month1)
                goto good;
            else if(month == month1)
            {
                if(day > day1)
                    goto good;
            }
            else
                {
                    goodtoo: year1 = year;
                    month1 = month;
                    day1 = day; 
                    check = 1;
                }
        }
        else
            goto goodtoo;
    }while(month != 0 && day != 0 && year != 0);
    done:
    printf("The ealiest date is %d/%.2d/%.2d\n",month1, day1, year1); 
    return 0;
}