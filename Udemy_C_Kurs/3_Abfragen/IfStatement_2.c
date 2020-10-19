#include<stdio.h>
int main(){

    int age_Stephan = 38;
    int age_Steffi = 35;
    int age_Finn = 0;

    //who is the youngest person?
    // && : Conjunction (Konjunktion),  logical AND operator
    // || : Disjunction (Disjunktion),  logical OR operator
    // ! : Negation (Negation),         logical NOT operator
    if((age_Stephan < age_Steffi) && (age_Stephan < age_Finn)){
        printf("Stephan is the youngest person!");
    }
    else if((age_Steffi < age_Stephan) && (age_Steffi < age_Finn)){
        printf("Steffi is is the youngest person!");
    }
   else if((age_Finn < age_Stephan) && (age_Finn < age_Steffi)){
        printf("Finn is is the youngest person!");
    }
    else{
        //true wenn einer der Klammern wahr ist
        if((age_Stephan == age_Steffi) && (age_Finn == age_Stephan)){
            printf("All of the three persons have the same age!");    
        }
        else{ 
            printf("There are 2 persons with the same age!");    
        }
    }
    return 0;
}