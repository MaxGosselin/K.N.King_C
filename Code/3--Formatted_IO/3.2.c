/* Chapt 3 exercises */

#include<stdio.h>

int main(void)
{

/*
 * Write calls of printf that display a float variable x 
 */
    float x = 1337.1337;

/* in the following formats :
 *
 * (a) Exponential notation; left justified in a field of size 8; one digit
 * after the decimal point. */

    printf("|%-8.1e|\n", x);

/* (b) Exp; right justified in a field of size 10; six DADP. */

    printf("|%10.6e|\n", x);

/* (c) Fixed decimal point notation; left justified in FoS 8; 0 DADP. */

    printf("|%-8.0f|\n", x);

/* (d) Fixed decimal; right justified in FoS 6; 0 DADP. */

    printf("|%6.0f|\n", x);

    return 0;
}

