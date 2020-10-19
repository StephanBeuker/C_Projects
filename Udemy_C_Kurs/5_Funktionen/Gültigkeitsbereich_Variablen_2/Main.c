
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//#include "FunctionsBib.h"

//In der Function wird intern eine lokale Kopie der Variable a_main erstellt
void func(int a_func){    
    
    printf("%d\n", a_func);

}

int main(){
    int i;
    for (i = 0; i < 5; i++)
    {
        //something
    }
    printf("%d\n", i); //FEHLER, nur in der Schleife verfügbar
                        //->vorher ausserhalb deklarieren, nicht doppelt Deklarieren

    int a_main = 3;
    func(a_main);

    return EXIT_SUCCESS;
}


