#include <stdio.h>

#define MAX 10

int produkt(int[]);

int main()
{
	int array[MAX] = {0}, count;

	for (count=0;count<MAX-1;count++)
	{
		printf("Eingabe integer-Wert: ");
		scanf("%d",&array[count]);
		if(array[count]==0)
		    break;
	}

	printf("\n\nDas Produkt der eingegebenen Wert betraegt %d\n",produkt(array));


    return 0;
}

int produkt(int feld[])
{
	int produkt=1;

	while (*feld!=0)
		produkt*=*feld++;

	return produkt;
}
