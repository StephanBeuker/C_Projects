#include <stdio.h>

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
            int i=0;
            while(ptr != NULL){

                switch(i){
                    case 0: printf("Datum: %s\n", ptr);
                    break;
                    case 1: printf("Uhrzeit: %s Uhr\n", ptr);
                    break;
                    case 2: printf("User: %s\n", ptr);
                            printf("-------------------------\n");
                    break;
                }

                ptr = strtok(NULL,",");
                i++;
            }
        }

        fclose(csv);
    }



   return 0;
}
