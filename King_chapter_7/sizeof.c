/* Name: sizeof.c
 * Purpose: prints the size of various variabe type
 * Date Implemented: 07-03-2017
 */

#include <stdio.h>

int main(void)
{
    printf("sizeof int: %zu\nsizeof short: %zu\nsizeof long: %zu\nsizeof float: %zu\nsizeof double: %zu\nsizeof lonng double: %zu\n", sizeof(int), sizeof(short), sizeof(long), sizeof(float), sizeof(double), sizeof(long double));

     return 0;
}