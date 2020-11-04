#include <stdio.h>

// Anzeigen
void printArray(int *array, int size);

// Rückgabe vom Maximum
int getMax(int *array, int size);

// Rückgabe vom Minimum
int getMin(int *array, int size);

// Rückgabe vom Mittelwert
float getAverage(int *array, int size);

// sortieren mit BubbleSort
void sort(int *array, int size);


int main(){

    int array[10] = {4, 19, 20, 7, 36, 18, 1, 5, 66, 45};

    printArray(array,10);
    printf("\nMax: %d\n", getMax(array, 10));
    printf("Min: %d\n", getMin(array, 10));
    printf("Mitttelwert: %.2f\n", getAverage(array, 10));
    sort(array,10);
    printArray(array,10);


    return 0;
}

void sort(int *array, int size){
      // Anmerkung: Zu Beginn des bubblesort-Algorithmus ist die
      // Obergrenze gleich der Dimension des zu sortierenden
      // Arrays, d. h. gleich der Anzahl seiner Elemente
      // Hier der bubblesort-Algorithmus:
      // while Obergrenze > Index des 2. Feldelementes:
      // Gehe in einer Schleife vom 2. bis zum letzten zu sortie-
      // renden Array-Element (dessen Array-Index ist um 1 geringer
      // als die Obergrenze). Wenn ein Element kleiner ist als sein
      // Vorgaenger, werden beide vertauscht. (Hinweis: Nach dem
      // ersten Durchlauf steht das groesste Element am Ende). Nun
      // wird die Obergrenze um 1 verringert.

      while (size > 1){

         int lauf;
         for (lauf = 1; lauf < size; lauf++){

            if (array[lauf] < array[lauf - 1]){
            	int hilf = array[lauf];
            	array[lauf] = array[lauf-1];
            	array[lauf-1] = hilf;
            }
         }
         size--;
      }
   }

void printArray(int *array, int size){
     printf("\n--------------------------------------\n");
     int i;
     for (i = 0; i < size; i++){

        printf("Index: %d Wert: %d\n", i, array[i]);
      }
      printf("\n--------------------------------------\n");
}

int getMax(int *array, int size){
    int max = array[0];
    int i;
    for (i = 1; i < size; i++){

        if(array[i]>max)
            max = array[i];
    }
    return max;
}

int getMin(int *array, int size){
    int min = array[0];
    int i;
    for (i = 1; i < size; i++){

        if(array[i]<min)
            min = array[i];
    }
    return min;
}

float getAverage(int *array, int size){
    int sum = 0;
    int i;
    for (i = 0; i < size; i++){

        sum+=array[i];
    }

    return (float)sum/size;
}
