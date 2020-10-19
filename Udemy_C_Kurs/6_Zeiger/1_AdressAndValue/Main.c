//Standardbibliotheken
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//HeaderDateien
#include "FunctionsBib.h"

int main(){
    
    int a = 2;

    // &: Speicheradresse einer Variable
      
    printf("Variable a hat den Wert: %d\n", a);     //2 (Referenzierung)
    printf("Variable a hat die Speicheradresse: 0x%x\n", &a);   //0xffffcc3c
    
    //Datentyp int* = Datentyp *pointer_b = Zeiger
    
    int* pointer_b = &a;
    printf("Der Pointer b zeigt auf die SPeicheradresse: 0x%x\n", pointer_b); //ffffcc3c
    printf("Der Pointer b zeigt auf den Wert: %x\n", *pointer_b); //2 (Dereferenzierung)
    printf("Der pointer_b hat die Speicheradresse: 0x%x\n", &pointer_b);   //0xffffcc30
    

    return EXIT_SUCCESS;
}


