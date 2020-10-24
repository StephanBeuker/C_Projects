#include <stdio.h>
#include <stdlib.h>

void einlesen(int *, int *);

int main()
{
    int a = 0;
    int b = 0;
    printf("a= %d\nb= %d\n", a, b);
    einlesen(&a, &b);
    printf("a= %d\nb= %d\n", a, b);
    return EXIT_SUCCESS;
}

void einlesen(int *a, int *b)
{
    printf("gib zwei Werte ein:\n");
    printf("Wert 1:");
    scanf("%d", a); //&a= adresse wo pointer liegt
    printf("Wert 2:");
    scanf("%d", b);
}
//Syntax: int* = int*a im Prototypen
//int* a,b = int*a, int*b
//int *a, b = int*a, int b