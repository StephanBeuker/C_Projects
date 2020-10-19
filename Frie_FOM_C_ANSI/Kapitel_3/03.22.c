#include <stdio.h>

int main(){

    int n;
    int i;
    int ergebnis = 1;

    printf("Bitte Zahl eingeben!");
    scanf("%i", &n);

    for(i=1; i<=n; i++){
        ergebnis = ergebnis * i;
    }

    printf("Ergebnis: %i", ergebnis);


	return 0;
}
