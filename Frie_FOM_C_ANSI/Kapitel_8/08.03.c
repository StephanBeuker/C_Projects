#include <stdio.h>
#include <string.h>

int main(){

  char *vNameArray[5] = {"Juergen", "Felix", "Markus", "Pep", "Jupp"};
  char *nNameArray[5] = {"Klopp", "Magath", "Babbel", "Guardiola", "Heynckes"};
  //char vNameArray[5][10] = {"Juergen", "Felix", "Markus", "Pep", "Jupp"};
  //char nNameArray[5][10] = {"Klopp", "Magath", "Babbel", "Guardiola", "Heynckes"};

  char ausgabe[81];

  int i;
  for(i=0; i<5; i++){

      int underline = 80;
      underline = underline - (strlen(vNameArray[i]) + strlen(nNameArray[i]));

      strcpy(ausgabe, vNameArray[i]);

      int j;
      for(j=0; j<underline; j++){
          strcat(ausgabe, "_");
      }

      strcat(ausgabe, nNameArray[i]);

      printf("%s\n", ausgabe);
  }


  return 0;
}
