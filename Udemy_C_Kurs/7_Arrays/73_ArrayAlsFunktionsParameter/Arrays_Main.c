#include <stdio.h>
#include <stdlib.h>
#include "functionsBib.h"

int main(){

    int v[10] = {1,2,3,4,5,6,7,8,9,10};
    float mean_v = calcMeanArray(v, 10);
    printf("Mean: %f", mean_v);
   
    return EXIT_SUCCESS;
}