
#include <stdio.h>

int main()
{
  int paare[][2]={{1,2},{3,4},{5,6},{7,8},{9,10}};


  int size1 = sizeof(paare)/sizeof(paare[0]);
  printf("Anzahl Zeilen: %i\n", size1);

  int size2 = sizeof(paare[0])/sizeof(int);
  printf("Anzahl Spalten: %i\n\n", size2);


   return 0;
}
