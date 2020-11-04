#include <stdio.h>

int main()
{

	double d = 2.5;
	double *d_zeiger;
	d_zeiger = &d;



	printf("Der Inhalt der Variablen\n");
	printf("direkter Zugriff: %lf\n",d);
	printf("indirekter Zugriff: %lf\n\n",*d_zeiger);

	printf("Die Adresse der Variablen\n");
	printf("Zugriff ueber variable: %p\n", &d);
	printf("Zugriff ueber zeiger: %p\n", d_zeiger);

    return 0;
}
