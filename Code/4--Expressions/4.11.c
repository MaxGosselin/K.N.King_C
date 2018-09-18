/* Chapt 4 exercises */

#include<stdio.h>

int main(void)
{
    printf("Show the output of the following, assuming {i, j, k} are ints: \n");
    int i, j, k;

    printf("(a) i = 1\n");
    i = 1;
    printf("Prediction:\n0\n2\n-----\n");
    printf("%d \n", i++ -1);
    printf("%d\n\n", i);

    printf("(b) i = 10; j = 5\n");
    i = 10;
    j = 5;
    printf("Prediction:\n4\n11 6\n-----\n");
    printf("%d \n", i++ - ++j);
    printf("%d %d\n\n", i, j);

    printf("(c) i = 7; j = 8\n");
    i = 7; j = 8;
    printf("Prediction:\n0\n8 7\n-----\n");
    printf("%d \n", i++ - --j);
    printf("%d %d \n\n", i, j);

    printf("(d) i = 3; j = 4; k = 5\n");
    i = 3; j = 4; k = 5;
    printf("Prediction:\n-5\n4 5 5\n-----\n");
    printf("%d \n", i++ - j++ - --k);
    printf("%d %d %d\n\n", i, j, k);

}

/* Maxime Gosselin Tue Sep 18 00:29:30 EDT 2018 */
/* I'm back!*/
