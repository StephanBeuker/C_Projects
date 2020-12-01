
#include <stdio.h>

//Zeigerarithmetik

typedef struct{
	char sorte[10];
	float preis;
	int kilo;
} APFEL;

int main(){

	APFEL daten[3]={{"Jonagold", 1.49, 29},
	                   {"Delicious", 1.59, 15},
					   {"Elstar", 1.99, 35}
					};

    APFEL *z_apfel;
	int count;
	float gesamt = 0;

	z_apfel=daten;

    printf("Sorte\t\t Preis/Kilo\t\t Absatz in Kilo\t\t Umsatz\n");

	for (count=0;count<3;count++){

		printf("%-10s\t\t %.2f\t\t %d\t\t\t %.2f\n",
		        z_apfel->sorte,z_apfel->preis, z_apfel->kilo, (z_apfel->preis*z_apfel->kilo));

        gesamt+= (z_apfel->preis*z_apfel->kilo);

        z_apfel++;

    }

    printf("\nGesamtumsatz: %.2f", gesamt);


    return 0;
}
