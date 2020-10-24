#include <stdlib.h>
#include <stdio.h>

int main()
{
    float a, b;

    printf("Bitte die erste Zahl eingeben: ");
    scanf("%f", &a);

    printf("Bitte die zweite Zahl eingeben: ");
    scanf("%f", &b);

    if (a < b){
        printf("Die erste Zahl (%.2f) ist kleiner als die zweite Zahl (%.2f)\n", a, b);
        printf("\n");
    }
    else if (b < a){
        printf("Die zweite Zahl (%.2f) ist kleiner als die erste Zahl (%.2f)\n", b, a);
        printf("\n");
    }
    else{
        printf("Beide Zahlen sind gleich gross\n");
        printf("\n");
    }
    return 0;
}