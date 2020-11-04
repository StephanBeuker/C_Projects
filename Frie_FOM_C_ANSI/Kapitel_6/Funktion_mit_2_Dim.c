#include <stdio.h>

int berechneProdukt(int*,int,int);
int berechneProdukt2(int[][2],int);

int main()
{
	int array[3][2], i, j;

	for (i=0;i<3;i++)
	{
		for(j=0; j<2; j++){

		    printf("Eingabe integer-Wert: ");
            scanf("%d",&array[i][j]);
		}
	}

	printf("\n\nDas Produkt der eingegebenen Wert betraegt %d\n",berechneProdukt(array,3,2));
    printf("\n\nDas Produkt der eingegebenen Wert betraegt %d\n",berechneProdukt2(array,3));

    return 0;
}

int berechneProdukt(int *feld, int zeilen, int spalten)
{
	int i, j, produkt=1;

	for (i=0; i<zeilen; i++)
	    for(j=0; j<spalten; j++)
		    produkt = produkt * *feld++;

	return produkt;
}

int berechneProdukt2(int feld[][2],int laenge)
{
	int i, j, produkt=1;

	for (i=0;i<laenge;i++)
	    for(j=0;j<2; j++)
		  produkt*=feld[i][j];

	return produkt;
}
