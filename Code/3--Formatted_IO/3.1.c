/*
 *
 * Exercise 1:
 *
 *      What output do the following calls of printf produce?
 *
 */


#include <stdio.h>

int main(void)
{
    printf("\n I predict :\n    86,1040\n");
    printf("%6d,%4d\n", 86, 1040);

    printf("I predict:\n 3.02530e+01\n");
    printf("%12.5e\n", 30.253);

    printf("I predict:\n83.1620\n");
    printf("%.4f\n", 83.162);

    printf("I predict:\n 9.9e-8\n");
    printf("%-6.2g\n", .0000009979);

    printf("\n\nHuh! Very interesting...");
    
    return 0;
}

