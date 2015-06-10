/* Chpt 2 Projects */

#include <stdio.h>
#define TAX 0.05f

int main(void)
{
    float sub, total;

    printf("Enter an amount: ");
    scanf("%f", &sub);
    total = sub * (1.0f + TAX);
    printf("After tax: %f", total);
}

