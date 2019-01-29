/* Name: repdigit.c
 * Purpose: check numbers for repeated  digits
 * Date Implemented: 14-03-2017
 */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    
    int digit;
    long n;
    do
    {
        bool digit_seen[10] = {false};
        printf("Enter a number: ");
        scanf("%ld", &n);

        if(n == 0)
            return 0;
        while(n > 0)
        {
             digit = n % 10;
            if(digit_seen[digit])
                break;
            digit_seen[digit] = true;
            n /= 10;
        }

        if(n > 0)
            {
                printf("Repeated digit\n");
                n = 1; //prevents loop termination
            }
        else 
            {
                printf("No repeated digit\n");
                n = 1;  //prevents loop termination
            }
    }while(1);

}
