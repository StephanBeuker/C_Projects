#include <stdio.h>

int main()
{
	FILE *csv;
	char name[20];               //Speicherplatz reservieren an bestimmt stelle = char Array; Pointer geht nciht, da sonst nur adresse
    char datum[11], uhr[6];     //Speicherplatz reservieren für Uhr und Datum, wo wir reinlesen

    csv = fopen("log.csv", "r");    //liest aus ORdner wo auch die Debug drin liegt, sonst C:\\temp\\log.csv
   if(csv == NULL) {
      printf("Fehler beim Oeffnen ...\n");

   }else{

       while(fscanf(csv,"%10s,%5s,%s",datum,uhr,name) != EOF ){ //fscanf list aus DAtei(Pointer, "20 zeichen string von links,5Zeichen, Rest",  )
           printf("Datum:\t%s\n", datum);
           printf("Uhrzeit:%s Uhr\n", uhr);
           printf("User:\t%s\n", name);
           printf("-----------------------------------\n");
       }

       fclose(csv); //close read
    }


   return 0;
}
