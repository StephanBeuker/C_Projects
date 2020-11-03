#include <stdio.h>
#include <stdlib.h>
#include "functionsBib.h"

#define NUM_ELEMENTS 10u

void initMyArray(float *p_array, unsigned int length){  //zum zeigen, NUM-ELEMENTS auch in der FKT sichtbar

    for (int i = 0; i < length; i++){
        p_array[i] = i;
    }
    
}

void computeMyArray(float *p_array, unsigned int length){

    for (int i = 1; i < length; i++){
        p_array[i] = p_array[i-1] + p_array[i];
    }
}

void printMyArray(float *p_array, unsigned int length){ 

    for (int i = 0; i < length; i++){
        printf("array[%d] = \t%.2f\n",i, p_array[i]);
    }
    
}

int main(){

    float my_stack_array[NUM_ELEMENTS];
    // Array as argument to a function -> decay to pointer of the first element

    initMyArray(my_stack_array, NUM_ELEMENTS);        //Ein Array, welches wir einer Funktion übergeben
        //0,1,2
    printMyArray(my_stack_array, NUM_ELEMENTS);

    printf("\n");

    computeMyArray(my_stack_array, NUM_ELEMENTS);     //"decayed" zu einem Pointer!!
        //0,1,3
    printMyArray(my_stack_array, NUM_ELEMENTS);

    return EXIT_SUCCESS;
}
