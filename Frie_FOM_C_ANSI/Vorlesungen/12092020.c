#include <stdio.h>
#include <stdlib.h>

int main()
{
    //printf("Hello world!\n");

    /*int durchmesser;
    durchmesser = 5;
    float umfang = durchmesser * 3.1416;
    printf("Der Umfang bei einem Kreis mit dem Durchmesser %i betraegt: %4.2f cm",durchmesser,umfang);
    */

    /*char zeichen;
    zeichen = 'A';
    printf("Zeichen: %c \n", zeichen);
    zeichen = 66;
    printf("Zeichen: %c \n", zeichen);
    */

    //Inkrementierung über die Kapazität einer Zahl hinaus
    /*short kleineZahl;
    kleineZahl = 32767;
    kleineZahl ++;
    printf("Die kleine Tahl leutet: %d\n", kleineZahl);
    //aus 32767 wird -32768
    */

    //sizeof-Funktion
    /*printf("short: %2d Bit\n", sizeof(short)*8);
    printf("int: %2d Bit\n", sizeof(int)*8);
    printf("long: %2d Bit\n", sizeof(long)*8);
    printf("long long: %2d Bit\n", sizeof(long long)*8);
    */

    //Deklaration einer float Kommazahl
    /*float kommazahl = 122.3456;
    printf("Kommazahl: %f\n", kommazahl);
    printf("Kommazahl: %4.1f\n", kommazahl);
    printf("Kommazahl: %4.3f\n", kommazahl);
    printf("Kommazahl: %3.1f\n", kommazahl);
    */

    //Konstanten
    /*const int IRGENDWAS = 10;
    IRGENDWAS = 15; //hier entsteht ein Fehler, da nicht änderbar
    printf("Der Wert von der Konstante IRGENDWAS betraegt: %i", IRGENDWAS);
    */

    //Symbolische Konstanten
    /*#define Pi 3.1415926535
    float umfang = Pi * 5;
    printf("Umfang: %f", umfang);
    */

    //Zuweisungsoperator =

    //Arithmetische Operatoren
    int a = 0, b = 2, c = 5;

    a=b+c;
    printf("a= %i\n", a);
    a=b-c;
    printf("a= %i\n", a);
    a=c/b;
    printf("a= %i\n", a);
    a=c*b;
    printf("a= %i\n", a);
    a=c%3;
    printf("a= %i\n", a);
    a=1+b*c;
    printf("a= %i\n", a);
    a=(1+b)*c;
    printf("a= %i\n", a);

    b=5;
    c=0;
    int d=0;
    c=b<<1;
    d=b>>1;
    printf("c: %d\nd: %d\n", c, d);










    return 0;
}
