
#include <stdio.h>

int main()
{
    struct kunde
    {
           char name[20];
           char vorname[20];
    };

    struct rechnung
    {
           struct kunde kundeninfos;
           float betrag;
    } rechn;


    // struct rechnung rechn;
    printf("Bitte Kundendaten eingeben (Vorname):\n");
    scanf("%s", rechn.kundeninfos.vorname);
    printf("Bitte Kundendaten eingeben (Nachname):\n");
    scanf("%s", rechn.kundeninfos.name);
    printf("Bitte Rechnungsbetrag eingeben:\n");
    scanf("%f", &rechn.betrag);

    printf("\n\n");
    printf("Rechnungsinformationen\n");
    printf("Kunde: %s %s\n", rechn.kundeninfos.vorname, rechn.kundeninfos.name);
    printf("Betrag: %.2f Euro\n", rechn.betrag);

    return 0;
}
