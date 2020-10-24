#include <stdio.h>
#include <stdlib.h>
#include "4_2.h"
//nicht mhrere Dinge nciht in einer Funktion machen !!
int main(){

    int a = eingabeZahl();  //Gui und Daten trennen, Daten und verabrbeiteunf trennen 
    int b = eingabeZahl();  //berechne umfang ist ein punkt, print eine andere ,möglichst splitten

    vergleiche(a,b);

    return EXIT_SUCCESS;
}


