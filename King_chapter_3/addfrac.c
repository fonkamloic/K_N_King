/* Name: addfrac.c
 * Purpose: adds two fraction.
 * Date implimented: 02-03-2017
 */

#include <stdio.h>

int main(void)
{
    int num1, num2, deno1, deno2, resultNum, resultDeno;

    printf("Enter two fractions separated by a plus sign: ");
    scanf("%d/%d+%d/%d", &num1, &deno1, &num2, &deno2);

    resultNum = num1 * deno2 + num2 * deno1;
    resultDeno = deno1 * deno2;

    printf("The sum is %d/%d\n", resultNum, resultDeno);

    return 0;
}