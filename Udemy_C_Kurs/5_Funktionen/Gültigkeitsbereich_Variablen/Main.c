
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//#include "FunctionsBib.h"
//Gültigkeitsbereich = Variable Scop!
//Welche der Variablen a,b,c ist wo im Code "Sichtbar"?

int a = 3;  //globale Variable, überall verwendbar ab hier. Safety-Risk!

void func(){    //Man "called" eine function!
    int b = 2;  //local Variable!
    printf("(FUNC) a = %d\n", a);
    printf("(FUNC) b = %d\n", b);
    printf("(FUNC) b = %d\n", c;   //FEHLER!
    if (1)
    {
        int d = 0;  //nur innerhalb ddes If-Blocks; rein ja, raus nein!
    }
    printf("(FUNC) d = %d\n", d;   //FEHLER!
    

}

int main(){
    
    int c = 1;
    printf("(MAIN) a = %d\n", a);
    func();
    printf("(FUNC) a = %d\n", b);   //FEHLER!

    return EXIT_SUCCESS;
}


