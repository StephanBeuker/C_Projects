#include<stdio.h>
#include<stdlib.h>

//Quadrat aus Sternen (*) 10x10

int main(){

for (int spalte = 0; spalte < 11; spalte++)
{
    for (int zeile = 0; zeile < 11; zeile++)
    {
        printf("Zeile = %d*  ",zeile);
        
    }
    
    printf("Spalte = %d\n",spalte);
}

return EXIT_SUCCESS;
}
