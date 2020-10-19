#include <stdio.h>      
#include "FunctionsBib.h"      

//Definition
int max(int number_a, int number_b){
    
    if (number_a < number_b)
    {
        return number_b;
    }
    else{
        return number_a;
    }
    
}
//Definition
int min(int number_a, int number_b){
    
    if (number_a > number_b)
    {
        return number_b;
    }
    else{
        return number_a;
    }
    
}
//Definition
float mean(int number_a, int number_b){
    
    float sum = (number_a + number_b);
    float mean = sum / 2.0f;
    
    return mean;
}
//Definition
int getNumberFromUser(){            
int numberFromUser;
printf("Please Enter an integer number: ");
scanf("%d", &numberFromUser);
return numberFromUser;
}