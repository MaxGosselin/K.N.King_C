/* Chapt 3 programming project. */

/* Write a program that breaks down an ISBN entered by the user. */

#include<stdio.h>

int main(void)
{
    int gsi, gi, pc, item, check;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gsi, &gi, &pc, &item, &check);

    printf("GSI prefix: %d\n", gsi);
    printf("Group identifier : %d\n", gi);
    printf("Publisher code : %d\n", pc);
    printf("Item number : %d\n", item);
    printf("Check digit : %d\n", check);

    return 0;
}

