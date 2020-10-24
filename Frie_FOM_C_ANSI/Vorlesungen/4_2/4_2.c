#include <stdio.h>
#include <stdlib.h>
#include "4_2.h"
//nicht mehrere Dinge in einer Funktion machen !!
int main(){

    int a = eingabeZahl();  //Gui und Daten trennen, Daten und Verarbeitung trennen 
    int b = eingabeZahl();  //Berechne Umfang ist ein punkt, print eine andere ,möglichst splitten

    vergleiche(a,b);

    return EXIT_SUCCESS;
}


