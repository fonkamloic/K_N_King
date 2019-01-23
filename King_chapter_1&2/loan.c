/* Name: loan.c
 * Purpose: Use to calculate the remaining balance on a loan.
 * Date implemented: 28-02-2017.
 */

 #include <stdio.h>

 int main(void)
 {
     float loan, rate, payment;
     int number;

     printf("Enter amount of loan: ");
     scanf("%f", &loan);
     printf("Enter interest rate: ");
     scanf("%f", &rate);
     printf("Enter monthly payment: ");
     scanf("%f", &payment);
     try: printf("Enter the number of payment: ");
     scanf("%d", &number);
     
     
     switch(number){
        case 1: loan = (loan * (rate / 100.0) / 12.0) + loan;  //calculate the the amount left ever month
                printf("Balance remaining after first payment: $%.2f\n", loan - payment);
                break;

        case 2: loan = (loan * (rate / 100.0) / 12.0) + loan;  //calculate the the amount left ever month
                printf("Balance remaining after first payment: $%.2f\n", loan - payment);
                loan -= payment;
                loan = (loan * (rate / 100.0) / 12.0) + loan;
                printf("Balance ramaining after second payment: $%.2f\n", loan - payment);
                break;

        case 3: loan = (loan * (rate / 100.0) / 12.0) + loan;  //calculate the the amount left ever month
                printf("Balance remaining after first payment: $%.2f\n", loan - payment);
                loan -= payment;
                loan = (loan * (rate / 100.0) / 12.0) + loan;
                printf("Balance ramaining after second payment: $%.2f\n", loan - payment);
                loan -= payment;
                loan = (loan * (rate / 100.0) / 12.0) + loan;   // calculate the anount left ever month
                printf("Balance remaining after third payment: $%.2f\n", loan - payment);
                break;
        default: printf("Number of payment from 1 to 3\n");
                 goto try;
                 break;
     }
     return 0;            
 }
