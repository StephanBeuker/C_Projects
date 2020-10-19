#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "FunctionsBib.h"

// Call by Value:
// Local copy of the input !!!value!!!
float add(float z_func){
    printf("Add: 0x%x\n", &z_func);  //0xffffcc3c
    z_func +=3.0f;
    return z_func;
}

// Call by reference:
// Input is the argument variable(bzw die Speicheradresse)!
void sub(float* z_func){
    printf("Sub: 0x%x\n", z_func);  //0xffffcc3c
    *z_func = *z_func - 3.0f;
}

int main(){
    
    float z_main = 1.0f;
    printf("Main: 0x%x\n", &z_main);  //0xffffcc10

    //Call by Value
    z_main = add(z_main);
    printf("Main Val.: %f\n", z_main);

    //Call by Reference
    sub(&z_main);
    printf("Main Val.: %f\n", z_main);


    return EXIT_SUCCESS;
}


