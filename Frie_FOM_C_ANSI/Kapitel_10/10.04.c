#include <stdio.h>

#define ZEILENLAENGE 30

int main()
{
	FILE *csv, *kopie;
	char puffer[ZEILENLAENGE];


    if((csv = fopen("log.csv", "r")) == NULL) {
      printf("Fehler beim Oeffnen ...\n");

    }else if((kopie = fopen("kopie.csv", "w"))==NULL){

        printf("Fehler beim Oeffnen ...\n");
        fclose(csv);

    }else{

        while(fgets(puffer, ZEILENLAENGE, csv)){

            // Zeilenumbruch steht in puffer ja bereits drin
            fputs(puffer,kopie);
            printf("Kopiere: %s\n", puffer);
        }

        printf("\n\nKopieren abgeschlossen!\n");

        fclose(csv);
        fclose(kopie);
    }

    return 0;
}
