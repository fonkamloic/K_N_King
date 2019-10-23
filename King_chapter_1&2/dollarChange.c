/* Name: dollarChange.c 
 * Purpose: calculates the mininum amount of bills for a costumers change
 * Date Implemented: 26-02-2017
 */

#include <stdio.h> 

#define twenty$bill 20
#define ten$bill 10 
#define five$bill 5
#define one$bill 1
 
int main(void)
{
    int amount, bill$20, bill$10, bill$5, bill$1;
    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    bill$20 = amount / twenty$bill;
    amount -= twenty$bill * bill$20;
    bill$10 = amount / ten$bill;
    amount -= ten$bill * bill$10;
    bill$5 = amount / five$bill;
    amount -= five$bill * bill$5;
    bill$1 = amount;

    printf(" $20 bills: %d\n $10 bills: %d\n $5 bills: %d\n $1 bills: %d\n", bill$20, bill$10, bill$5 , bill$1);
    return 0;
}

