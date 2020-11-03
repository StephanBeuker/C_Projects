#include <stdio.h>
#include <stdlib.h>

void add(double *value1, double *value2, double add_value)
{
    *value1 += add_value; //*content (value) of the variable that isw pointed to
    *value2 += add_value;
}

int main()
{
    double my_value1 = 3.0;
    double my_value2 = 2.0;
    double my_add_value = 1.3;

    add(&my_value1, &my_value2, my_add_value);

    printf("%lf\n", my_value1);
    printf("%lf\n", my_value2);
    printf("____________________\n");
    //_________________________________________________________________________

    int a = 1; //0x01
    int b = 2;
    int c = 3;

    //p_d poinst to the memory location of variable a
    //*p_d is the content of the memory location
    int *p_d = &a;                              //p_d points to 0x01
    printf("Speicheradresse p_d: 0x%x\n", p_d); //0xfffcc14
    printf("Speicheradresse a  : 0x%x\n", &a);  //0xfffcc14
    printf("Wert p_d: %d\n", *p_d);
    printf("Wert 1  : %d\n", a);
    printf("____________________\n");

    int *p_e = &b;
    int *p_f = &c;
    printf("Wert p_d: %d\n", *p_d); //1
    printf("Wert p_d: %d\n", *p_e); //2
    printf("Wert p_d: %d\n", *p_f); //3
    printf("____________________\n");
    //p_d = 2 * p_e + 3 * p_f : geht so nicht, da ja Speicheradressen gespeichert sind.
    *p_d = 2 * *p_e + 3 * *p_f;
    printf("Wert p_d: %d\n", *p_d); //13
    printf("Wert p_d: %d\n", *p_e); //2
    printf("Wert p_d: %d\n", *p_f); //3
    printf("____________________\n");
    p_d = &b;
    printf("Wert p_d: %d\n", *p_d); //2
    printf("Wert p_d: %d\n", *p_e); //2
    printf("Wert p_d: %d\n", *p_f); //3
    printf("____________________\n");
    return EXIT_SUCCESS;
}