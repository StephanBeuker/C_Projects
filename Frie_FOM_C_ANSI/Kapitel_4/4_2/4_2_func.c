#include <stdio.h>
#include <stdlib.h>
#include "4_2.h"

int eingabeZahl(){
int a = 0;
printf("Bitte geben Sie eine Zahl ein:\n ");
    scanf("%d",&a);
return a;
}
void vergleiche(int a, int b){

if (a < b)
    {
        printf("%d ist kleiner als %d.\n",a,b);
    }
    else if (a > b)
    {
        printf("%d ist größer als %d.\n", a,b);
    }
    else
    {
        printf("%d ist gleich %d.\n",a,b);
    }
}