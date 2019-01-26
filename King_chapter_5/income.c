/* Name: income.c
 * Purpose: Calculates the tax due of taxable income.
 * Date implemented: 03-03-2017
 */

#include <stdio.h>

int main(void)
{
    float income, amount;
    printf("Enter the amount of taxable income: $");
    scanf("%f", &income);

    if(income <= 750)
        amount = 0.01f * income;
    else if(income > 750 && income <= 2250)
        amount = 7.50f + (0.02f * income);
    else if(income > 2250 && income <= 3750)
        amount = 37.50f + (0.03f * income);
    else if(income > 3750 && income <= 5250)
        amount = 82.50f + (0.04f * income);
    else if(income > 5250 && income <= 7000)
        amount = 142.50f + (0.05f * income);
    else if(income > 7000)
        amount = 230.00f + (0.06f * income);

    printf("Your tax due is: $%.2f\n", amount);

    return 0; 
}