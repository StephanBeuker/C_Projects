#include <stdio.h>
#include <stdlib.h>
#include "functionsBib.h"
#define LENGTH 10

int main(){

    int array1[LENGTH] = {3,5,8,56,345,2,789,3,5};
    int min_array1 = calcMinArray(array1, LENGTH);
    int max_array1 = calcMaxArray(array1, LENGTH);
    float mean_array1 = calcMeanArray(array1, LENGTH);

    printf("Das kleinste Wert im Array lautet: %d\n", min_array1);
    printf("Das groesste Wert im Array lautet: %d\n", max_array1);
    printf("Das Durchschnittswert des Arrays lautet: %.2f\n", mean_array1);
   
    return EXIT_SUCCESS;
}

