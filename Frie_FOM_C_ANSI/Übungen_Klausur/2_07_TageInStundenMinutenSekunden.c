#include <stdlib.h>
#include <stdio.h>

int main()
{
	int tage=0, stunden=0, minuten=0, sekunden=0;

	printf("Bitte geben Sie die Anzahl Tage ein, die umgerechnet werden soll: \n");
	scanf("%i",&tage);

	stunden=tage*24;
	minuten=stunden*60;
	sekunden=minuten*60;

	printf("\nDas sind:\n");
	printf("%i Stunden oder\n",stunden);
	printf("%i Minuten oder\n",minuten);
	printf("%i Sekunden\n\n",sekunden);

	return 0;
}