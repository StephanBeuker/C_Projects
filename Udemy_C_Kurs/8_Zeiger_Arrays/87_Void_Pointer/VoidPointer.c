#include <stdio.h>
#include <stdlib.h>

//Verwendung void-Pointer: zum schreiben von generischen Funktionen, wo Datentyp egal ist.
    //Bei sortierfunktionen zum Beispiel

int main()
{

    //"normaler" pointer
   int* a = (int*) malloc(sizeof(int));
    //Do Something
   free(a);
   a = NULL;

    //void Pointer: kann auf jeden Datentyp zeigen den es gibt
    int num = 10;
    void* p;
    p = &num;

    printf("%d", *((int*)p));   //typecasting zu int Pointer, wie bei malloc

    return EXIT_SUCCESS;
}