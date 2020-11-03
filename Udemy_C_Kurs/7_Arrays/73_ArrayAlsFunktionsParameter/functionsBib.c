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