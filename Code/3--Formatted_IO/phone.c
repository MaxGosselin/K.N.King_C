/* Chapt 3 programming projects */

#include<stdio.h>

int main(void)
{
    int area, begin, end;

    printf("Enter a phone number [(xxx) xxx-xxxx] : ");
    scanf("(%d) %d-%d", &area, &begin, &end);

    printf("You entered %d.%d.%d\n", area, begin, end);

    return 0;
}

