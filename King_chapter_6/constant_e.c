/* Name: constant_e.c
 * Purpose: approximates the value of e using a constant given by user
 * Date Implemented: 07-03-2017
 */ 

#include <stdio.h> 

//faction prototype to calculate factorial
int factorial(int a);

int main(void)
{
    float e = 1, terms, n;

    printf("Enter a value n for the smallest term in the  approximate of constant e : ");
    scanf("%f", &n);

    for(int i = 1;; i++)
    {
        terms = 1.0 / (float)factorial(i);
        if(terms > n)
            e += terms;
        else
        {
            printf("e = %.4f\n", e);
            return 0;
        }
    }
}


int factorial(int a)
{
    if( a == 0 || a == 1)     //base case to exit when satisfied
        return 1;
    else
        return a * factorial(a - 1);  //recursive case to compute factorial
}