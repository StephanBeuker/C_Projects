#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {

    char string[] = "Paris 111,Berlin 6,London 16,Rom 28";
    char delimiter[] = ",";
    char *ptr;

    //char spanset[] = "1234567890";
    int sum = 0;

    // initialisieren und ersten Abschnitt erstellen
    ptr = strtok(string, delimiter);

    while(ptr != NULL) {
      printf("Abschnitt gefunden: %s\n", ptr);

     // int len = strcspn(ptr, spanset);
      //ptr+=len;

      ptr = strrchr(ptr, ' ');
      ptr++;

      printf("Zahl: %s\n", ptr);
      sum+= atoi(ptr);

      // naechsten Abschnitt erstellen
      ptr = strtok(NULL, delimiter);
    }

    printf("Die Summe lautet: %i\n", sum);

    return 0;
}

