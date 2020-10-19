#include<stdio.h>

int main() {
	/* Getraenke Automat Version 0.2 */

	printf("Getraenke Automat v0.2\n\n");

	// Auswahl der Getraenke
	int sorte;
	printf("Waehlen sie ihr Getraenk aus:\n");
	printf("1) Wasser (0,50 Euro)\n");
	printf("2) Limonade (1,00 Euro)\n");
	printf("3) Bier (2,00 Euro)\n\n");
	printf("Geben sie 1, 2 oder 3 ein: ");
	scanf("%d", &sorte);

	// lege den zu zahlenden Betrag fest
	float preis=0;
	switch(sorte) {
	    case 1: preis = 0.5; break;
	    case 2: preis = 1.0; break;
	    case 3: preis = 2.0; break;
	}

	// Aufforderung zur Bezahlung
	float einwurf=0;
	printf("\nBitte werfen sie %.2f Euro ein: ", preis);
	scanf("%f", &einwurf);

	// ueberpruefe Geldstueck
	if(einwurf == preis) {
	    printf("\nVielen Dank, bitte entnehmen sie ihr Getraenk.\n");
	}else {
	    printf("\nSie haben kein %.2f Euro Stueck eingeworfen.\n", preis);
	}

	return 0;
}
