#include <stdio.h>
#include <stdlib.h>
//Bibliothek selber schreiben
//Wenn man sehr viele Funktionen verwendet, kann man Bibliotheken nutzen,
//  dabei kommt die Deklaration und die Functionsbib und 
//  die Definition in die HEader-Datei!
//Weiterhin müssen wir auch hier dem Compiler sagen wo unsere Funktionen definiert sind:
#include "FunctionsBib.h"


int main(){

    int i = getNumberFromUser();;
    printEvenOrOdd(i);    
 
    return EXIT_SUCCESS;
}


