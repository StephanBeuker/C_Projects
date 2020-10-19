#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    int b_binaer = 0b100111000; //0b sagt dem compiler, dass binäre Zahl kommt. Kann nicht jeder Compiler.
    int b_dezimal = 312; //100111000
    int b_hex = 0x138;

    printf("Die Zahl in Hex: 0x%x\n", b_hex);       //Hexagonal
    printf("Die Zahl in Binär: 0b%d\n", b_binaer);     //Binär:
    printf("Die Zahl in Dezimal: %d\n", b_dezimal);   //Dezimal: d

    return 0;
} 