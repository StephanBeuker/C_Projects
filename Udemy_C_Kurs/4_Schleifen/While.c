#include<stdio.h>
//Schleifen, Inkrementoperator und Dekrementoperator
//Abbruch mit --> strg + c <--
int main(){

    int n_rounds = 10;
    int i = 1;
    while(i <= n_rounds){
        printf("You are in round %d\n", i);
        i++;
    }
    printf("Am Ende ist i = %d", i);


    return 0;
}