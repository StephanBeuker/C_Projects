#include <stdio.h>
#include <stdlib.h>
#include "FunctionsBib.h"


int main(){
    
    int number_user_a = getNumberFromUser();
    int number_user_b = getNumberFromUser();
    printf("Biggernumber is: %d", compareNumbers(number_user_a,number_user_b));
    
    return EXIT_SUCCESS;
}


