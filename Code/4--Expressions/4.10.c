/* Chapt 4 exercises */

#include<stdio.h>

int main(void)
{
    printf("Show the output of the following, i, j, are ints: \n");
    int i, j;

    printf("(a) i = 6 \n j = i += i;\n");
    i = 6;
    j = i += i;
    printf("%d %d\n\n", i, j);

    printf("(b) i = 5;\n j = (i -= 2) + 1\n");
    i = 5;
    j = (i -= 2) + 1;
    printf("%d %d \n\n", i, j);

    printf("(c) i = 5;\n j = 6 + (i = 2.5)\n");
    i = 7;
    j = 6 + (i = 2.5);
    printf("%d %d \n\n", i, j);

    printf("(d) i = 2; j = 8\n j = (i = 6) + (j = 3)\n");
    i = 2; j = 8;
    j = (i = 6) + (j = 3);
    printf("%d %d \n", i, j);




}

/* Maxime Gosselin Tue Sep 18 00:00:46 EDT 2018 */
/* I'm back!*/
