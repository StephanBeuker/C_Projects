#include<stdio.h>
#include<stdlib.h>


int main(){
//Wie oft würde PrintAnweisung gedruckt werden? 3 * 2
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            printf("Hello my name is Stephan!\n");
        }
    }
    //Wie oft würde PrintAnweisung gedruckt werden? 3 * 2 * 4
    //entspricht dem KREUZPRODUKT!!
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            for (int k = 0; k < 4; k++){ //innerste zählt zuerst hoch
                printf("Hello my name is Stephan!\ni = %d\nj = %d\nk = %d\n",i ,j ,k);
            }     
        }
    }
    return EXIT_SUCCESS;
}
