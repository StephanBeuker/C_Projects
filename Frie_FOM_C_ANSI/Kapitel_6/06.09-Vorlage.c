#include <stdio.h>

void printArray(int *, int *);
void move(int *array, int *posX, char *zug, int *groesse);

int main() {

    int groesse;
	printf("\nGeben Sie die Zeilengroesse ein:");
	scanf("%d", &groesse);

    int *array;
    // Speicher allokieren
	array = ...

    // posX soll kein Zeiger auf das Array sein, sondern die Position der Spielfigur
    // enthalten: z.B. Figur ganz links-> posX=0 oder Figur auf Feld 4 -> posX=3
    // entspricht also dem Index des Elementes, das eine 1 enthält
    int posX=0;
	char zug;

	// initiales setzen der Spielfigur
	array[posX] = 1;

	printf("\nBeenden mit x\n");

    // Tastaturpuffer leeren
    fflush(stdin);

	do {
		// Array über Funktionsaufruf printArray(int *, int *); ausgeben
		...

		// l, r oder x einlesen mit scanf
		...
        // Tastaturpuffer leeren
        fflush(stdin);

        // Zug ausführen mit Funktionsaufruf move(int *, int *, char *, int *);
        ...

	}while(zug != 'x');


    // Speicher wieder freigeben
    ...

	return 0;
}

// Hier die beiden Funktionen laut Prototypen implementieren
...
