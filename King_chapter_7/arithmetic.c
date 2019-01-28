/* Name: arithmetic.c
 * Purpose: Evaluate basic arithmetic operations.
 * Date Implemented: 14-03-2017
 */

#include <stdio.h>

int main(void)
{
    float total, cur;
    char operator;

    printf("Enter an expression: ");
    scanf("%f", &total);
    operator = getchar();

    while(operator != '\n')
    {
        if(operator == '+')
        {
            scanf("%f", &cur);
            total += cur;
        }
        else if(operator == '-')
        {
            scanf("%f", &cur);
            total -= cur;
        }
        else if(operator == '*')
        {
            scanf("%f", &cur);
            total *= cur;
        }
        else if(operator == '/')
        {
            scanf("%f", &cur);
            total /= cur;
        }

        operator = getchar();
    }
    printf("Value of expression: %.1f\n", total);

    return 0;
}