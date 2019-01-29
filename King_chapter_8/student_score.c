/* Name: student_score.c
 * Purpose: Computes student and class average scores.
 * Date Implemented: 16-03-2017
 */

#include <stdio.h>

#define NUM_ROW 5
#define NUM_COL 5
#define NUM_QUIZ 5

int main(void)
{
    int matrix[NUM_ROW][NUM_COL], i = 0, j, num = 0, sum_array[NUM_ROW + NUM_COL];
    int sum_row = 0, high_low[10] = {0};

    for(int k = 0; k < ((int)sizeof(high_low) / sizeof(high_low[0])); k++)
    {
        if(k < 5)
            high_low[k] = 0;
        else
            high_low[k] = 99;
    }

    for(j = 0; j < NUM_ROW ; j++ )
    {
        printf("Enter student %d five quiz grades: ", j + 1);
        while(i < 5)
        {
            scanf("%d", &num);
             
            //simultaneously sums the row while putting them in 5X5 array
            sum_row += num; 

            // Finds the highest and lowest student score in a quiz
            if(high_low[i] < num)
                high_low[i] = num;
            if(high_low[NUM_COL + i] > num)
                high_low[NUM_COL + i] = num;

            //simultaneously sums the column while putting them in 5X5 array
            sum_array[NUM_ROW + i] += num; 

            //inserting element in 5X5 array
            matrix[j][i++] = num;
        }
        sum_array[j] = sum_row;
        sum_row = 0;
        i = 0;
    }
    printf("\n");

    //print the 5X5 array
    for(int k = 0; k < 5; k++)
    {
        for(int z = 0; z < 5; z++)
            {
                printf("%d ", matrix[k][z]);
            }
            printf("\n");
    }
    printf("\n");
 
    //Prints sum of rows and columns
    printf("Students grades: \n");
    int student = 1;
    for(int v = 0; v < NUM_ROW; v++)
    {
            printf("Student %d total score is: %.2d \nAverage score\t\t: %.2d\n",student++, sum_array[v], sum_array[v] / NUM_QUIZ );
    }
    printf("\n");

    printf("Class grades: \n");
    for(int v = NUM_COL, count = 0; v < NUM_COL + NUM_ROW; v++)
    {
        printf("Average score of quiz %d : %.2d\n",count + 1, sum_array[count] / NUM_QUIZ);
        printf("High score: %.2d\nLow score: %.2d\n",high_low[count], high_low[NUM_QUIZ + count]);
        count++;
    }
    printf("\n");

    return 0;
}