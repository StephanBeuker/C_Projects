#include<stdio.h>
int main(){
    //Zahl durch 3 teilbar, wenn Nein wieviel Rest?
    unsigned int number;
    printf("Please enter a valid unsigned integer: ");
    scanf("%d", &number);

    unsigned int modulo = number % 3;
    switch (modulo)
    {
    case 0: printf("\n%d ist durch 3 ohne Rest teilbar.",number);break;
    case 1: 
    case 2: printf("\n%d ist nicht durch 3 teilbar.Rest = %d", number, modulo);break;
    default: printf("???");
    }


    return 0;
}