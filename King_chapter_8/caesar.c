/* Name: caesar.c
 * Purpose: Encrypts a plain text by shifting letters a certain amount k.
 * Date Implemented: 18-04-2017
 */ 

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int key, ch;
    if(argc != 2)
    {
        printf("USAGE: ./caesar (encryption_key)\n");
        return 1;
    }
    key = atoi(argv[1]);

    printf("Enter message to be encrypted: ");
    ch = getchar();

    printf("Encrypted message: ");
    while( ch != '\n')
    {
        //check and encrypt letter if upper or lower case
        if(isalpha(ch))
        {
            if(isupper(ch))
                printf("%c", ((ch - 'A') + key) % 26 + 'A');
            else 
                printf("%c", ((ch - 'a') + key) % 26 + 'a');
        }

        //prints out other symbol unchanged.
        else
            printf("%c", ch);
        ch = getchar();
    }
    printf("\n");

}