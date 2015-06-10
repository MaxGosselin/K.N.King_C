/* Chpt 2 Projects */

#include <stdio.h>

int main(void)
{
    int x, result;

    printf("Enter a value for x: \n");
    scanf("%d", &x);

    result = ((((((((((3 * x) + 2) * x) - 5) * x) - 1) * x) + 7) * x) - 6);
    printf("Result : %d\n", result);
    
    return 0;
}


