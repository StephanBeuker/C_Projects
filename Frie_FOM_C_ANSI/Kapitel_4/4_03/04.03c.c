#include <stdio.h>
#include "mathematik.h"

int main()
{
	float radius=0;

	printf("\nBitte geben Sie den Radius des Kreises ein: ");
	scanf("%f",&radius);
	printf("\n");

	printf("Der Umfang betraegt %f\n",berechneUmfang(radius));
	printf("Der Flaecheninhalt betraegt %f\n",berechneFlaeche(radius));


	return 0;
}
