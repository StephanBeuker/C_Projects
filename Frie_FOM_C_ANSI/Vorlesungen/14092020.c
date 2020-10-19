#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*float zahl1, zahl2, ergbenis;
    printf("Geben Sie die erste Zahl ein: \n");
    scanf("%f", &zahl1);
    fflush(stdin);
    printf("Geben Sie die zweite Zahl ein: \n");
    scanf("%f", &zahl2);
    ergbenis = zahl1 + zahl2;
    printf("Die Summe ergibt: %.2f\n", ergbenis);
    */


    /*float a,b;
    printf("Sprit verbaucht: \n");
    scanf("%f", &a);
    fflush(stdin);
    printf("km gefahren: \n");
    scanf("%f", &b);
    printf("Verbauch: %.2f\n", a*100/b);*/

    /*printf("Flächeninhalt berechnen: \n");
    float r;
    printf("Radius Kreis: \n");
    scanf("%f", &r);
    printf("Flächeninhalt: %.2f\n", r*r*M_PI);*/

    /*int a;
    printf("Tage umrechnen: \n");
    scanf("%i", &a);
    printf("Stunden: %i\n", a*24);
    printf("Minuten: %i\n", a*24*60);
    printf("Sekunden: %i\n", a*24*60*60);*/


    long  sekunden=0, minuten=0, stunden=0, tage=0;
    printf("Sekunden in Tage und (Rest)Stunden, (Rest)Minuten, (Rest)Sekunden: \n");
    printf("Eingabe der Sekunden \n");
    scanf("%ld", &sekunden);
    tage=sekunden/(24*60*60);
    //sekunden = sekunden - 24*60*60);
    sekunden = sekunden%(24*60*60);

    stunden = sekunden/(60*60);
    sekunden = sekunden%(60*60);
    minuten= sekunden /60;
    sekunden = sekunden%60;

    printf("Das sind: \n");
    printf("Tage: %i\n", tage);
    printf("Stunden: %i\n", stunden);
    printf("Minuten: %i\n", minuten);
    printf("Sekunden: %i\n", sekunden);




    return 0;
}