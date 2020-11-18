#include <stdio.h>
#include <stdlib.h>

int berechneProdukt(int*,int);
int berechneProdukt2(int[],int);
//int* und int[] übergeben beide den startpunkt
int main()
{
	int array[10], count;

	for (count=0;count<10;count++)
	{
		printf("Eingabe integer-Wert: ");
		scanf("%d",&array[count]); //adresse array an der position count
	}

	printf("\n\nDas Produkt der eingegebenen Wert betraegt %d\n",berechneProdukt(array,10));
    printf("\n\nDas Produkt der eingegebenen Wert betraegt %d\n",berechneProdukt2(array,10));

    return EXIT_SUCCESS;
}

int berechneProdukt(int *feld,int laenge) //*feld startadresse array
{
	int count, produkt=1;

	for (count=0;count<laenge;count++) //count++ = wert einen nach rechts
		produkt = produkt * *feld++; //WErt des arrayelementes 0
									//andere schreibweise und ist SCHNELLER !
	return produkt;
}

int berechneProdukt2(int feld[],int laenge)
{
	int count, produkt=1;

	for (count=0;count<laenge;count++)
		produkt*=feld[count];	//alternative variante
								//Countberechnung ist langsam
	return produkt;
}
