#include <stdio.h>
#include <stdlib.h>
#include "functionsBib.h"
#define LENGTH 10

int main(){

    int i = 0;
    //4 Möglichkeiten den Wert von i um 1 zu erhöhen
    //    i = i +1;
    //    i +=1;

    i++; //Post-Inkrement
    printf("%d\n", i);      //1
    ++i; //Pre-Inkrement
    printf("%d\n", i);      //2

    int j = 0;
    printf("%d\n", j++);    //0:    Hier wird erst ausgegeben und dann erhöht!
    printf("%d\n", ++j);    //2:    Hier wird vor dem erhöhen ausgegeben!

    my_function(j++);   //0 :j geht mit dem aktuellen WErt in die Funktion und Inkrementiert DANACH
    my_function(++j);   //2 :j geht mit dem Inkrementierten Wert in die Funktion!

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n",i);   //0,1,2
    }

    for (int i = 0; i < 3; ++i)
    {
        printf("%d\n",i);   //0,1,2
    }
    

    return EXIT_SUCCESS;
}
