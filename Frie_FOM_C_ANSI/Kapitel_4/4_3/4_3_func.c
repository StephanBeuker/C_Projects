#include <stdio.h>
#include <stdlib.h>
#include "4_3.h"
#define PI 3.141592653589793

int eingabe(){
int a = 0;
printf("Bitte geben Sie den Radius ein:\n ");
    scanf("%d",&a);
return a;

}

void berechneKreisumfang(int a){
int u = PI * 2 * a;
printf("Umfang Kreis:  %i cm\n", u);
}

void berechneFlächeninahlt(int a){
int f = PI * a * a;
printf("Fläche Kreis:  %i cm\n", f);
}