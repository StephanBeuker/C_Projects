#include<stdio.h>

int main(){

    //Spiel Ratezahlen:
    int n_rounds = 5 ;
    int i = 0 ;
    int goal = 13;
    int selection;

    
    
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
        else
        {
            printf("Incorrect!\nPls try again\nYou have %d guesses left\n", n_rounds - (i+1));
        }
        i++;

    }while(i < n_rounds);                               
    
    return 0;
}