#include "functionsBib.h"
#include <stdio.h>
#include <stdlib.h>

int binom(int *a, int *b){
    return (*a * *a) + (2 * *a * *b) + (*b * *b);
}

void eingabeZahl(int *a, int *b){
    printf("Wert 1: ");
    scanf("%d", a);
    printf("Wert 2: ");
    scanf("%d", b);
}