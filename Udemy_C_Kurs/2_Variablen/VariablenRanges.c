#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
  
    float a = 1.0;
    double b = 1.0;
    
    unsigned int c = 1;
    int d = 1;
    char e = 1;
    unsigned char f = 1;
    short g = 1;

    //sizeof-Funktion zur Bestimmung der Größe die die Variable im Speicher benötigt:
        //Alles auskommentieren: markieren ctrl+k+c
    // printf("Var a float: %d byte \n", sizeof a);
    // printf("Var b double: %d byte \n", sizeof b);
    // printf("Var c unsigned int: %d byte \n", sizeof c);
    // printf("Var d int: %d byte \n", sizeof d);
    // printf("Var e char: %d byte \n", sizeof e);
    // printf("Var f unsigned char: %d byte \n", sizeof f);
    // printf("Var g short: %d byte \n", sizeof g);  

    printf("Ranges fuer Int: %d, %d\n", INT_MIN, INT_MAX);
    printf("Ranges fuer Float: %E, %E\n", FLT_MIN, FLT_MAX);
                                //%E-Notation = wissenschaftlich


    return 0;
}