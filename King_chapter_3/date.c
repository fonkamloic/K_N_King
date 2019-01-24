/* Name: date.c
 * Purpose: displays date given by user
 * Date implemented: 28-02-2017
 */

 #include <stdio.h> 

 int main(void)
 {
     int day, month, year;  

     printf("Enter a date (mm/dd/yyyy) : ");
     scanf("%d/%d/%d", &day , &month , &year);
 
     printf("You entered the date %d%.2d%d\n", year, month, day);

     return 0;
 }