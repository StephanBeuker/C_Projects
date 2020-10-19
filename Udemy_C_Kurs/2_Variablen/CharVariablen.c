#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    
    char buchstabe_A = 'A';

    printf("Buchstabe: %d\n", buchstabe_A); //65    
    printf("Buchstabe: %c\n", buchstabe_A); //%c -> Char: A

    char buchstabe_Z = buchstabe_A + 25;

    printf("Buchstabe: %d\n", buchstabe_Z); //90
    printf("Buchstabe: %c\n", buchstabe_A); //Z

    char buchstabe_B = 66;

    printf("Buchstabe: %d\n", buchstabe_B); //66    
    printf("Buchstabe: %c\n", buchstabe_B); //B

    //Char ist eigentlich ein int, also eine ganze Zahl die einem Wert ind er ASCII-Tabelle entspricht.
    //char name = 'Stephan'; //funktioniert nicht, da es keinen Eintrage namens 'Stephan' in ASCII 
                            //gibt, sondern nur S und t usw.
    //char name2 = "Stephan"; //Char[8], also ein CharArray, aber auch Error ;)

    buchstabe_A = 0x41;
    printf("Buchstabe: %d\n", buchstabe_A); // 65
    printf("Buchstabe: %c\n", buchstabe_A); // A
    printf("Buchstabe: %x\n", buchstabe_A); //Hexadezimal: 41

    return 0;
}  