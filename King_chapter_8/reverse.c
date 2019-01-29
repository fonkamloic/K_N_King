/* Name: reverse.c
 * Purpose: Reverses a series of numbers
 * Date Implemented: 16-03-2017
 */

#include <stdio.h>

#define N 10

int main(void)
{
    int a[N], i; 
    int n = (int)(sizeof(a) / sizeof(a[0]));

    printf("Enter %d numbers: ", N);
    for(i = 0; i < n ; i++)
        scanf("%d", &a[i]);

    printf("In reverse order:");
    for(i = n - 1; i >= 0; i-- )
        printf(" %d", a[i]);
    printf("\n");

    return 0;
}