#include <stdio.h>
#include <stdlib.h>

#include "FunctionsBib.h"

//Methode zur Berechnung des Minimums zweier Zahlen
void calcMinimum(){
    int a = userEingabeZahl();
    int b = userEingabeZahl();
    if (a > b){
        printf("Die Berechnung des Minimums führte zu folgendem Ergebnis:\n");
        printf("Das Maximum aus %d und %d beträgt %d.\n", a,b,a);
    }
    else if (a < b){
        printf("Die Berechnung des Minimums führte zu folgendem Ergebnis:\n");
        printf("Das Maximum aus %d und %d beträgt %d.\n", a,b,b);
    }
    else{
        printf("Die Berechnung des Minimums führte zu folgendem Ergebnis:\n");
        printf(" %d und %d haben den gleichen Wert.\n", a,b);
    }
}

//Methode zur Berechnung des Maximums zweier Zahlen
void calcMaximum(){
    int a = userEingabeZahl();
    int b = userEingabeZahl();
    if (a < b){
        printf("Die Berechnung des Maximum führte zu folgendem Ergebnis:\n");
        printf("Das Minimums aus %d und %d beträgt %d.\n", a,b,a);
    }
    else if (a < b){
        printf("Die Berechnung des Maximum führte zu folgendem Ergebnis:\n");
        printf("Das Minimums aus %d und %d beträgt %d.\n", a,b,b);
    }
    else{
        printf("Die Berechnung des Maximum führte zu folgendem Ergebnis:\n");
        printf(" %d und %d haben den gleichen Wert.\n", a,b);
    }
}

//Methode zur Berechnung des Mittelwerts zweier Zahlen
void calcMittelwert(){
    int a = userEingabeZahl();
    int b = userEingabeZahl();
    int c = (a+b)/2;
    printf("Die Berechnung des Mittelwertes führte zu folgendem Ergebnis:\n");
    printf("Der Mittelwert aus %d und %d beträgt %d.\n", a,b,c);
}

//Methode zur Usereingabe
void userEingabeAuswahl(){
    int a = 0;
    scanf("%d", &a);
    while (1)
    {
        switch (a)
        {
        case 1:
            calcMinimum();
            break;
        case 2:
            calcMaximum();
            break;
        case 3:
            calcMittelwert();
            break;
        default:
            printf("Bitte geben Sie einen Wert zwischen eins und drei ein: \n");
            scanf("%d", &a);
            break;
        }
    }       
}

//Methode zur Eingabe der zu berechnenden Zahlen
int userEingabeZahl(){
    printf("Bitte geben Sie einen Wert im positiven Integerbereich ein:");
    int a = 0;
    scanf("%d", &a);
    while (1)
    {
        if (a > 0){
            return a;

        }
        else
        {
            printf("Inkorrekte Eingabe! \n");
            printf("Try again: ");
            scanf("%d", &a);
        }
    }
    
}

//Methode zur Begrüssung und Abfrage, was gemacht werden soll
void begruessung(){
    printf("Hallo User, du willst ein Minimum, ein Maximum oder den Durchschnitt zweier Zahlen berechnen?\n");
    printf("Bitte wähle die 1 zur Berechnung des Minimums: \n");
    printf("Bitte wähle die 2 zur Berechnung des Maximums: \n");
    printf("Bitte wähle die 3 zur Berechnung des Mittelwerts: \n");

}

//Methode zur Ausgabe des Ergebnisses und Beenden des Programms
void ende(){
    printf("Vielen Dank...");

}