#include <stdio.h>
#define ZEILENLAENGE 10

int main() {
   FILE *quelle;
   char puffer[ZEILENLAENGE];


   if( (quelle=fopen("fgets.txt","r")) == NULL) {
      printf("Datei konnte nicht geoeffnet werden.\n");

   }else{
       while(fgets(puffer, ZEILENLAENGE, quelle)){
           printf("%s\n", puffer);

        }
        fclose(quelle);
   }


   return 0;
}
