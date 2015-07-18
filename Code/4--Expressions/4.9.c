/* Chapt 4 exercises */

#include<stdio.h>

int main(void)
{
    printf("Show the output of the following, i, j, k, are ints: \n");
    int i, j, k;

    printf("(a) i=7, j=8;  i *= j + 1, I predict 63. \n");
    i = 7; j = 8;
    i *= j + 1;
    printf("%d \n", i);

    printf("(b) i = j = k = 1; i += j +=k, i is assigned i+ (j + k) and j is assigned j+k\n");
    i = j = k = 1;
    i += j += k;
    printf("%d %d %d\n", i, j, k);

    printf("(c) Predict -1 -1 3\n"); // double neg, LOL, so young, so green
    i = 1; j = 2; k = 3; 
    i -= j -= k;
    printf("%d %d %d\n", i, j, k);

    printf("(d) Predict 0 0 0\n");
    i = 2; j = 1; k = 0;
    i *= j *= k;
    printf("%d %d %d\n", i, j, k);



}

/* Maxime Gosselin Sat Jul 18 14:58:25 EDT 2015*/
