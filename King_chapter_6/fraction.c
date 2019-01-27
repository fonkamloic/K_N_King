/* Name: fraction.c
 * Purpose: reduces a fraction to its simplest form
 * Date Implemented: 06-03-2017
 */

#include <stdio.h>

int main(void)
{
    int num, deno, temp, numCopy, denoCopy;

    printf("Enter a fraction: ");
    scanf("%d/%d", &num, &deno);

    numCopy = num;
    denoCopy = deno;

    while(denoCopy != 0)
    {
        temp = numCopy % denoCopy;
        numCopy = denoCopy;
        denoCopy = temp;
    }
    printf("In lowest terms: %d/%d\n",num / numCopy, deno /numCopy );

    return 0;
}