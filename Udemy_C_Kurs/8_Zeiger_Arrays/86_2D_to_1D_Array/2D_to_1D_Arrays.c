#include <stdio.h>
#include <stdlib.h>
//Präprozessordirektive: Ersetzte alle 'Wert2' durch 'Wert2'
#define matrix(i,j) matrix[i * cols + j]

//Thema: Darstellen einer 2D-Matrix über einen Vektor

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


int main()
{

    unsigned int rows = 3;
    unsigned int cols = 2;
    unsigned int n_elements = rows * cols;

    int *matrix = createVector(n_elements, 0);
    matrix[0]=00;
    matrix[1]=01;
    matrix[2]=10;
    matrix[3]=11;
    matrix[4]=20;
    matrix[5]=21;

    for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j < cols; j++)
        {
            //printf("M[%d][%d] = %d\n", i, j, matrix[i * cols + j]);     In die Präprozessordirektive überführen
            printf("M[%d][%d] = %d\n", i, j, matrix(i,j));
        }
    }

    return EXIT_SUCCESS;
}