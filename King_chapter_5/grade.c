/* Name: grade.c
 * Purpose: Converts numerical grades to letter grades
 * Date implemented: 04-03-2017
 */

#include <stdio.h>

int main(void)
{
    int grade, tenth ;

    printf("Enter numerical grade: ");
    scanf("%d", &grade);

    tenth = grade / 10;

    printf("Letter grade: ");
    switch(tenth){
        case 10: case 9: printf("A\n"); break;
        case 8: printf("B\n"); break;
        case 7: printf("C\n"); break;
        case 6: printf("D\n"); break;
        case 5: case 4: case 3: case 2: case 1: case 0: 
            printf("F\n"); break;
        default: printf("The numerical grade you inputed is invalid (range 0-100)\n"); 
            return 1; break;
    }
    return 0;
}