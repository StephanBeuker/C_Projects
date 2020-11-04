#include <stdio.h>
#include <math.h>

void berechneUmfang(float*,float*);
void berechneFlaeche(float*,float*);

int main()
{
	float radius=0;
	float umfang=0;
	float flaeche=0;

	printf("\nBitte geben Sie den Radius des Kreises ein: ");
	scanf("%f",&radius);
	printf("\n");

	berechneUmfang(&radius,&umfang);
	berechneFlaeche(&radius,&flaeche);

	printf("Der Umfang betraegt %f\n",umfang);
	printf("Der Flaecheninhalt betraegt %f\n",flaeche);

	return 0;
}

void berechneUmfang(float *r,float *u)
{
	*u=M_PI*(*r)*2;
}

void berechneFlaeche(float *r,float *f)
{
	*f=M_PI*(*r)*(*r);
}
