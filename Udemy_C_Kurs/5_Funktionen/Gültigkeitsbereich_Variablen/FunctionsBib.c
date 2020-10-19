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

    return i * factorial(i - 1); 
}