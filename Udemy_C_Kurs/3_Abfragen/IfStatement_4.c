#include<stdio.h>
int main(){

    int age_Stephan = 38;
    int age_Steffi = 35;
    int age_Finn = 0;

    //Whos age is div. with 2
    //a % 2 = 0 -> Zahl durch zwei teilbar

    //Eine Möglichkeit die If Statements zu verkürzen, etwas aufwändig
    // if ((age_Stephan % 2) == 0) printf("Stephans age is even.\n");
    // else printf("Stephans age is odd.\n");
    
    // if ((age_Steffi % 2) == 0) printf("Steffi age is even.\n");
    // else printf("Steffi age is odd.\n");

    // if ((age_Finn % 2) == 0) printf("Finn age is even.\n");
    // else printf("Finn age is odd.\n");

    //noch kürzere If-Abfrage: Best practice im Umgang mit Zahlen, nicht mit printf-statements

 //logischer zu evaluierender               If-Fall                                 Else-FAll
         //Ausdruck                         1                                       0
    ((age_Stephan % 2 ) ==0) ? printf("Stephans age is even.\n") : printf("Stephans age is odd.\n");

    //Einziger Trinärer Operator

    return 0;
}