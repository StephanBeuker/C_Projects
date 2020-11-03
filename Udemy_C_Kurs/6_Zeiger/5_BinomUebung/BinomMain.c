#include <stdio.h>
#include <stdlib.h>
#include "Binom.h"

int main(){
    int a = 0;
    int b = 0;
    eingabeZahl(&a, &b);
    int c = binom(&a, &b);
    printf("a= %d\n", a);
    printf("b= %d\n", b);
    printf("c= %d\n", c);

    return EXIT_SUCCESS;
}