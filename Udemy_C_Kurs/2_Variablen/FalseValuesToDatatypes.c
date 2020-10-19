#include <stdio.h>


int main()
{

    char value = 260; //4; Char -128-127 ->Overflow
    printf("%d\n", value);

    value = 200; //8bit=1byte, 2^8 WErte=256 WErte
    printf("%d\n", value);  //-56

    unsigned char uc_value = 200; 
    printf("%d\n", uc_value);   //200, da nicht VZ-behaftet und keine negativen Zahlen zugelassen

    unsigned int ui_value = -26; //richtige Ausgabe -26, HOver mouse over : INT
    printf("%d\n", ui_value);     //Postfix nötig: ui_value = -26u;

    ui_value = -26u;
    printf("%d\n", ui_value);


    return 0;
}