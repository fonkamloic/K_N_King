/* Name: averageWord.c
 * Purpose: counts the average number of word in a sentence
 * Date Implemented: 14-03-2017
 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int word = 0, space = 1, check = 0;
    char chr;

    printf("Enter a sentence: ");
    scanf(" %c", &chr);

    while(chr != '\n')
    {
        if(isalpha(chr))
        {
            word++;
            check = 1;
        }
        if(isblank(chr) && check == 1) // check condition make sure word(or space before word) is counted only ones.
        {
            space++;
            check = 0;
        }
        chr = getchar();
    }
    printf("Average word lenght: %.1f\n",((float)word / space));

    return 0;
}