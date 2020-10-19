#include<stdio.h>
#include<stdlib.h>
//Funtionen: zum auslagern von Code, der mehrfach verwendet wird.


    //nur die Declaration (auch möglich) Definition später
void printEvenOrOdd(int number);

int main(){
    //Deklaration + Initialisierung
int i = 12;

    //Name: printEvenOrOdd
    //Arguments: i
printEvenOrOdd(i);    
printEvenOrOdd(i);    
printEvenOrOdd(i);    
printEvenOrOdd(i);    
printEvenOrOdd(i);    

    return EXIT_SUCCESS;
}

    //Return Type: void
    //Name: printEvenOrOdd
    //Parameters: int number
    //Declaration + Definition(Methodenbody) der Funktion
    //kann unterhalb der main-Methode stehen ,wenn die Deklaration oberhalb steht!
void printEvenOrOdd(int number){
    
    if ((number % 2) == 0)
    {
        printf("Even!\n");
    }
    else
    {
        printf("Odd!\n");
    }
}