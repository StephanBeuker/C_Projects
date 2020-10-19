#include <stdio.h>
#include <stdlib.h>
int main()
{
    //3.09
    int b;
    printf("Eingabe der Note:\n");
    scanf("%d", &b);
    
    switch (b){
    case 10: printf("sehr gut\n");
        break;
    case 9: printf("gut\n");
        break;
    case 8: printf("befriedigend\n");
        break;
    case 7: printf("ausreichend\n");
        break;
    case 6: printf("mangelhaft\n");
        break;
    case 5:
    case 4:
    case 3: 
    case 2:
    case 1: printf("ungenuegend\n");
        break;
    default: printf("falsche Eingabe\n");
        
    }
    

    //3.10   ein Case ist immer ein Fall.
    int d;
    printf("Eingabe des Wochentags:\n");
    scanf("%d", &d);
    switch (d){
    case 7: printf("Montag\n");
        break;
    case 6: printf("Dienstag\n");
        break;
    case 5: printf("Mittwoch\n");
        break;
    case 4: printf("Donnerstag\n");
        break;
    case 3: printf("Freitag\n");
        break;
    case 2: printf("Samstag\n");
        break;
    case 1: printf("Sonntag\n");
        break;
    default: printf("falsche Eingabe\n");
        break;
    }

    //3.11
    switch (d)
    {
    case 7:
    case 6:  printf("Wochende\n");
        break;
    case 5: 
    case 4: printf("zweite Wochenhälfte\n");
        break;
    case 3:
    case 2:
    case 1: printf("Erste Wochenhälfte\n");
        break;
    default: printf("falsche Eingabe\n");
        break;
    }
    return 0;
}