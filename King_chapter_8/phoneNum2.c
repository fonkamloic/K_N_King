/* Name: phoneNum2.c
 * Purpose: Convert alphabetical phone number into numerical for_each_minimal
 * Date Implememted: 21-03-2017
 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char alphaNumber[15], chr;
   int n = (int)sizeof(alphaNumber) / sizeof(alphaNumber[0]);
   int inext, j = 0;

    printf("Enter phone number: ");
    scanf(" %1c", &alphaNumber[j]);
    chr = alphaNumber[j];

    for(j = 1; j < n ; j++)
    {
        chr = getchar();
        alphaNumber[j] = toupper(chr);

        //to note where to array of elt ends
        inext = j + 1;
    }
    alphaNumber[inext] = '\0';
    
    int i = 0;
    printf("In numeric form: ");
    while(i < n)
    {
        if(alphaNumber[i] == 'A' || alphaNumber[i] == 'B' || alphaNumber[i] == 'C')
            printf("%d", 2);
        else if(alphaNumber[i] == 'D' || alphaNumber[i] == 'E' || alphaNumber[i] == 'F')
            printf("%d", 3);
        else if(alphaNumber[i] == 'G' || alphaNumber[i] == 'H' || alphaNumber[i] == 'I')
            printf("%d", 4);
        else if(alphaNumber[i] == 'J' || alphaNumber[i] == 'K' || alphaNumber[i] == 'L')
            printf("%d", 5);
        else if(alphaNumber[i] == 'M' || alphaNumber[i] == 'N' || alphaNumber[i] == 'O')
            printf("%d", 6);
        else if(alphaNumber[i] == 'P' || alphaNumber[i] == 'R' || alphaNumber[i] == 'S')
            printf("%d", 7);
        else if(alphaNumber[i] == 'T' || alphaNumber[i] == 'U' || alphaNumber[i] == 'V')
            printf("%d", 8);
        else if(alphaNumber[i] == 'W' || alphaNumber[i] == 'X' || alphaNumber[i] == 'Y')
            printf("%d", 9);
        else
            printf("%c", alphaNumber[i]);
        i++;
    }
    printf("\n");

    return 0;
}