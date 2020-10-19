#include <stdio.h>      
#include "FunctionsBib.h"      

void printEvenOrOdd(int number){    
    if ((number % 2) == 0){
        printf("Number is even!\n");
    }
    else{
        printf("Number is odd!\n");
    }
}


int getNumberFromUser(){            
int numberFromUser;
printf("Please Enter an integer number: ");
scanf("%d", &numberFromUser);
return numberFromUser;
}

int compareNumbers(int a, int b){
    if (a < b){return b;}       
    else{return a;}      //Wenn a !< b --> a>b; wenn a ==b --> auch Rückabe a(oder b: egal)
}