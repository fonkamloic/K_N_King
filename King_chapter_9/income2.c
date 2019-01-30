/* Name: income.c
 * Purpose: Calculates the tax due of taxable income.
 * Date Modified: 20-04-2017
 */

 #include <stdio.h>

 float tax_due(float income);

 int main(void)
 {
     float income, amount;
     printf("Enter the amount of taxable income: $");
     scanf("%f", &income);

     amount = tax_due(income);

     printf("Your tax due is: $%.2f\n", amount);

    return 0; 

 }

 float tax_due(float income)
 {
     if(income <= 750)
        return  0.01f * income;
    else if(income > 750 && income <= 2250)
        return 7.50f + (0.02f * income);
    else if(income > 2250 && income <= 3750)
        return 37.50f + (0.03f * income);
    else if(income > 3750 && income <= 5250)
        return 82.50f + (0.04f * income);
    else if(income > 5250 && income <= 7000)
        return 142.50f + (0.05f * income);
    else 
        return 230.00f + (0.06f * income);
 }