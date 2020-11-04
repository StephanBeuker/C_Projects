#include <stdio.h>
#include <math.h>

float berechneUmfang(float*);
float berechneFlaeche(float*);

int main()
{
	float radius=0;

	printf("\nBitte geben Sie den Radius des Kreises ein: ");
	scanf("%f",&radius);
	printf("\n");

	printf("Der Umfang betraegt %f\n",berechneUmfang(&radius));
	printf("Der Flaecheninhalt betraegt %f\n",berechneFlaeche(&radius));


	return 0;
}

float berechneUmfang(float *r)
{
	return 2 * M_PI * (*r);
}

float berechneFlaeche(float *r)
{
	return M_PI * (*r) * (*r);
}
