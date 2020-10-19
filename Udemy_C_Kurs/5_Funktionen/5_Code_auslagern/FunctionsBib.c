#include <stdio.h>       //für printf-Funktion
//Weiterhin müssen wir dem benennen wo die Deklaration unserer beiden Funktionen liegt:
#include "FunctionsBib.h"       //eigene Headerdateien werden "" gekennzeichnet!


//Deklaration:
void printEvenOrOdd(int number){    
    if ((number % 2) == 0){
        printf("Number is even!\n");
    }
    else{
        printf("Number is odd!\n");
    }
}

//Deklaration:
int getNumberFromUser(){            
int numberFromUser;
printf("Please Enter an integer number: ");
scanf("%d", &numberFromUser);
return numberFromUser;
}