#include <stdio.h>
#include <stdlib.h>
#include "functionsBib.h"



int main()
{

    int **M = createMatrix(2, 3, 1);

    return EXIT_SUCCESS;
}

//Definition
int **transposeMatrix(int **matrix_input, unsigned int rows, unsigned int cols)
{
    int **matrix_transpose = createMatrix(cols, rows, 0);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; i < cols; j++)
        {
            matrix_transpose[j][i] = matrix_input[i][j];
        }
    }
    return matrix_transpose;
}                                                                                                                                                                                                                                                                                                                                               