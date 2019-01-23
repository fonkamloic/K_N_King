/* Name: givex.c 
 * Purpose: evaluated polynomial using input from user
 * Date implemented: 26-02-2017
 */

 #include <stdio.h>

 int main(void)
 {
     float x, polynomial; 
     printf(" Enter a value of x to solve the folowing polynomial: 3x^5 + 2x^4 - 5x^3 - x^2 - 7x - 6\n Enter the value of X: ");
     scanf("%f", &x);
     polynomial = ((((3 * x +2) * x - 5) * x - 1) * x + 7) * x - 6;
     printf( "Your answer is: %.2f\n", polynomial);
     return 0;
 }