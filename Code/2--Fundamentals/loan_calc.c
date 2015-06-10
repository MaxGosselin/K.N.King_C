/* Chpt 2 Projects */

#include <stdio.h>

int main(void)
{
    float amount, interest, payment, bal;

    printf("Enter amount of loan: ");
    scanf("%f", &amount);

    printf("Enter the interest rate: ");
    scanf("%f", &interest);
    interest = interest / 100.00f;

    printf("Enter the monthly payment: ");
    scanf("%f", &payment);

    printf("\n\n");

    bal = (amount * (1.00f + (interest / 12.00f))) - payment;
    printf("Balance after first payment: %.2f\n", bal);

    bal = (bal * (1.00f + (interest / 12.00f))) - payment;
    printf("Balance after second payment: %.2f\n", bal);

    bal = (bal * (1.00f + (interest / 12.00f))) - payment;
    printf("Balance after third payment: %.2f\n", bal);

    return 0;
}

