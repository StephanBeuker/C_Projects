// Multiplikations-Rechner

#include<stdio.h>

float eingabeZahl() 
{
	float eingabe;
	printf("\nEingabe Zahl: ");
	scanf("%f", &eingabe);
	return eingabe;
}

float multipliziere(float zahl1, float zahl2) 
{
	return (zahl1 * zahl2);
}

void ausgabeErgebnis(float ergebnis) 
{
	printf("\nErgebnis: %.2f\n", ergebnis);
}

int main() {

	// Rechenvorgang
	float zahl1, zahl2, produkt;
	zahl1 = eingabeZahl();
	zahl2 = eingabeZahl();
	produkt = multipliziere(zahl1, zahl2);
	ausgabeErgebnis(produkt);

    // so geht es ohne lokale Variablen (von innen nach außen, von rechts nach links)
    ausgabeErgebnis(multipliziere(eingabeZahl(), eingabeZahl()));


	return 0;
}

