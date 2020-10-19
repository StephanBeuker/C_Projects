//Variablen und Datentypen
#include<stdio.h>       
#include<stdlib.h>      
#include<limits.h>
#include<float.h>
#include<stdint.h>

int main(void)              
{
    int var;
    //float var;  kann nur 1x deklariert werden
    var = 3.14;
    printf("Hello World.%d\n",var);   

    short counter; //short: je nach architektur gleich lang wie ein int, oder halb so lang
    long don;       //long: auf manchen architketuren geneauso lang wie ein int ....
    char letter;
    int number1;  


    return EXIT_SUCCESS;     
}  