#include<stdio.h>

int main(){

    int cola = 0;
    int icetea = 1;
    int water = 2;
    int coffee = 3;

    
    printf("Please enter valide code for any drink: ");
    int selection = scanf("%d",&selection);

    switch (selection)
    {
    case 0: printf("Cola.\n");break;        //ohne break: er schaut sich alle Fälle an
    case 1: printf("Icetea.\n");break;      //mit break: nach dem "richtigen" Fall hört er auf
    case 2: printf("Water.\n");break;       //performanter!
    case 3: printf("Coffee.\n");break;
    default: printf("You did not enter a valid number.\n");break;
    }

    return 0;
}