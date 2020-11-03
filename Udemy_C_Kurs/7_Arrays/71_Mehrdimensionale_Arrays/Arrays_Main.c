#include <stdio.h>
#include <stdlib.h>
#include "functionsBib.h"

int main()
{

    //   1D Array: Vector   Iteration: 1x for-Schleife
    //   2D Array: Matrix   Iteration: 2x for-Schleife(verschachtelt)
    //   3D Array: Cube     Iteration: 3x for-Schleife(verschachtelt)

    //  M = 3x3
    double M[3][3];

    //for-Loop: Rows
    for (int i = 0; i < 3; i++)
    {
        //for-Loop: Columns
        for (int j = 0; j < 3; j++)
        {
            M[i][j] = i * j;
        }
    }
    //Ausgabe:
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("M[%d][%d] = %.2lf\n", i, j, M[i][j]);
        }
    }

    printf("_______________________________________________\n");

      double N[3][3]= {1,2,3,4,5,6,7,8,9};
    //double N[3][3]= {1,2,3}{4,5,6}{7,8,9};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("N[%d][%d] = %.2lf\n", i, j, N[i][j]);
        }
    }
    printf("_______________________________________________\n");

      double O[3][3]= {
                        {11,12,13},    //entspricht Schreibweise der 3x3 Matrix
                        {14,15,16},
                        {17,18,19}
                      };

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("O[%d][%d] = %.2lf\n", i, j, O[i][j]);
        }
    }   
    return EXIT_SUCCESS;
}