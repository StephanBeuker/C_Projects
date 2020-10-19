#include <stdio.h>
#include <math.h>

int main()
{
	float radius=0, flaeche=0;

	printf("Bitte geben Sie den Radius des Kreises ein: ");
	scanf("%f",&radius);
	printf("\n");

	flaeche = M_PI * radius * radius;
	//flaeche = M_PI * pow(radius,2);

	printf("Der Flaecheninhalt beträgt %.2f\n",flaeche);

	return 0;
}
