#include <stdio.h>

int main() {
   FILE *datei;
   char zeile1[] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
   char zeile2[] = "bbbbbbbbbbbbbbbbb";
   char zeile3[] = "ccccc";

   // ftell gibt aktuelle zeigerposition aus

   if( (datei=fopen("fseek.txt","w")) == NULL) {
      printf("Datei konnte nicht geoeffnet werden.\n");

   }else{
       printf("Zeiger auf Pos.: %li\n", ftell(datei));
       fputs(zeile1, datei);
       printf("Zeiger auf Pos.: %li\n", ftell(datei));

       fseek(datei, 0, SEEK_SET);
       printf("Zeiger auf Pos.: %li\n", ftell(datei));
       fputs(zeile2, datei);
       printf("Zeiger auf Pos.: %li\n", ftell(datei));

       fseek(datei, -6, SEEK_END);
       printf("Zeiger auf Pos.: %li\n", ftell(datei));
       fputs(zeile3, datei);
       printf("Zeiger auf Pos.: %li\n", ftell(datei));

       fclose(datei);
   }


   return 0;
}
