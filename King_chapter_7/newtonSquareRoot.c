/* Name: newtonSquareRoot.c
 * Purpose: Computes the square root of a positive floating point number 
            using newton's method.
 * Date Implemented: 14-03-2017
 */

#include <stdio.h>
#include <math.h>

int main(void)
{
    double x, y = 1;
    printf("Enter a positive number: ");
    scanf("%lf", &x);

    while(1)
    {
        if(fabs(y - (y + x/y)/2) < 0.00001 * y)
        {
            printf("Square root: %lf\n", y);
            return 0;
        }
        y = (y + x/y) / 2; 
    }
}