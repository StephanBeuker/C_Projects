//Variablen und Datentypen
#include<stdio.h>       
#include<stdlib.h>      

int main(void)              
{
    short counter = 2;                      //short int
    char letter1 = 'a', letter2 = 'b';      //schmale ganze Zahl, 'a'=Zahl im zugrundeliegenden Zeichensatz, die a repräsentiert 
    int number1 = 100000;
    double number2 = 10.0, number3 = 20;

    printf("%hd\n",counter);
    printf("%c, %c\n",letter1, letter2); 
    printf("%d, %f, %f\n",number1, number2, number3);
    printf(counter);    //geht nicht ! leere Ausgabe, Formatierungspezifikator(%...) fehlt!

  

    return EXIT_SUCCESS;     
}    