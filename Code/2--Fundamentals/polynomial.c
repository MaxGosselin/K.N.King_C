/* Chpt 2 Projects 
 *
 * Promt for x then display the value of the polynomial:
 *      3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6
 */

#include <stdio.h>

int main(void) 
{
    int x, result;

    printf("Input x value: \n");
    scanf("%d", &x);

    result = (3 * expo(x, 5)) + (2 * expo(x, 4)) - (5 * expo(x, 3)) 
        - (expo(x, 2)) + (7 * x) - 6;
    printf("Result : %d\n", result);
 
    return 0;
}

int expo(x, e)
{
    int i, res = x;

    for (i=0; i<e; i++) {
        res = res * x;
    }
    
    return res;
}
