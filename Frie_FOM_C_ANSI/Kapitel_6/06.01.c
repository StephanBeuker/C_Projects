
#include<stdio.h>

int main() {

    float noten[10], summe=0;
    int i;

    // Noten einlesen
    for(i=0; i<10; i++) {
        printf("\nBitte geben sie eine Note ein: ");
        scanf("%f", &noten[i]);
    }

    // Summe berechnen
    for(i=0; i<10; i++) {
        summe += noten[i];
    }

    printf("\nDie Summe ist %.2f\n", summe);
    printf("Der Durchschnitt ist %.2f\n", summe / 10);


	return 0;
}
