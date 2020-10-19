#include<stdio.h>

main()
{
    int wert = 1;
    for (int i =1;  //Initialisierung: Desklaration/Anweisung 
             i < 7;      //Bedingung: Ausdruck. wahr damit SChelifenkörper ausgeführt wird
             i = i + 1)  //Inkrement: Anweisung
            {
                //Schelifenkörper: eine Anweisung
                wert *= i;
            }

}