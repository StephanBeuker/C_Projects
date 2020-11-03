#include <stdio.h>
#include <stdlib.h>
#include "functionsBib.h"

//Return of a pointer Array
int *createArray(unsigned int length, int value){
 
    int *arr;
    arr = (int*)malloc(length * sizeof(int));
    printf("Pointer-arr: 0x%x\n", arr);     //0x3c0 ->Zeigen beide auf Adresse im Heap
    printf("Pointer-arr: 0x%x\n", &arr);    //0xffffcbf0 ->eigene Speicheradresse vom Pointer
    printf("Pointer-arr: %d\n", *arr);      //Wert undefined, da hier noch nicht festgelegt

    for (int i = 0; i < length; i++)
    {
        arr[i] = value;
    }
    printf("Pointer-arr: %d\n", *arr);      //Wert = 1
    return arr;
}

int main(){

    unsigned int length = 3;

   
    int *array = createArray(length, 1);
    printf("Pointer-Array: 0x%x\n", array);      //0x3c0 ->Zeigen beide auf Adresse im Heap
    printf("Pointer-Array: 0x%x\n", &array);     //0xffffcc30 ->eigene Speicheradresse vom Pointer
    printf("Pointer-Array: %d\n", *array);       //Wert = 1

for (int i = 0; i < length; i++)
{
    printf("%d\n", array[i]);
}

    

    free(array);
    array = NULL;

    return EXIT_SUCCESS;
}
