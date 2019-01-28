/* Name: sum2.c
 * Purpose: Sums a series of numbers (using double variable)
 * Date Implemented: 07-03-2017
 */

#include <stdio.h>

int main(void)
{
    double n, sum = 0;

    printf("This program sums a series of floats.\n");

    printf("Enter floats (0 to terminate) : ");
    scanf("%lf", &n);
    while(n != 0)
    {
        sum += n;
        scanf("%lf", &n);
    }
    printf("The sum is: %lf\n", sum);

    return 0;
}