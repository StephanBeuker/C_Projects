#include "functionsBib.h"
#include <stdio.h>
#include <stdlib.h>

//Definition
int binom(int *a, int *b)
{
    return (*a * *a) + (2 * *a * *b) + (*b * *b);
}

//Definition
void eingabeZahl(int *a, int *b)
{
    printf("Wert 1: ");
    scanf("%d", a);
    printf("Wert 2: ");
    scanf("%d", b);
}
//Definition
int getNumberFromUser(){
    int a = 0;
    printf("Wert eingeben: ");
    scanf("%d", &a);
    return a;
}

//Definition
float calcMeanArray(int aray[], unsigned int lenght)
{

    float sum = 0.0f;

    for (int i = 0; i < lenght; i++)
    {
        sum += aray[i];
    }
    float mean = sum / lenght;
    return mean;
}

//Definition
int calcMinArray(int array[], unsigned int lenghth){

    int min = 0;

    for (int i = 0; i < lenghth; i++){
        if (i == 0){
            min = array[i];
        }
        if (array[i] < min){
            min = array[i];
        }
    }
    return min;
}

//Definition
int calcMaxArray(int array[], unsigned int lenghth){

 int max = 0;

    for (int i = 0; i < lenghth; i++){
        if (i == 0){
            max = array[i];
        }
        if (array[i] > max){
            max = array[i];
        }
    }
    return max;   
}

//Definition
int **createMatrix(unsigned int rows, unsigned int cols, int value)
{

    int **matrix = (int **)malloc(rows * sizeof(int *));

    for (int i = 0; i < rows; i++)
    {
        matrix[i] = (int *)malloc(cols * sizeof(int));

        for (int j = 0; j < cols; j++)
        {
            matrix[i][j] = value;
        }
    }
    return matrix;
}

//Definition
void fillMatrix(int **matrix, unsigned int rows, unsigned int cols, int value)
{

    for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j < cols; j++)
        {
            matrix[i][j] = value;
        }
    }

    return;
}