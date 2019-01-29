/* Name: b1ff.c
 * Purpose: Translate message into newbie B1FF speak
 * Date Implemented: 16-03-2017
 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char chr;

    printf("Enter message: ");
    scanf(" %1c", &chr);

    printf("In B1FF-speak: ");
    while(chr != '\n')
    {
        chr = toupper(chr);
        switch(chr)
        {
            case 'A': putchar('4'); break;
            case 'B': putchar('8'); break;
            case 'E': putchar('3'); break;
            case 'I': putchar('1'); break;
            case 'O': putchar('0'); break;
            case 'S': putchar('5'); break;
            default: putchar(chr); break;
        }
        chr = getchar();
    }
    printf("!!!!!!!!!!\n");

    return 0;
}