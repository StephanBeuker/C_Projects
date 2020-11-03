#include <stdio.h>
#include <stdlib.h>
#include "functionsBib.h"

int main(){
 
    int numbers[5];
    for (int i = 0; i < 5; i++){
        numbers[i] = 1337;
    }
    
    for (int i = 0; i < 5; i++){
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }
    printf("__________________________________\n");
    //Initialisierung des Arrays mittels Aggegrationsfunktion (->{})!
    int numbers2[4] = {13, 12, 11, 10};
    
    for (int i = 0; i < 4; i++){
        printf("numbers[%d] = %d\n", i, numbers2[i]);
    }

    return EXIT_SUCCESS;
}