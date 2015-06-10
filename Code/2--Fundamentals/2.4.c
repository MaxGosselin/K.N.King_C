#include <stdio.h>

/* Write a program that declares a bunch of stuff but never initializes it then
 * print it all */
int main(void)
{
    int a, b, c, d;
    float e, f;

    printf("begin: \n");
    printf("%d\n%d\n%d\n%d\n", a, b, c, d);
    printf("%f\n%f\n", e, f);
    printf("\nend: \n");
}


// Interesting.
