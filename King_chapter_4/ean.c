/* Name: ean.c
 * Purpose: use to compute the check digit of the European Article Number
 * Date implemented: 02-03-2017
 */

#include <stdio.h>

#define EANSIZE 12

int main(void)
{
    int eanNum[EANSIZE],firstSum = 0, secondSum = 0, total;
    printf("Enter the first 12 digits of your EAN: ");
    for(int i = 0; i < EANSIZE ; i++)
    {
        if(i % 2 == 0)
        {
            scanf("%1d", &eanNum[i]);
            secondSum += eanNum[i];
        }
        else
        {
            scanf("%1d", &eanNum[i]);
            firstSum += eanNum[i];
        }
    }
    total = (3 * firstSum) + secondSum;

    printf("Check digit: %d\n", (9 - ((total - 1) % 10)));
    return 0;
}