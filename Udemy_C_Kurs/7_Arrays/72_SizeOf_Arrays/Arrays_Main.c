#include <stdio.h>
#include <stdlib.h>
#include "functionsBib.h"

enum {rows =2, cols=2};

//compiler erwartet feste GRöße für das Array:
//keine Variablen als Größe zulässig, da veränderbar
//-> #define oder enum 
int main(){

    int M[rows][cols]={{1,0},{0,1}};

    int rows = 0;
    int cols = 0;

    cols = sizeof(M[0])/ sizeof(M[0][0]);
    printf("Rows: %d\n", cols);
    //Berechnung: Wieviele Bytes belegt die erste Zeile / Wieviele Bytes braucht ein einzelner Eintrag(=Int)

    rows = sizeof(M)/ (cols * sizeof(M[0][0]));
    printf("Cols: %d\n", rows);
    //Berechnung: Wieviele Bytes belegt das Array / Byte für Int * Anzahl Spalten

    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; i < cols; j++)
    //     {
    //         printf("Hello!\n");
    //     }
        
    // }
    
    return EXIT_SUCCESS;
}