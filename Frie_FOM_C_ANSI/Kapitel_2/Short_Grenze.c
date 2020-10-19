#include<stdio.h>

int main() {

	// kleine Zahl mit Vorzeichen deklarieren (erstellen)
    short kleineZahl;

    // kleine Zahl auf Grenzwert setzen
    kleineZahl = 32767;

    // eins hochzählen, also 32767+1, was eigentlich 32768 ergibt
    kleineZahl++;

    // kleineZahl ausgeben
    printf("Wert von kleineZahl: %d\n", kleineZahl);


	return 0;
}
