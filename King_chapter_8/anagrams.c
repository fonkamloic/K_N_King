/* Name: anagrams.c
 * Purpose: checks if two words entered but user are anagrams(permutations of the same letters)
 * Date Implemented: 18-04-2017
 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int letterSeen[26] = {0}, ch, sum = 0;

    printf("Enter first word: ");
    ch = getchar();
    while(ch != '\n')
    {
        if(isalpha(ch))
        {
            if(isupper(ch))
            {
                letterSeen[ch - 'A'] += 1;
            }
            letterSeen[ch - 'a'] += 1;
        }
        ch = getchar();
    }
    printf("Enter second word: ");
    ch = getchar();
    while(ch != '\n')
    {
        if(isalpha(ch))
        {
            if(isupper(ch))
            {
                letterSeen[ch - 'A'] -= 1;
            }
            letterSeen[ch - 'a'] -= 1;
        }
        ch = getchar();
    }

    for(int i = 0, n = (int)(sizeof(letterSeen) / sizeof(letterSeen[0])) ; i < n; i++)
    {
         sum = letterSeen[i];
         if(sum != 0)
            break;
    }
    if(sum == 0)
        printf("The words are anagrams\n");
    else
        printf("The words are not anagrams\n");

    return 0;
}