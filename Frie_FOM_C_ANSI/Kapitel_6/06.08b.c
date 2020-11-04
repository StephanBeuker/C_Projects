#include <stdio.h>

#define MAX 10

int produkt(int[]);

int main()
{
	int array[MAX] = {0}, count;

	for (count=0;count<MAX-1;count++) //letztes element nicht belegen ->max-1
	{
		printf("Eingabe integer-Wert: ");
		scanf("%d",&array[count]);
		if(array[count]==0)
		    break;
	}

	printf("\n\nDas Produkt der eingegebenen Wert betraegt %d\n",produkt(array));


    return 0;
}

int produkt(int feld[])//ohnen länge
{
	int produkt=1;

	while (*feld!=0) //arary geht so lange bis 0 kommt
		produkt *= *feld++;

	return produkt;
}
