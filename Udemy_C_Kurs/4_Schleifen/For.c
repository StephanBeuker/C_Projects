#include<stdio.h>
#include<stdlib.h>

//For Schleife: WEnn man weiß wie oft etwas ausgeführt wird.
//While Schleife: Wenn man nicht weiß wieviele Durchläufe es geben wird.(zb Spiel, 5 Leben, vielleicht klappts auch eher.)

int main(){
//Startausdruck;Bedingung;Rechenausdruck
    for (int i = 0; i < 10; i++){
        printf("i = %d: Hello my name is Stephan!\n", i);
    }
    printf("\n\n");
    for (int i = 0; i < 12; i += 2){
        printf("i = %d: Hello my name is Stephan!\n", i);
    }
    printf("\n\n");
    for (int i = 0; i <= 12; i += 2){
        printf("i = %d: Hello my name is Stephan!\n", i);
    }
    printf("\n\n");
    for (int i = 10; i > 0; i --){
        printf("i = %d: Hello my name is Stephan!\n", i);
    }
return EXIT_SUCCESS;
}
