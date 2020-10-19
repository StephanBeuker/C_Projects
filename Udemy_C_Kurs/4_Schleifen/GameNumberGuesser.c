#include<stdio.h>
#include<stdlib.h>

int main(){

    //Spiel Ratezahlen:
    int n_rounds = 5 ;
    int i = 0 ;
    int goal = rand() % 20 + 1; //Generiert Zahlen aus dem Intervall [1, 20]
    int selection;              //%20 -> der Rest beim Teilen durch 20 => 0-19
                                //=> 19+1 -->Intervall [0, 20]
    
    // int goal = rand();  [0,RAND_MAX]     //Pseudozufällig, auf aktuellen times generiert!
    // goal = goal %20;    [0, 19]
    // goal ++;            [0,20]
    
    //do-while immer mindesten 1x ausgeführt!
    do
    {
        printf("Pls enter a integer number in [1,20]");
        scanf("%d", &selection);    
        fflush(stdin);fflush(stdin);

        if ((selection >= 20) || (selection <= 1))
        {
            printf("You did not enter a valid number!\nPls try again\nYou have %d guesses left\n", n_rounds - (i+1));
            i++;fflush(stdin);
            continue;
        }
        

        if (selection == goal)
        {
            printf("Correct!\n");
            break;
        }
        else if(selection < goal)
        {
            printf("Incorrect!\nThe right number ist greater than yours.\nYou have %d guesses left\n", n_rounds - (i+1));
        }
        else if(selection > goal)
        {
            printf("Incorrect!\nThe right number ist smaller than yours.\nPls try again\nYou have %d guesses left\n", n_rounds - (i+1));
        }
        i++;

    }while(i < n_rounds);                               
    
    printf("Correct number is: %d", goal);
    return 0;
}