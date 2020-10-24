#include <stdio.h>
#include"berechnung.h"

int main()
{

    int radius;
    printf("Bitte Radius eingeben:\n");
    scanf("%i", &radius);

    float umfang = berechneUmfang(radius);
    float flaeche = berechneFlaeche(radius);

    printf("Umfang: %.2f\n", umfang);
    printf("Fläche: %.2f\n", flaeche);

    return 0;
}
