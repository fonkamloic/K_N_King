/* Name: broker.c
 * Purpose: Calculates a broker's commission
 * Date Implemented: 03-03-2017
 */
  
#include <stdio.h>

int main(void)
{
    float price, rivalCommission, commission, value;
    int shares;

    printf("Enter number of shares and price per share (share/$price): ");
    scanf("%d/$%f", &shares, &price);

    if(shares < 2000)
        rivalCommission = 33.00f + 0.03f * shares;
    else if(shares > 2000)
        rivalCommission = 33.00f + 0.02f * shares;

    value = shares * price;
    if(value < 2500.00f)
        commission = 30.00f + 0.017 * value;
    else if(value < 6250.00f)
        commission = 56.00f + 0.0066f * value;
    else if(value < 20000.00f)
        commission = 76.00f + 0.0034f * value;
    else if(value < 50000.00f)
        commission = 100.00f + 0.0022f * value;
    else if(value < 500000.00f)
        commission = 155.00f + 0.0011f * value;
    else 
        commission = 255.00f + 0.0009f * value;

    if(commission < 39.00f)
        commission = 39.00f;

    printf("Commission: $%.2f\nRival Commission: $%.2f\n", commission, rivalCommission);

    return 0;
}