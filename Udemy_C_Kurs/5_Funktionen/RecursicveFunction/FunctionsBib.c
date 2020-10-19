#include <stdio.h>      
#include "FunctionsBib.h"      

//Definition
void printEvenOrOdd(int number){    
    if ((number % 2) == 0){
        printf("Number is even!\n");
    }
    else{
        printf("Number is odd!\n");
    }
}

//Definition
int getNumberFromUser(){            
int numberFromUser;
printf("Please Enter an integer number: ");
scanf("%d", &numberFromUser);
return numberFromUser;
}

//Definition
int compareNumbers(int a, int b){
    if (a < b){return b;}       
    else{return a;}      
}

//Definition
unsigned int factorial(unsigned int i){
    if (i <= 1)
    {
        return 1;
    }

    return i * factorial(i - 1); //in jedem Durchluf ruft sich die Funktion selbst wieder auf
}
//  Eingabe 5: 5<=1 ->Ja
//      return 5 * factorial(4)
//  Eingabe 4:  4<=1 ->Ja
//      return 4 * factorial(3)
//  Eingabe 3: 3<=1 ->Ja
//      return 3 * factorial(2)
//  Eingabe 2:  2<=1 ->Ja
//      return 2 * factorial(1)
//  Eingabe 2:  1<=1 ->Nein
//  return 1 (statement if abfrage)
//  => Wir haben jetzt einen Call-Stack(Ansammlung von Aufrufen)
//  => Wir gehen den von unten nach oben durch :
//  return 1 --> wird in darüberiliegenden Aufruf eingestezt
//  return 2 * 1 
//  return 3 * 2 = 6
//  return 4 * 6 = 24
//  return 5 * 24 = 120