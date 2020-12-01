
#include <stdio.h>

//Punktnotation

typedef struct{
	char sorte[10];
	float preis;
	int kilo;
} APFEL;	//Apfel = Datentyp; besser APFELLISTE

int main(){

	APFEL daten[3]={{"Jonagold", 1.49, 29},
                    {"Delicious", 1.59, 15},
                    {"Elstar", 1.99, 35}
					};

    int i;
	float gesamt = 0;


    printf("Sorte\t\t Preis/Kilo\t\t Absatz in Kilo\t\t Umsatz\n");

	for (i=0;i<3;i++){

		printf("%-10s\t %.2f\t\t\t %d\t\t\t %.2f\n",
		        daten[i].sorte,daten[i].preis, daten[i].kilo, (daten[i].preis*daten[i].kilo));
        gesamt+= daten[i].preis*daten[i].kilo;
    }

    printf("\nGesamtumsatz: %.2f", gesamt);


    return 0;
}
