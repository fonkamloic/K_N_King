/* Name: scrableValue2.c
 * Purpose: Sums the face values of letter in a word
 * Date Modified: 21-03-2017
 */

#include <stdio.h>
#include <ctype.h>

#define ALPHAINDEX 65

int main(void)
{
    int sum = 0;
    char word;
    int value[] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
    printf("Enter a word: ");
    word = getchar();

    while(word != '\n')
    {
        word = toupper(word);
        sum += value[word - ALPHAINDEX];
        word = getchar();
    }
    printf("Scrabble value: %d\n", sum);

    return 0;
}