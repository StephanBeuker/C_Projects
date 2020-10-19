#include<stdio.h>

int main() {
	float liter, km;
	printf("\n\t\tBenzinverbrauch auf 100 km");
	printf("\nGefahrene Kilometer: ");
	scanf("%f", &km);

	printf("\nBenzinverbrauch: ");
	scanf("%f", &liter);

	printf("\nVerbrauch = %.2f l/100km.\n", liter * 100 / km);


	return 0;
}
