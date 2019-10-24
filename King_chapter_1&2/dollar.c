/*Name: dollar.c
 *Porpose: Ask user to input dollar or cent and display amount plus 5% interest
 *Date implemented: 26-02-2017
 */

 #include <stdio.h>

 int main(void)
 {
     float amount;
     printf("Enter an amount :");
     scanf("%f", &amount);
     printf("With tax added: $%.2f\n", amount + (5.0 / 100.0) * amount); //print amount with tax added
     return 0;
 }