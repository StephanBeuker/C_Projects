#include <stdio.h>
#include <stdlib.h>

int main(){

    char string[] = "Paris 111, Berlin 6, London 16, Rom 28";
    char delimiter[] = ",";
    char *ptr;
    int summe = 0;
    ptr=strtok(string, delimiter);

    while (ptr != NULL)
    {
        printf("Abschnitt: %s\n", ptr);
        ptr=strchr(ptr, ' ');
        ptr++;
        printf("Zahl:%s", ptr);
        summe +=atoi(ptr);
        ptr=strtok(NULL, delimiter);
    
    
    }
    printf("Summe: %d", summe);

    return 0;
}