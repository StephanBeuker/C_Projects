#include <stdio.h>

int main()
{
    //  Rechteck: a,b vom User einlesen
    //  Berechne den Umfang und den Flächeninhalt des Rechtecks
    //  Gebe diese Werte dann in der Konsole aus
    
    //Variablendeklaration:
    float a;
    float b;
    float c;
    float permimeter;
    float area;
    //Eingabe:
    printf("Please enter value for lenght (side a/type float):");
    scanf("%f", &a);    //Adresse übergeben
    printf("Please enter value for lenght (side b/type float):");
    scanf("%f", &b);    //Adresse übergeben
    printf("        ****CALCULATING ****             \n");

    //Berechnung:

    permimeter = 2 * a + 2 * b;
    area = a * b;

    //Ausgabe:
    printf("Calcualtet area is = %1.2f\n", area);
    printf("Calcualtet scope is = %1.2f\n", permimeter);
    //alternative Ausgabe:
    //printf("The Perimeter is %f and the area is %f", perimeter, area); <- zwei Ausgaben in einer Zeile
    
    return 0;
}