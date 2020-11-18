#include <stdio.h>
#include <stdlib.h>

//Definition: Array anzeigen
void printarray(int *array, int size);

//Definition: Rückgabe vom MAximum
int getMax(int *array, int size);

//Definition: Rückgabe vom Minimum
int getMin(int *array, int size);

//Definition: Rückgabe vom Mittelwert
float getAverage(int *array, int size);

//Definition: sortieren mit Bubblesort
void sort(int *array, int size);

int main()
{

    int array[10] = {4, 19, 20, 7, 36, 18, 1, 5, 66, 45};

    printarray(array, 10);

    printf("\nMax: %d\n", getMax(array, 10));
    printf("Min: %d\n", getMin(array, 10));
    printf("Mittelwert: %.2f\n", getAverage(array, 10));
    sort(array, 10);

    printarray(array, 10);

    return EXIT_SUCCESS;
}

void printarray(int *array, int size)
{

    for (int i = 0; i < size; i++)
    {
        printf("\tArray[%d] = Array[%d]\n", i, array[i]);
    }
}

int getMax(int *array, int size)
{

    int max = array[0];
    for (int i = 0; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
}

int getMin(int *array, int size)
{
    int min = array[0];
    for (int i = 0; i < size; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    return min;
}

float getAverage(int *array, int size)
{
    
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }
    float average = sum / size;
    return average;
    
}

void sort(int *array, int size)
{
     while (size > 1){

         
         for (int i = 1; i < size; i++){

            if (array[i] < array[i - 1]){
            	int temp = array[i];
            	array[i] = array[i-1];
            	array[i-1] = temp;
            }
         }
         size--;
      }
    

}