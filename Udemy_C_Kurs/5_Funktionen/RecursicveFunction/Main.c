//Standardbibliotheken
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//HeaderDateien
#include "FunctionsBib.h"

//Berechnung n-Fakultät: 
//  1!  =                   1 = 1   
//  2!  =               2 * 1 = 2   = 2 * 1!
//  3!  =           3 * 2 * 1 = 6   = 3 * 2!
//  4!  =       4 * 3 * 2 * 1 = 24  = 4 * 3!
//  5!  =   5 * 4 * 3 * 2 * 1 = 120 = 5 * 4!
//  5!  =   5 * 4! = 5 * 4 * 3! = 5 * 4 * 3 * 2! = 5 * 4 * 3 * 2 * 1

//Rekursion: zur Berechnung von 5! gehe zurück zu 1! und rechne das Ergebnis *2, dann *3, dann *4, dann *5.
//Dafür kann man sich rekursive Funktion definieren( das ist das Einsatzgebiet); zB. auch Fibonacci-Folge.
// Sortieralgorythmen verwenden auch rekursive Funktionen.
int main(){
    
    unsigned int a = getNumberFromUser();
    unsigned int a_fac = factorial(a);
    printf("Die Fakultät von %d! = %d", a, a_fac);


    return EXIT_SUCCESS;
}


