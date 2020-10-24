#include <stdio.h>
#include "max.h"

int main()
{
	float erste_zahl, zweite_zahl;

	printf("Bitte die erste Zahl eingeben: ");
	scanf("%f",&erste_zahl);

	printf("Bitte die zweite Zahl eingeben: ");
	scanf("%f",&zweite_zahl);

	max(erste_zahl,zweite_zahl);

	return 0;
}
