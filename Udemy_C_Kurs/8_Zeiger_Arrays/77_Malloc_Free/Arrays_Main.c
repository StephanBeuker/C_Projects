#include <stdio.h>
#include <stdlib.h>
#include "functionsBib.h"


int main(){

    unsigned int length = getNumberFromUser();
    
    int *array; //dieser Pointer liegt auf dem STACK

    //malloc = memory allocation (Speicherreservierung)
    //liegt auf dem HEAP
    array = (int*) malloc(length * sizeof(int));
        //pointertyp = int* malloc(Wieviel Byte benötigt Array?)

    for (int i = 0; i < length; i++){
        array[i] = i;
        printf("Index: %d\t", array[i]);
    }
    
    //Speicher auf dem HEAP wieder frei geben; Stack existiert noch
    free(array);
    printf("\n0x%x\n",array);   //0x58500: Nicht mehr unser Speicher!
    array = NULL;               //Pointer zeigt auf Speicheradresse 0
    printf("0x%x\n",array);     //0x0

    //Nach FREE immer Array = NULL!!

    return EXIT_SUCCESS;
}
