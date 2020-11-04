#include <stdio.h>

void printArray(int *, int *);
void move(int *array, int *posX, char *zug, int *groesse);

int main() {

    int groesse;
	printf("\nGeben Sie die Anzahl der Felder ein:");
	scanf("%d", &groesse);

    int *array;
    // Speicher allokieren
	array = (int *) calloc(groesse, sizeof(int));

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
        printArray(&array[0], &groesse);

        // l, r oder x einlesen mit scanf
        printf("\nZug [l links, r rechts]: ");
		scanf("%c", &zug);
        // Tastaturpuffer leeren
        fflush(stdin);

        // Zug ausführen mit Funktionsaufruf move(int *, int *, char *, int *);
        move(&array[0], &posX, &zug, &groesse);

	}while(zug != 'x');


    free(array);
	return 0;
}

// Ausgabe Spielfeld
void printArray(int *array, int *groesse) {
	printf("\n");
	int i;
	// Schleife fuer Spalten, X-Achse
	for(i=0; i<*groesse; i++) {

        // Position setzen
        array = array+i;
        // Wert ausgeben
	    printf("%d ", *array);
        // Position zurücksetzen
	    array = array-i;

	    // Alternative in einem Schritt
        //printf("%d ", *(array+i));

	}
	printf("\n");
}

// Spielfigur bewegen
void move(int *array, int *posX, char *zug, int *groesse) {


	// Alternative in einem Schritt
	*(array + *posX) = 0;
	//array[*posX]=0;




	// neue Position bestimmen
	switch(*zug) {
		case 'l': (*posX)--; break;
		case 'r': (*posX)++; break;
	}

	// Grenzueberschreitung pruefen
	if(*posX < 0) *posX = *groesse-1;
	if(*posX >= *groesse) *posX = 0;


	// Alternative in einem Schritt
	*(array + *posX) = 1;
	//array[*posX] = 1;
}
