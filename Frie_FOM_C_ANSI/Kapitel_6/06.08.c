#include <stdio.h>

int berechneProdukt(int*,int);
int berechneProdukt2(int[],int);

int main()
{
	int array[10], count;

	for (count=0;count<10;count++)
	{
		printf("Eingabe integer-Wert: ");
		scanf("%d",&array[count]);
	}

	printf("\n\nDas Produkt der eingegebenen Wert betraegt %d\n",berechneProdukt(array,10));
    printf("\n\nDas Produkt der eingegebenen Wert betraegt %d\n",berechneProdukt2(array,10));

    return 0;
}

int berechneProdukt(int *feld,int laenge)
{
	int count, produkt=1;

	for (count=0;count<laenge;count++)
		produkt = produkt * *feld++;

	return produkt;
}

int berechneProdukt2(int feld[],int laenge)
{
	int count, produkt=1;

	for (count=0;count<laenge;count++)
		produkt*=feld[count];

	return produkt;
}
