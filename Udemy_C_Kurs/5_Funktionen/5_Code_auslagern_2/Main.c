//Standardbibliotheken
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//HeaderDateien
#include "FunctionsBib.h"

int main(){
    
    float a = 2.0f;
    printf("Sinus(a) = \t\t%.04f\n",sin(a));      //Sinus
    printf("Cosinus(a) = \t\t%.04f\n",cos(a));    //Cosinus
    
    float b = 2.33456f;
    float c = ceil(b);  //ceil = Aufrunden
    float d = floor(b); //floor = Abrunden

    printf("Ceil(b) = \t\t%.04f\n", c);
    printf("Floor(b) = \t\t%.04f\n", d);

    float e = 4.0f;    //Wurzel
    float f = sqrt(e);  //Square root
    float g = pow(e, 3);     //x^y

    printf("SQRT(%.1f) = \t\t%.04f\n",e, f);
    printf("POW(%.1f)  = \t\t%.03f(%.1f^3)\n",e, g, e);
        

    return EXIT_SUCCESS;
}


