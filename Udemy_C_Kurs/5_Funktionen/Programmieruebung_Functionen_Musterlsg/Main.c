//Standardbibliotheken
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//HeaderDateien
#include "FunctionsBib.h"

int main(){
    
    int a = getNumberFromUser();
    int b = getNumberFromUser();

    int number_max = max(a,b);
    int number_min = min(a,b);
    float number_mean = mean(a,b);

    printf("MAX{%d, %d}\t= %d\n", a, b, number_max);
    printf("MIN{%d, %d}\t= %d\n", a, b, number_min);
    printf("MEAN[%d, %d]\t= %\n", a, b, number_mean);

    return EXIT_SUCCESS;
}


