/* Name: randomWalk.c
 * Purpose: Generates a "random walk" across a 10x10 array.
 * Date Implemented: 17-03-2017
 */

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define ARRAYSIZE 10
#define ALPHAINDEX 65

int main(void)
{
    int index_row, index_col, letter, next_move , try = 0;

    char walk_ground[ARRAYSIZE][ARRAYSIZE]; 

    //initialize array to all '.'
    for(int i = 0; i < ARRAYSIZE; i++)
    {
        for(int j = 0; j < ARRAYSIZE; j++)
        {
            walk_ground[i][j] = '.';
        }
    }

    //set seed as a function of time
    srand((unsigned)time(NULL));

    index_row = rand() % ARRAYSIZE;
    index_col = rand() % ARRAYSIZE;
    letter = ALPHAINDEX;

    //moves; 0 == left, 1 == right, 2 == up, 3 == down.
    next_move = letter % 4;

    //walk letter through array
    walk_ground[index_row][index_col] = letter;
    while(letter < ALPHAINDEX + 25)
    {
        //try variable to count number  of try walks
        try = 0;

        //tryagain helps change the direction if conditions for walk is not satified
        tryagain:

        //condition to move left
        if(next_move == 0 && walk_ground[index_row][index_col + 1] == '.' && index_col < 9)
        {
            walk_ground[index_row][index_col + 1] = ++letter;
            index_col = index_col + 1;
        }

        //condition to move right
        else if(next_move == 1 && walk_ground[index_row][index_col - 1] == '.' && index_col > 0)
        {
            walk_ground[index_row][index_col - 1] = ++letter;
            index_col = index_col - 1;
        }

        //condition to move up
        else if(next_move == 2 && walk_ground[index_row - 1][index_col] == '.' && index_row > 0)
        {
            walk_ground[index_row - 1][index_col] = ++letter;
            index_row = index_row - 1;
        }

        //condition to move down
        else if(next_move == 3 && walk_ground[index_row + 1][index_col] == '.' && index_row < 9)
        {
            walk_ground[index_row + 1][index_col] = ++letter;
            index_row = index_row + 1;
        }

        //if no condition is satified next_move value is updated(can be done only 4 times)
        else if(try < 4)
        {
            next_move = (next_move + 1) % 4;
            try++;
            goto tryagain;
        } 

        //no posible route available again 
        else
            break;

        next_move = letter % 4;
    }

    //prints "random Walk" (array)
    for(int i = 0; i < ARRAYSIZE; i++)
    {
        for(int j = 0; j < ARRAYSIZE; j++)
        {
            printf("%c ", walk_ground[i][j]);
        }
        printf("\n");
    }

    return 0;
}