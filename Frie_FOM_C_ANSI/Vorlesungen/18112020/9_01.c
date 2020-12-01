//im Anschluss 8.07

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct spender
{
    float betrag;
    char vorname[30];   //scannen in Array
                        //dafür muss Speicehrplattz da sein
    char nachname[30];  //hier Pointer kein scannen möglich
                        //fixer wert zugewiesen unten: dannmuss hier Pointer stehen!!
}; 

int main()
{
    struct spender einSpender;  //

    scanf("%s", einSpender.vorname);
    scanf("%s", einSpender.nachname);
    scanf("%f", );
    printf("Vorname: %s,\nNachname: %s,\nBetrag: %.2f", einSpender.vorname, einSpender.nachname, einSpender.betrag);", einSpender.betrag);
    printf("Vorname: %s,\nNachname: %s,\nBetrag: %.2f", einSpender.vorname, einSpender.nachname, einSpender.betrag);
    printf("\n einSpender %d", &einSpender);
    printf("\n Name %d", &einSpender.nachname);
    printf("\n Vornaeme %d", &einSpender.vorname);



    // einSpender.betrag = 30.0f;
    // einSpender.vorname = "Max";
    // einSpender.nachname= "Mustermann";

    struct spender zweiterSpender = {30, "eins", "zwei"};

    printf("Vorname: %s,\nNachname: %s,\nBetrag: %.2f", einSpender.vorname, einSpender.nachname, einSpender.betrag);
    

    return EXIT_SUCCESS;
}