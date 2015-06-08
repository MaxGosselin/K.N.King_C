/* Computes the dimensional weight of a 12" * 10" * 8" box */

#include <stdio.h>

int main(void)
{
    int height = 8, len = 12, width = 10, vol;
    
    vol = height * len * width;

    printf("Dimensions: %d x %d x %d\n", len, width, height);
    printf("Volume (cubic inches): %d\n", vol);
    printf("Dimensional weight (pounds): %d\n", ((vol + 165) / 166));

    return 0;
}

