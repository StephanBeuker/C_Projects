
#include <stdio.h>

int main()
{
    struct kunde
    {
           char name[15];
           char vorname[15];
    };
    struct rechnung
    {
           struct kunde kundeninfos;
           float betrag;
    } ;

    struct rechnung rechn;

    printf("Bitte geben Sie die Kundendaten ein!\n");
    printf("Nachname Vorname (durch Leerzeichen getrennt): ");
    scanf("%s %s",rechn.kundeninfos.name,rechn.kundeninfos.vorname);
    printf("Rechnungsbetrag: ");


    scanf("%f",&rechn.betrag);

    printf("\n\n");
    printf("Rechnungsinformationen\n\n");
    printf("Kunde %s %s\n",
                  rechn.kundeninfos.vorname,
                  rechn.kundeninfos.name);
    printf("kaufte fuer %.2f Euro\n\n",rechn.betrag);


    return 0;
}
