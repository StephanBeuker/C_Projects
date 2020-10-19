#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    float a = 0.1;
    float b = 0.1;
    float c = a + b;

    printf("A: %.23f\n", a);
    printf("B: %.23f\n", b);
    printf("C: %.23f\n", c);    //Ungenaugkeit float!
    printf("D: %.23f\n", 0.2);  //wird automatisch als Double eingefügt
    printf("D: %.23f\n", 0.2f); //Cast to float mit floatprecision
    //Konsequenz: Wenn man mit Vergleichen arbeitet wird die 0.2(Double) nicht als 0.2(Float) erkannt !!!!
    
    return 0;
} 