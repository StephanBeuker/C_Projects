#include<stdio.h>

int main(){
    //  Cola=Wert 0, Icetea =Wert 1, usw...
    //Best Practice: Enums genau für sowas gemacht.
    enum Drink {cola, icetea, water, coffee};
    
    printf("Please enter valide code for any drink: ");
    int selection = 0;
    scanf("%d",&selection);

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