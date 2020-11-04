#include<stdio.h>

// immer Klammern setzen!
#define ADD(a,b) ((a) + (b))

int main() {

    int rechnung = ADD(1,3) * ADD(2,4);

    printf("Ergebnis: %d\n",rechnung);


    return 0;
}
