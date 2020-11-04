#include <stdio.h>

int main()
{
	FILE *csv;
	char name[20];
    char datum[11], uhr[6];

    csv = fopen("log.csv", "r");
   if(csv == NULL) {
      printf("Fehler beim Oeffnen ...\n");

   }else{

       while(fscanf(csv,"%10s,%5s,%s",datum,uhr,name) != EOF ){
           printf("Datum:\t%s\n", datum);
           printf("Uhrzeit:%s Uhr\n", uhr);
           printf("User:\t%s\n", name);
           printf("-----------------------------------\n");
       }

       fclose(csv);
    }


   return 0;
}
