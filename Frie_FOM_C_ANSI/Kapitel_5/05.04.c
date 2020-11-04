#include <stdio.h>

void einlesen(int*, int*);

int main()
{
	int zahl1, zahl2;

	einlesen(&zahl1,&zahl2);

	printf("\nDas Produkt der beiden Zahlen ergibt %d\n",zahl1*zahl2);


    return 0;
}

void einlesen(int *z1, int *z2)
{
	printf("Bitte geben Sie die erste Zahl ein: ");
	scanf("%d",z1);
	printf("Bitte geben Sie die zweite Zahl ein: ");
	scanf("%d",z2);
}
