#include <stdio.h>

int main(){
    float schlaege, alter;
    printf("\n\t\tHerzschlaege\n");
    printf("\nHerzschlaege pro Minute: \n");
    scanf("%f", &schlaege);
    printf("Alter in Jahren: \n");
    scanf("%f", &alter);
    printf("\nIhr Herz hat seit Ihrer Geburt ");

    // %f formatieren
    printf("%.0f ", schlaege * 60 * 24 * 365.25 * alter);
    printf("mal geschlagen.\n\n");


	return 0;

}