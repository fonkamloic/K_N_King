/* Name: productInfo.c
 * Purpose: It formats product information entered by user.
 * Date Implemented: 28-02-2017
 */

#include <stdio.h> 

int main(void)
{
    int item, day, month, year;
    float price;

    printf("Enter item number: ");
    scanf("%d", &item);

    printf("Enter unit price: ");
    scanf("%f", &price);

    printf("Enter purchase date (mm/dd/yyyy) : ");
    scanf("%d/%d/%d", &day, &month, &year);

    printf("Item        unit        Purchase\n            Price       Date\n%d         $  %.2f    %d/%.2d/%d\n",item, price, day, month, year );

    return 0;
}