
#include <stdio.h>


int main(){

    int punkte[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    // Positionszeiger
    int *pos;

    // Position auf erstes Element setzen (punkte[0])
    pos = punkte;
    // alternativ mit dem Adressoperator & und der Indexierung auf das erste Element
    //pos = &punkte[0];
    printf("(punkte[0]) Wert pos: %d\n", *pos);

    // Position auf naechstes Element setzen (punkte[1])
    pos++;
    printf("(punkte[1]) Wert pos: %d\n", *pos);

    // Position auf 5. Element setzen (punkte[4])
    pos = punkte + 4;
    printf("(punkte[4]) Wert pos: %d\n", *pos);

    // Position auf vorheriges Element setzen (punkte[3])
    pos--;
    printf("(punkte[3]) Wert pos: %d\n", *pos);


	return 0;
}

