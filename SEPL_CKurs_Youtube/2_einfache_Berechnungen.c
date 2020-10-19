#include<stdio.h>   //Präprozessoranweisung: stellt printf zur Verfügung

main()              //Einprungpunkt
{
    int ergebnis;   // Deklaration ergebnis mit Typ int: Zahlvariable
    int wert = 5;   // Deklariere vorinitialisierte Variable
    ergebnis = wert * 7;    // Anweisung: Berechne, weise ergebnis zu
    printf("Ergebnis = %d\n", ergebnis);    // Ausgabe

    //int name = Ausdruck;
    //Typ Bezeichner = Initialisierung(optional)
    //Typ gibt an wieviele  Bytes die Variable belegt, Prozessorabhängig
    //short: ganzzahl   16bit, 2 bit+
    //int:   ganzzahl   16bit, 2 bit+
    //long   ganzzahl   32bit, 4 bit+
    //mit Vorzeichen :short, int, long
    // unsigned int, unsigned long : ohne Vorzeichen
    
    short a, b;
    int c = 2, d = c+1;
    //komma getrennte Deklaration gelten als separate Deklaration
    //Gültigksbereich: Teil des Programms, der die Variable sehen kann, zB. mehrfachverwendung von x
        //in c: Gültigkeitsbereich ab nächster Anweisung/Deklaration bius Ende des Blocks
        //Ausnahmen: Funktionen und Strukturen können sich selbst während ihrer Desklaration sehen.
        
}