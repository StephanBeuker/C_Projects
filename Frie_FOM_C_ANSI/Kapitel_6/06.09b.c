#include <stdio.h>
#include <stdlib.h>

int getMin(int array[], int *groesse); // Alternative mit eckigen Klammern
int getMax(int *array, int *groesse);
float getAverage(int *array, int *groesse);

int main() {

    int groesse;
	printf("\nGeben Sie die Array-Groesse ein:");
	scanf("%d", &groesse);

    int *array;
    // Speicher allokieren
	array = (int *) calloc(groesse, sizeof(int));

    // einlesen
    int i;
    for(i=0; i<groesse; i++){
        printf("\nGeben Sie einen Wert ein:");
    	scanf("%d", &array[i]);
    }

    printf("\nKleinster Wert:\t%d", getMin(array, &groesse));
    printf("\nGroesster Wert:\t%d", getMax(array, &groesse));
    printf("\nMittelwert:\t%.2f", getAverage(array, &groesse));

    free(array);

	return 0;
}

int getMax(int *array, int *size){
    int max = array[0];
    int i;
    for (i = 1; i < *size; i++){

        if(array[i]>max)
            max = array[i];
    }
    return max;
}

int getMin(int array[], int *size){
    int min = array[0];
    int i;
    for (i = 1; i < *size; i++){

        if(array[i]<min)
            min = array[i];
    }
    return min;
}

float getAverage(int *array, int *size){
    int sum = 0;
    int i;
    for (i = 0; i < *size; i++){

        sum+=array[i];
    }


    return (float)sum/ *size;
}
