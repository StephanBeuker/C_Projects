#include<stdio.h>

//nicht so sauber,  da die Namen konstant sein müssen hier als Konstanten definiert, besser ENUMS(nächstes prog)
#define cola 0      //Präprozessoranweisung: Textersetzung
#define icetea 1    //mehr nicht, dann kann man statt 1 überall
#define water 2     //auch zB. Cola schreiben, da es jetzt kontant ist!
#define coffee 3

int main(){


    
    printf("Please enter valide code for any drink: ");
    int selection = scanf("%d",&selection);

    switch (selection)
    {
    case cola: printf("Cola.\n");break;        //ohne break: er schaut sich alle Fälle an
    case icetea: printf("Icetea.\n");break;      //mit break: nach dem "richtigen" Fall hört er auf
    case water: printf("Water.\n");break;       //performanter!
    case coffee: printf("Coffee.\n");break;
    default: printf("You did not enter a valid number.\n");break;
    }

    return 0;
}