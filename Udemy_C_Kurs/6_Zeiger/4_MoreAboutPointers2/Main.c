#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Pointerarithmetik: * und &, oder wie man Pointer richtrig benutzt:

int main()
{

    int a = 1; //zb 0x01
    int b = 2;
    int c = 3;

    //p_d points to the variable location of variable a
    //*p_d is the content of the memory location
    int *p_d = &a; //p_d points to 0x01
    int *p_e = &b;
    int *p_f = &c;

    printf("0x%x\n", &a);  //0xffffcc2c
    printf("0x%x\n", p_d); //0xffffcc2c
    printf("%d\n", *p_d);  //1

    printf("%d\n", *p_d);
    printf("%d\n", *p_e);
    printf("%d\n", *p_f);

    //p_d = 2 * p_e + 3 * p_f = 13  geht so nicht, da man Speicheradressen nicht kopieren kann
    // ->deshalb *-Operator benutzen

    *p_d = 2 * *p_e + 3 * *p_f;

    printf("%d\n", *p_d);
    printf("%d\n", *p_e);
    printf("%d\n", *p_f);

    //wie ist jetzt der Inhalt der Variable a?
    printf("%d\n", a); //13, da der Pointer den Wert verändert hat

    //Jetzt soll p_d auf b zeigen:
    p_d = &b;
    printf("%d\n", *p_d); //2, da der pointer jetzt auf Speicheradresse von b(=2) zeigt
        //man kann pointer auch verwenden um auf Variablen zu zeigen, die ggf zu verändern und dann woanders hin zu zeigen

    p_f = &a;
    //p_d -> b(2); p_f(13) -> a
    *p_e = *p_d + *p_f;   //the content of the memory location of p_e is set  to 15
    printf("%d\n", *p_e); // 15

    //Wenn zwei poite auf die gleiche Adresse zeigen und ein pointer ändert den Wert der Adresse ist der WErt des anderen Pointers auch geändert !!!!

    return EXIT_SUCCESS;
}
