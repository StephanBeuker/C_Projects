//Standardbibliotheken
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//HeaderDateien
#include "FunctionsBib.h"

int main(){
    
    int a = 2;
    int b = 2;

    // &: Speicheradresse einer Variable
    //Wert:
    printf("Variable a hat den Wert: ");
    printf("//Speicheradresse,Angabe in Hexadezimal:\t%d\n", a);
    printf("Variable b hat den Wert: ");
    printf("\t%d\n", b);
    printf("\n");

    //SizeOf-Funktion: Größe einer Variable
    printf("Variable a belegt %d Bytes im Speicher\n", sizeof(a));
    printf("Variable b belegt %d Bytes im Speicher\n", sizeof(b));
    printf("\n");

    //Speicheradresse,Angabe in Hexadezimal: Startspeicherblock
    printf("Variable a hat die Speicheradresse:\n");
    printf("Dezimal:\t\t%d\n", &a);         
    printf("Hesadezimal:\t\t0x%x\n", &a);   //0xffffcc3c
    printf("\nVariable b hat die Speicheradresse:\n");
    printf("Dezimal:\t\t%d\n", &b);
    printf("Hesadezimal:\t\t0x%x\n", &b);   //0xffffcc38

    return EXIT_SUCCESS;
}


