#include <stdio.h>
#include <stdlib.h>
#include "functionsBib.h"



//Return type: (int*)* = Pointer zu einem int-Pointer
int **createMatrix(unsigned int rows, unsigned int cols, int value)
{
  
    int **matrix = (int**) malloc(rows * sizeof(int *));

    for (int i = 0; i < rows; i++)
    {
        matrix[i] = (int*) malloc(cols * sizeof(int));

        for (int j = 0; j < cols; j++)
        {
            matrix[i][j] = value;
        }
    }
    return matrix;
}

void fillMatrix(int **matrix, unsigned int rows, unsigned int cols, int value){

     for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j < cols; j++)
        {
            matrix[i][j] = value;
        }
    }

    return ;
}

int main()
{   //Matrix consists of rows and cols
    //int **matrix == int* matrix[], also ein Pointer zu einem Vektor
    int **matrix = createMatrix(2, 2, 1);
    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 2; j++)
        {
            printf("M[%d][%d] = %d\n", i, j, matrix[i][j]);
        }
    }
    printf("\n");
    fillMatrix(matrix, 2, 2, 2);
    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 2; j++)
        {
            printf("M[%d][%d] = %d\n", i, j, matrix[i][j]);
        }
    }


    return EXIT_SUCCESS;
}
