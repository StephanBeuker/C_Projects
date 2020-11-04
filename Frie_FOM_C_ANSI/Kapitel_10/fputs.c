#include <stdio.h>

int main() {
   FILE *datei;
   char zeile1[] = "Testzeile 1";
   char zeile2[] = "Testzeile 2";


   if( (datei=fopen("fputs.txt","w")) == NULL) {
      printf("Datei konnte nicht geoeffnet werden.\n");

   }else{
       fputs(zeile1, datei);
       fputs("\n", datei);
       fputs(zeile2, datei);
       fputs("\n", datei);

       fclose(datei);
   }

   return 0;
}
