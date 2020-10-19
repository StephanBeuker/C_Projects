#include <stdio.h>
#include <stdlib.h>
int main()
{
    //3.09
    //Getränkepreise:
    float wasserPreis = 0.50; 
    float limonadenPreis = 1.00; 
    float bierPreis = 2.00;
    
    //DisplayAusgabe:
    printf("Waehlen Sie Ihr Getraenk aus:\n");
    printf("     1)     Wasser(%.2f Euro)\n",wasserPreis);
    printf("     2)     Limonade(%.2f Euro)\n",limonadenPreis);
    printf("     3)     Bier(%.2f Euro)\n",bierPreis);
    printf("Wählen Sie aus 1, 2 oder 3: ");
    
    //Auswahl über Tastenfeld:
    int eingabe;
    scanf("%d", &eingabe);
    
    //Auswahl der Menge:
    int eingabeMenge;
    printf("Geben Sie die gewünschte Menge ein:");
    scanf("%d", eingabeMenge);


    fflush(stdin);

    //DisplayAusgabe:
    switch (eingabe){
    case 1:
        printf("Bitte werfen Sie %.2f Euro ein.\n", wasserPreis*eingabeMenge);
        break;
    case 2:
        printf("Bitte werfen Sie %.2f Euro ein.\n", limonadenPreis*eingabeMenge);
        break;
    case 3:
        printf("Bitte werfen Sie %.2f Euro ein.\n", bierPreis*eingabeMenge);
        break;
    default:  printf("Falsche Eingabe.\n");
    }

    float preisWasserMenge = wasserPreis*eingabeMenge;
    float preisLimonadeMenge = limonadenPreis*eingabeMenge;
    float preisBierMEnge = bierPreis*eingabeMenge;


    //Bezahlvorgang
    float einwurf;
    float einwurfZ=0;
    scanf("%f", &einwurf);
    fflush(stdin);
    switch (eingabe){
    case 1:
            while (einwurf < preisWasserMenge)
            {   
              printf("Bitte werfen Sie noch ein Geldstück ein:");
              scanf("%d", einwurfZ);
        
             float geldImSchacht = einwurf + einwurfZ;
             printf("Es fehlen noch %d", preisWasserMenge-geldImSchacht);
             }
             break;
    case 2:
            while (einwurf < preisLimonadeMenge)
            {   
              printf("Bitte werfen Sie noch ein Geldstück ein:");
              scanf("%d", einwurfZ);
        
             float geldImSchacht = einwurf + einwurfZ;
             printf("Es fehlen noch %d", preisLimonadeMenge-geldImSchacht);
             }
             break;
     case 3:
            while (einwurf < preisBierMEnge)
            {   
              printf("Bitte werfen Sie noch ein Geldstück ein:");
              scanf("%d", einwurfZ);
        
             float geldImSchacht = einwurf + einwurfZ;
             printf("Es fehlen noch %d", preisBierMEnge-geldImSchacht);
             }
             break;







    //Überprüfung Einwurf ausreichend:
    /*switch (eingabe){
    case 1:
       if (einwurf >= wasserPreis)
        {
            //DisplayAusgabe:
            printf("Bitte entnehmen Sie Ihr Getraenk.\n");
            //Rückgeldberechnung -> DisplayAusgabe.
            if (einwurf > wasserPreis)
            {
                printf("Ihr Rückgeld beträgt %.2f Euro.", einwurf - wasserPreis);
            }
            //Funktion Getränk der Wahl ausgeben:

        }
        else if(einwurf < wasserPreis)
        {
            //DisplayAusgabe:
            printf("Sie haben zu wenig Geld eingeworfen.\n");
        }
        else
        {
            //DisplayAusgabe: Error.
            printf("Falsche Eingabe.");
        }
        break;
    case 2:
        if (einwurf >= limonadenPreis)
        {
            //DisplayAusgabe:
            printf("Bitte entnehmen Sie Ihr Getraenk.\n");
            //Rückgeldberechnung -> DisplayAusgabe.
            if (einwurf > limonadenPreis)
            {
                printf("Ihr Rückgeld beträgt %.2f Euro.", einwurf - limonadenPreis);
            }
            //Funktion Getränk der Wahl ausgeben:

        }
        else if(einwurf < limonadenPreis)
        {
            //DisplayAusgabe:
            printf("Sie haben zu wenig Geld eingeworfen.\n");
        }
        else
        {
            //DisplayAusgabe: Error.
            printf("Falsche Eingabe.");
        }
        break;
    case 3:
        if (einwurf >= bierPreis)
        {
            //DisplayAusgabe:
            printf("Bitte entnehmen Sie Ihr Getraenk.\n");
            //Rückgeldberechnung -> DisplayAusgabe.
            if (einwurf > bierPreis)
            {
                printf("Ihr Rückgeld beträgt %.2f Euro.", einwurf - bierPreis);
            }
            //Funktion Getränk der Wahl ausgeben:

        }
        else if(einwurf < bierPreis)
        {
            //DisplayAusgabe:
            printf("Sie haben zu wenig Geld eingeworfen.\n");
        }
        else
        {
            //DisplayAusgabe: Error.
            printf("Falsche Eingabe.");
        }
        break;
    default:  //DisplayAusgabe: Error.
            printf("Falsche Eingabe.");
    }*/

  
    return 0;
}
