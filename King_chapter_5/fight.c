/* Name: fight.c
 * Purpose: Takes depature time of fights in 24-hours and display departure and arrival time in 12-hours time
 * Date implemented: 04-03-2017
 */

#include <stdio.h>

int main(void)
{
    int time, hour, munite;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &munite);

    time = hour * 60 + munite;
    
    if( time >= 8 * 60 && time < 9 * 60 + 43)
        printf("Closest departure time is 8:00 a.m. , arriving at 10:16 a.m.\n");
    else if(time >= 9 * 60 + 43 && time < 11 * 60 + 19 )
        printf("Closest departure time is 9:43 a.m. , arriving at 11:52 a.m.\n");
    else if(time >= 11 * 60 + 19 && time < 12 * 60 + 47)
        printf("Closest departure time is 11:19 a.m. , arriving at 1:31 p.m.\n");
    else if(time >= 12 * 60 + 47 && time < 14 * 60 )
        printf("Closest departure time is 12:47 p.m. , arriving at 3:00 p.m.\n");
    else if(time >= 14 * 60 && time < 15 * 60 + 45)
        printf("Closest departure time is 2:00 p.m. , arriving at 4:03 p.m.\n");
    else if(time >= 15 * 60 + 45 && time < 19 * 60)
        printf("Closest departure time is 3:45 p.m. , arriving at 5:55 p.m.\n");
    else if(time >= 19 * 60 && time < 21 * 60 + 45 )
        printf("Closest departure time is 7:00 p.m. , arriving at 9:20 p.m.\n");
    else if(time >= 21 * 60 + 45 && time <= 23 * 60 + 58)
        printf("Closest departure time is 9:45 p.m. , arriving at 11:58 p.m.\n");

    return 0;
}