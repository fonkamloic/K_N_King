/* Name: largestInt.c
 * Purpose: Finds the largest and smallest Int among 4 ints
 * Date implemented: 03-03-2017
 */

#include <stdio.h>

int main(void)
{
    int one, two, three, four;
    printf("Enter four integers: ");
    scanf("%d %d %d %d", &one, &two, &three, &four);
    int  largest1 = three, smallest1 = four;
                    //THIS CODE
    largest1 = one > two ? one : two;
    largest1 = largest1 > three ? largest1 : three;
    largest1 = largest1 > four ? largest1 : four;

    smallest1 = one < two ? one : two;
    smallest1 = smallest1 < three ? smallest1 : three;
    smallest1 = smallest1 < four ? smallest1 : four;
    
                    //OR THIS ONE "CHOOSE"
    int largest2 = one, smallest2 = two;
    if(one < two)
    {
        smallest2 = one;
        largest2 = two;
    }
    if(three < four)
    {
        largest1 = four;
        smallest1 = three;
    }
    if(largest2 > largest1)
        largest1 = largest2;
    if(smallest2 < smallest1)
        smallest1 = smallest2;

    printf("largest: %d\nSmallest: %d\n", largest1, smallest1);

    return 0;
 
}