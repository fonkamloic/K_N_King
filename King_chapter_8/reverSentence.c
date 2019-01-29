/* Name: reverSentence.c
 * Purpose: reverses the words in a sentence
 * Date Implemented: 15-04-2017
 */

#include <stdio.h>

#define LONGESTWORD 20
#define MESSAGESIZE 100

int main(void)
{
    //last use to store the last character in case of a period, question mark or exclamation mark.
    char message[MESSAGESIZE], word, last;

    //check use to varify if the sentence to reverse ends with period, question mark or exclamation mark.
    int end, check = 0;

    printf("Enter a sentence: ");
    word = getchar();

//wcount use to count the lenght of each word enter by user
    long long wcount = 0;

    int i = 0;

    while(word != '\n')
    {
        message[i++] = word;
        if(word == ' ')
            wcount *= LONGESTWORD;
        else
            wcount++;
        word = getchar();
    }
    end = i - 1;
    last = message[end];
    int count = end;

    //checks if sentence ends with a period, question mark or exclamation sign
    if(last == '.' || last == '?' || last == '!')
    {
        count = end - 1;
        check = 1;
        wcount -= 1;
    }
    

    //prints sentence in reverse other
    printf("Reversal of sentence: ");
    while(count >= 0)
    {
        int j = (count - ((wcount % LONGESTWORD) - 1));
        for(; j <= count ; j++)
        {
            printf("%c", message[j]);

            //prints space character to between each word
            if(j == count && (count - 2) != 0)
                printf(" ");
        }
        count -= (wcount % LONGESTWORD) + 1;
        wcount = wcount / LONGESTWORD;
    }

    //prints period, question mark or exclamation sign if any
    if(check == 1)
    {
        printf("%c", last);
    }
    printf("\n");

    return 0;
}