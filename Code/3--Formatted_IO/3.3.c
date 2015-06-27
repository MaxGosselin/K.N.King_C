/* Chapt 3 exercises */

#include<stdio.h>

int main(void)
{

    int x, y, z; 
    float f;
/* For each of the following pairs of scanf format string, indicate whether or
 * not the two strings are equivalent. If they're not, show how they can be 
 * distinguished.
 *
 * (a) "%d" vs. " %d"   */

    //Discovery! You can escape "%" by using %%
    printf("\"%%d\" vs. \" %%d\". \n");

    printf("This pair is similar; enter any combination\n");
    printf("of whitespace and a unique int to see for yourself:\n");

    scanf("%d", &x);
    printf("--------\n");
    printf(">>>%d\n", x);
    printf("--------\nAgain:");
    scanf(" %d", &x);
    printf("--------\n");
    printf(">>>%d\n", x);
    printf("--------\n");

/* (b) "%d-%d-%d" vs. "%d -%d -%d" */

    printf("\"%%d-%%d-%%d\" vs. \"%%d -%%d -%%d\". \n");

    printf("This pair is different: feed \"1-2-3\" to both and see why:\n");

    scanf("%d-%d-%d", &x, &y, &z);
    printf("--------\n");
    printf(">>>x:%d y:%d z:%d \n", x, y, z);
    printf("--------\nAgain:");
    scanf("%d -%d -%d", &x, &y, &z);
    printf("--------\n");
    printf(">>>x:%d y:%d z:%d \n", x);
    printf("--------\n");


    printf("The final two pairs are again examples of whitespace being handled\n"
            "nicely by scanf resulting in equivaltent format strings.\n");

}

