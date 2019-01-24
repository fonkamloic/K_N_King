/* Name: isbm.c
 * Purpose: separate verious part of a book ismb
 * Date implimented: 01-03-2017
 */

#include <stdio.h>

int main(void)
{
    int prefix, identifier, pCode, itemNumber, checkDigit;

    printf("Enter ISBM: ");
    scanf("%d-%d-%d-%d-%d", &prefix, &identifier, &pCode, &itemNumber, &checkDigit); 

    printf("GS1 prefix: %d\nGroup identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d\n", prefix, identifier, pCode, itemNumber, checkDigit);
     
    return 0;
}