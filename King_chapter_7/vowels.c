/* Name: vowels.c
 * Purpose: counts vowels in a sentence
 * Date Implemented: 14-03-2017
 */

#include <stdio.h>
#include <ctype.h>

//function prototype
int isVowel(char chr);

int main(void)
{
    int totalVowel = 0;
    char chr;

    printf("Enter a sentence: ");
    chr =  getchar();
    
    while(chr != '\n')
    {
        if(isVowel(chr))
            {
                totalVowel++;
            }
        chr =getchar();
    }
    printf("Your sentence contains %d vowel(s)\n", totalVowel);

    return 0;
}

int isVowel(char chr)
{
    chr = toupper(chr);
    if(chr == 'A' || chr == 'E' || chr == 'I' || chr == 'O' || chr == 'U')
        return 1;
    else
        return 0;
}