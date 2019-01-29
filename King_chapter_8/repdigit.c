/* Name: repdigit.c
 * Purpose: prints out digits and their occurrences in a number.
 * Date Implemented: 14-03-2017
 */

#include <stdio.h>

int main(void)
{
    short digit_seen[10] = {0};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

     while(n > 0)
    {
        digit = n % 10;
        if(digit_seen[digit])
        {
            digit_seen[digit]++;
            goto done;
        }
        digit_seen[digit] = 1;
        done:n /= 10;
    }

    if(n >= 0)
    {
        printf("Digits:\t     ");
        for(int i = 0; i < 10; i++)
        {
           printf("%3d", i);   
        }  
        printf("\nOccurrences: ");  
        for(int i = 0; i < 10; i++)
        {
            printf("%3d", digit_seen[i]);
        }
        printf("\n");
    }

    return 0;
}
