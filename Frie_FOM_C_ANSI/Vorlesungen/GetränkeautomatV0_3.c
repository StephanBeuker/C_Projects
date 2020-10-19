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
    
    
    fflush(stdin);

    //DisplayAusgabe:
    switch (eingabe){
    case 1:
        printf("Bitte werfen Sie %.2f Euro ein.\n", wasserPreis);
        break;
    case 2:
        printf("Bitte werfen Sie %.2f Euro ein.\n", limonadenPreis);
        break;
    case 3:
        printf("Bitte werfen Sie %.2f Euro ein.\n", bierPreis);
        break;
    default:  printf("Falsche Eingabe.\n");
    }

    //Auswahl über Tastenfeld:
    float einwurf;
    scanf("%f", &einwurf);
    fflush(stdin);

    //Überprüfung Einwurf ausreichend:
    switch (eingabe){
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
    }

    //Kontrolle ob Einwurf ausreicht:
    /*if (eingabe == 1)
    {
        if (einwurf >= wasserPreis)
        {
            //DisplayAusgabe:
            printf("Bitte entnehmen Sie Ihr Getraenk.\n");
            //Funktion Getränk der Wahl ausgeben:

        }
        else if(einwurf < wasserPreis)
        {
            //DisplayAusgabe:
            printf("Sie haben zu wenig Geld eingeworfen.\n");
            //Funktion Getränk der Wahl ausgeben:
        }
        else
        {
            //DisplayAusgabe: Error.
            printf("Falsche Eingabe.");
        }
    }
    else if (eingabe == 2)
    {
        if (einwurf >= limonadenPreis)
        {
            //DisplayAusgabe:
            printf("Bitte entnehmen Sie Ihr Getraenk.\n");
            //Funktion Getränk der Wahl ausgeben:
        }
        else if(einwurf < limonadenPreis)
        {
            //DisplayAusgabe:
            printf("Sie haben zu wenig Geld eingeworfen.\n");
            //Funktion Getränk der Wahl ausgeben:
        }
        else
        {
            //DisplayAusgabe: Error.
            printf("Falsche Eingabe.");
        }
    }
    else 
    {
        if (einwurf >= bierPreis)
        {
            //DisplayAusgabe:
            printf("Bitte entnehmen Sie Ihr Getraenk.\n");
            //Funktion Getränk der Wahl ausgeben:
        }
        else if(einwurf < bierPreis)
        {
            //DisplayAusgabe:
            printf("Sie haben zu wenig Geld eingeworfen.\n");
            //Funktion Getränk der Wahl ausgeben:
        }
        else
        {
            //DisplayAusgabe: Error.
            printf("Falsche Eingabe.");
        }
    }*/
 
    return 0;
}