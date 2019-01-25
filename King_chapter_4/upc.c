/* Name: upc.c
 * Purpose: calculates the check digit of a  upc number
 * Date implemented: 02-03-2017
 */

#include <stdio.h> 

#define UPCSIZE 12

int main(void)
{
    int upcNum[UPCSIZE], firstSum = 0, secondSum = 0, total, checkDigit;

    printf("Enter the  12 digits of a UPC: ");
    for(int j = 0; j < UPCSIZE; j++)
    {
        scanf("%1d", &upcNum[j]);
    }
    checkDigit = upcNum[UPCSIZE - 1];
     for(int i  = 0; i < UPCSIZE - 1; i++)
     {
         if(i % 2 == 0)
         {
             firstSum += upcNum[i];  
         }
         else
         {
             secondSum += upcNum[i];
         }
     }
     total = (3 * firstSum) + secondSum;
     
     if(checkDigit == (9 - ((total - 1) % 10)))
     {
         printf("VALID\nCheck Digit: %d\n",(9 - ((total - 1) % 10)));
     }
     else
        printf("NOT VALID\n");

     return 0;
}
