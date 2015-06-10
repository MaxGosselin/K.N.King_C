/* Chpt 2 Projects */

#include <stdio.h>

int main(void)
{
    int total, curr, twenties, tens, fives, toonies, loonies;

    printf("Enter a $CAD amount: ");
    scanf("%d", &total);

    curr = total;
    printf("%d", curr);

    twenties = curr / 20;
    curr = curr - (20 * twenties);

    printf("%d", twenties);
    tens = curr / 10;
    curr = curr - (10 * tens);

    printf("%d", curr);
    fives = curr / 5;
    curr = curr - (5 * fives);

    printf("%d", curr);
    toonies = curr / 2;
    curr = curr - (2 * toonies);

    printf("%d", curr);
    loonies = curr;

    printf("Your optimum change combination is: \n");
    printf("Twenties : %d\n", twenties);
    printf("Tens : %d\n", tens);
    printf("Fives : %d\n", fives);
    printf("Toonies : %d\n", toonies);
    printf("Loonies : %d\n", loonies);
}
