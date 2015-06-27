/* Chapt 3 Exercises: Tricky! */

#include<stdio.h>

int main(void)
{

/* Suppose we call scanf as follows: 
 *
 * (a)  scanf("%d%f%d", i, x, j)
 *
 *      if the user enters: 10.3 5 6
 *      What are the values of i, x, j, after the call?
 *
 *      prediction: i:10 x:0.3 j:5 
 */
    
    int i, j;
    float x, y;

    printf("(a) \"%%d%%f%%d\" Enter 10.3 5 6.\n");
    scanf("%d%f%d", &i, &x, &j);
    printf(">>> i:%d x:%f j:%d\n\n", i, x, j);

    
    /* Removing unread input left over from the first exercise
     * this is not pretty.
     */

    char c;
    while((c = getchar()) != '\n' && c != EOF)
        /* discard */;


/* (b)  scanf("%f%d%f", x, i, y)
 *
 *      if the input is 12.3 45.6 789?
 *
 *      prediction: x:12.3 i:45 y:0.6
 */

    printf("(b) \"%%f%%d%%f\" Enter 12.3 45.6 789. \n");
    scanf("%f%d%f", &x, &i, &y);
    printf(">>> x:%f i:%d y:%f\n\n", x, i, y);

    printf("Ooorah!\n");
    return 0;

}
