#include <stdio.h>

int main(int argc, char *argv[])
{
  int zahl;

  printf("Bitte geben Sie eine Zahl ein: ");
  scanf("%d",&zahl);

  if (zahl)
    printf("\n%d ist ein Wahrheitswert fuer wahr\n\n",zahl);
  else
    printf("\n%d ist ein Wahrheitswert fuer falsch\n\n",zahl);


  return 0;
}
