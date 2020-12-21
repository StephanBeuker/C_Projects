#include <stdio.h>

int main() {
   FILE *datei;

   if( (datei=fopen("10.06.txt","r+")) == NULL) {
      printf("Datei konnte nicht geoeffnet werden.\n");

   }else{
       int i;
       char puffer[20];
       //------------------------------------------------------
       while(fgets(puffer, 20, datei))
           printf("%s", puffer);

        //------------------------------------------------------

       fseek(datei, 0, SEEK_SET);

       for(i=0; i<8; i++){
           fseek(datei, i*11, SEEK_SET);

           fputs("1", datei);
          // fseek(datei, 9, SEEK_CUR);
       }

        //------------------------------------------------------

       printf("\n-----------------------------\r\n");

       fseek(datei, 0, SEEK_SET);
       while(fgets(puffer, 20, datei))
           printf("%s", puffer);

       fclose(datei);
   }

   return 0;
}
