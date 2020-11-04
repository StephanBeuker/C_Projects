
#include <stdio.h>

void bubblesort(int*, int);
void printArray(int[], int);

int main(){

  int array[]={5,9,4,3,0,7,6,1,2,8};
  int anzahl = sizeof(array)/sizeof(int);

  printf("\nUnsortiert:");
  printArray(array, anzahl);

  bubblesort(array, anzahl);

  printf("\nSortiert:");
  printArray(array, anzahl);


   return 0;
}

// Zeiger wird übergeben (*), Zugriff über Index
void bubblesort(int *array, int length){
     int i, j;
     for (i = 0; i < length; i++) {

        for (j = 0; j < length - i - 1; j++) {

            if (array[j] > array[j + 1]) {
                int tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
            }
        }
     }
 }

// Array wird übergeben, Zugriff über Zeiger (*)
void printArray(int array[], int length){
  int i = 0;
  while(i<length){

      printf("\nElement %d: %d", i+1, *array++);
      i++;
   }
}
