/* Name: scrabbleValue.c
 * Purpose: sums the face values of letter in a word
 * Date Implemented: 07-03-2017
 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int sum = 0;
    char word;

    printf("Enter a word: ");
    word = getchar();

    while(word != '\n')
    {
        word = toupper(word);
        switch(word)
        {
            case 'A': case 'E': case 'I': case 'L': 
            case 'N': case 'O': case 'R': case 'S': 
            case 'T': case 'U': sum += 1; break;
            case 'D': case 'G': sum += 2; break;
            case 'B': case 'C': case 'M': case 'P': sum += 3; break;
            case 'F': case 'H': case 'V': case 'W': case 'Y': sum += 4; break;
            case 'K': sum += 5; break;
            case 'J': case 'X': sum += 8; break;
            case 'Q': case 'Z': sum += 10; break;
        }
        word = getchar();
    }
    printf("Scrabble value: %d\n", sum);

    return 0;
}