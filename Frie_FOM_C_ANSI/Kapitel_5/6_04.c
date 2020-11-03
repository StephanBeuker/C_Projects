#include <stdlib.h>
#include <stdio.h>

int main()
{
    int array[][2] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10}};

    int size1 = sizeof(array) / sizeof(array[0]);
    printf("Anzahl zeilen %i \n, ", size1);

    for (int i = 0; i < 5; i++)
    {
        printf("%d Wertepaare: %dund  %d --> %d\n",i+1, array[i][0], array[i][1],array[i][0] * array[i][1]);
    }

    return 0;
}
