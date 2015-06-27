/* Chapt 3 Programming Projects */

#include<stdio.h>

int main(void)
{
    int month, day, year;

    printf("Ender a date (mm/dd/yyyy): ");
    scanf("%d / %d / %d", &month, &day, &year);

    printf("You entered the date: %4.4d%2.2d%2.2d\n", year, month, day);

    return 0;
}


