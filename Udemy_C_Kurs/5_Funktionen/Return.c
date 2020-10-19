#include<stdio.h>
#include<stdlib.h>

//Returntypes:  void: Funktion hat keinen Returntype(leer) 

void printEvenOrOdd(int number);
int getNumberFromUser();

int main(){

    int i = getNumberFromUser();;
    printEvenOrOdd(i);    
 
    return EXIT_SUCCESS;
}


void printEvenOrOdd(int number){    //Definition
    if ((number % 2) == 0){
        printf("Number is even!\n");
    }
    else{
        printf("Number is odd!\n");
    }
}

int getNumberFromUser(){            //Definition
int numberFromUser;
printf("Please Enter an integer number: ");
scanf("%d", &numberFromUser);
return numberFromUser;
//DEAD CODE
}