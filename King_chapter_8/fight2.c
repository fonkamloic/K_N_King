/* Name: fight2.c
 * Purpose: Takes depature time of fights in 24-hour and displays departure and arrival time in 12-hour time
 * Date modified: 17-03-2017
 */

#include <stdio.h>

#define NUMFIGHT 8

int main(void)
{
    int departure_time[NUMFIGHT * 2] ={8, 9, 11, 12, 14, 15, 19, 21, 0, 43, 19, 47, 0, 45, 0, 45}, time, optimal_time;
    int arrival_time[NUMFIGHT * 2] = {10, 11, 13, 15, 16, 17, 21, 23, 16, 52, 31, 0, 8, 55, 20, 58} , hour, munite;
    int i = 0, index;
    char pm = 'A';

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &munite);

    time = hour * 60 + munite;

    optimal_time = departure_time[i] * 60 + departure_time[NUMFIGHT + i];
    for(; i < NUMFIGHT; i++)
    {
        if(time > optimal_time && time < (arrival_time[i] * 60 + arrival_time[NUMFIGHT + i]))
            {
                index = i + 1;
                break;
            }
    }    

    //check for pm or am time
    if(time >= 720)
        {
            pm = 'P';
        }
    printf("Closest departure time is %d:%.2d %cM, arriving at %d:%.2d %cM\n",(departure_time[index] < 13 ? departure_time[index] : departure_time[index] - 12), departure_time[NUMFIGHT + index], pm, (arrival_time[index] < 13 ? arrival_time[index] : arrival_time[index] - 12) , arrival_time[NUMFIGHT + index], (arrival_time[index] < 13 ? 'A' : 'P'));

    return 0;
}