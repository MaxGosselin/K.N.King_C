/* Chapt 3 Programming Projects */

#include<stdio.h>

int main(void)
{
    int item, month, day, year;
    float price;

    printf("Enter item number : ");
    scanf(" %d", &item);

    printf("Enter item price : ");
    scanf(" %f", &price);

    printf("Enter pruchase date (mm/dd/yyyy): ");
    scanf("%d / %d / %d", &month, &day, &year);

    printf("Item\tUnit\tPurchase\n"
            "\tPrice\tDate\n"
            "%d\t$  %4.2f\t%2.2d/%2.2d/%4.4d\n", item, price, month, day, year);

    return 0;
}

