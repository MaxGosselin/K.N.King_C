/* Chapt 4 exercises */

#include<stdio.h>

int main(void)
{
    printf("I'll prove by counterexample that this method doesn't work\n"
            "Let the total be 11\n");

    int total = 11;
    int sub = total -1;
    int remainder = sub % 10;
    int result = 9 - remainder;

    printf("\nAttempting the first method we get: \n");
    printf("Subtotal is %d, remainder is %d, and the result is %d.\n", sub, \
            remainder, result);

    remainder = total % 10;
    result = 9 - remainder;

    printf("\nAttempting the second method we get: \n");
    printf("Remainder is %d, and the result is %d.\n", remainder, result);
            
    return 0;
}


/* Maxime Gosselin Fri Jul 17 07:22:09 CEST 2015*/
