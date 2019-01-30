/* Name: selectionSort.c
 * Purpose: sorts an array of integers
 * Date Implemented: 19-04-2017
 */

#include <stdio.h>

//prototype
void selection_sort(int n, int array[n]);

#define ARRAYSIZE 99

int main(void)
{
    int num, array[ARRAYSIZE], size = 0;
    char ch = '\0';
    printf("Enter integers to be sorted separated by commas: ");
    scanf(" %d,", &num);
    while(ch != '\n' )
    {
        array[size++] = num;
        scanf("%d", &num);
        scanf("%c", &ch);
    }
    array[size++] = num;
    num = size;

    selection_sort(size, array);

    printf("This is your sorted array: ");
    for(int i = 0; i < num - 1; i++)
    { 
        printf("%d, ", array[i]);
    }
    printf("%d\n", array[num - 1]);

    return 0;
}

void selection_sort(int n, int array[n])
{
    //base case. If array has only one element it is sorted
    if( n == 1);
    
    //Recusive case; sort the unsorted portion of the array recursively.
    else 
    {
        int i = 0, largest = array[n - 1], j = 0, tmp;
        for(; i < n; i++)
        {
            if(array[i] > largest)
            {
                largest = array[i];
                j = i;
            }
        }
        
        //checks if element is already in sorted position
        if(largest != array[n -1])
        {
            tmp = array[n - 1];
            array[n - 1] = largest;
            array[j] = tmp;
        }
        n--;
        selection_sort(n, array);
    }
}