#include<stdio.h>

// so nicht! Punkt vor Strich-Probleme!
//#define MULT(a,b) (a * b)

// immer Klammern setzen!
#define MULT(a,b) ((a) * (b))

int main() {

    int rechnung = MULT(1 + 2, 5 + 1);

    printf("Ergebnis: %d\n",rechnung);


    return 0;
}
