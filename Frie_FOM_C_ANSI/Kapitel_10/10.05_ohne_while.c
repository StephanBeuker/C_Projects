#include <stdio.h>
#include <string.h>

int main()
{
	FILE *csv;
	char puffer[80];

    csv = fopen("log.csv", "r");
    if(csv == NULL) {
      printf("Fehler beim Oeffnen ...\n");

    }else{

        char *ptr;

        while(fgets(puffer, 80, csv)){

            ptr = strtok(puffer,",");
            printf("Datum: %s\n", ptr);
            ptr = strtok(NULL,",");
            printf("Uhrzeit: %s Uhr\n", ptr);
            ptr = strtok(NULL,",");
            printf("User: %s\n", ptr);
            printf("-------------------------\n");

        }

        fclose(csv);
    }



   return 0;
}
