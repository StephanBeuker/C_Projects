#include <stdlib.h>
#include <stdio.h>

void min(float, float);

int main()
{
	float erste_zahl, zweite_zahl;

	printf("Bitte die erste Zahl eingeben: ");
	scanf("%f",&erste_zahl);

	printf("Bitte die zweite Zahl eingeben: ");
	scanf("%f",&zweite_zahl);

	min(erste_zahl,zweite_zahl);


	return 0;
}

void min(float zahl1, float zahl2)
{
	if (zahl1<zahl2)
	{
		printf("\n");
		printf("Die erste Zahl ist kleiner als die zweite Zahl\n");
		printf("\n");
	}
	else
	{
		printf("\n");
		printf("Die erste Zahl ist nicht kleiner als die zweite Zahl\n");
		printf("\n");
	}
}
