/* Name: spellNum.c
 * Purpose: Takes number in figure and give the spelling of number
 * Date implemented: 04-03-2017
 */

#include <stdio.h>

int main(void)
{
    int tenth, unith, number;

    printf("Enter a two-digit number: ");
    scanf("%d", &number);

    tenth = number / 10;
    unith = number - tenth * 10;

    switch(number){
        case 00: printf("Zero\n"); break;
        case 20: printf("Twenty\n"); break;
        case 30: printf("Thirty\n"); break;
        case 40: printf("Forty\n"); break;
        case 50: printf("Fifty\n"); break;
        case 60: printf("Sixty\n"); break;
        case 70: printf("Seventy\n"); break;
        case 80: printf("Eighty\n"); break;
        case 90: printf("Ninety\n"); break;
    }; 
    switch(tenth){
        case 0: common: switch(unith){ 
            case 1: printf("One\n"); break;
            case 2: printf("Two\n"); break;
            case 3: printf("Three\n"); break;
            case 4: printf("Four\n"); break;
            case 5: printf("Five\n"); break;
            case 6: printf("Six\n"); break;
            case 7: printf("Seven\n"); break;
            case 8: printf("Eight\n"); break;
            case 9: printf("Nine\n"); break;
        }; break;
        case 1: switch(unith){
            case 0: printf("Ten\n"); break;
            case 1: printf("Eleven\n"); break;
            case 2: printf("Tweve\n"); break;
            case 3: printf("Thirteen\n"); break;
            case 4: printf("Fourteen\n"); break;
            case 5: printf("Fiveteen\n"); break;
            case 6: printf("Sixteen\n"); break;
            case 7: printf("Seventeen\n"); break;
            case 8: printf("Eighteen\n"); break;
            case 9: printf("Nineteen\n"); break;
        }; break;
        case 2: printf("Twenty-");
            goto common; break;
        case 3: printf("thirty-");
            goto common; break;
        case 4: printf("fourty-");
            goto common; break;
        case 5: printf("fifty-");
            goto common; break;
        case 6: printf("sixty-");
            goto common; break;
        case 7: printf("seventy-");
            goto common; break;
        case 8: printf("eighty-");
            goto common; break;
        case 9: printf("ninety-");
            goto common; break;
    }
    return 0;
}