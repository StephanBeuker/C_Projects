#include <stdio.h>
#include <stdlib.h>


int main()
{

    int lenght = 4;
    //auslesen des reservierten Speichers
    int *arr = (int*) malloc(lenght * sizeof(int));
    for (int i = 0; i < lenght; i++)
    {
        printf("Malloc[%d]:%d\t",i, arr[i]); //rnd garbage values
    }
    
    printf("\n");
    //calloc 
    int *arr2 = (int*) calloc(lenght, lenght * sizeof(int));
    for (int i = 0; i < lenght; i++)
    {
        printf("Calloc[%d]:%d\t",i, arr2[i]); //all values to 0
    }

    printf("\n");
    //realloc: Reallokiert Speicher
    lenght = 6;
    arr = (int*) realloc(arr, lenght);
    for (int i = 0; i < lenght; i++)
    {
        printf("Realloc[%d]:%d\t",i, arr[i]); //rnd garbage values
    }

    return EXIT_SUCCESS;
}