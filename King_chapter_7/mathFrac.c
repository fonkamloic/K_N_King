/* Name: mathFrac.c
 * Purpose: preforms basic math operations on fractions
 * Date Implemented: 08-03-2017
 */

#include <stdio.h>

int main(void)
{
     int num1, num2, deno1, deno2, resultNum, resultDeno, temp, gcd, remainde;
     char operator ;

    printf("Enter two fractions separated by an operation sign (+, -, * or /): ");
    scanf("%d/%d %c %d/%d",&num1, &deno1, &operator, &num2, &deno2);

    resultDeno = deno1 * deno2;
    //select which operation to apply
    switch(operator)
    {
        case '+':  resultNum = (num1 * deno2) + (num2 * deno1); break;
        case '-':  resultNum = (num1 * deno2) - (num2 * deno1); break;
        case '*':  resultNum = (num1 * num2); break;
        case '/':  resultNum = (num1 * deno2); resultDeno = deno1 * num2; break;
        default: printf("Invalid operator\n"); return 1;  
    }
    //To calculate the GCD of the fraction
    gcd = resultNum;
    remainde = resultDeno;
    while(remainde != 0)
    {
        temp = gcd % remainde;
        gcd = remainde;
        remainde = temp;
    }
    printf("The result is %d/%d\n", resultNum / gcd, resultDeno / gcd);

    return 0;
}