
#include <stdio.h>


int main(){

    int punkte[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    // Positionszeiger, Setzen auf 6.Element
    int *pos = punkte + 5;

    // Index berechnen
    int index = pos - punkte;

    printf("Index: %d\n", index);
    printf("Wert pos / punkte[index]: %d\n", punkte[index]);


	return 0;
}

