#include <stdio.h>
#include <stdlib.h>
#include "functionsBib.h"

int *createVector(unsigned int lenght, int value)
{
    int *vector;
    vector = (int*) malloc(lenght * sizeof(int));

    for (int i = 0; i < lenght; i++)
    {
        vector[i] = value;
    }
    return vector;
}

//2** verscahteltes Array, in jeder "row" liegt noch eine "row"
int **createMatrix(unsigned int rows, unsigned int cols, int value)
{
    //hinter jedem int ein zusätzlicher Stern gesetzt!
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

int main()
{

    int **matrix = createMatrix(2, 2, 1);
    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 2; j++)
        {
            printf("M[%d][%d] = %d\n", i, j, matrix[i][j]);
        }
    }

    return EXIT_SUCCESS;
}
