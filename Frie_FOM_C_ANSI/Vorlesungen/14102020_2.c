#include <stdio.h>
#include <stdlib.h>

//Erste FUnktion

float eingabezahl(){
float eingabe;
printf("Geben Sie eine Zahl ein:");
scanf("%f", &eingabe);
fflush(stdin);
return eingabe;

}
float multiliziere(float a, float b){
return a*b;
}
void ausgabeErgebnis(float a){
printf("Das Ergebnis lautet: %.3f", a);
}


int main() {

    float zahl1 = eingabezahl();
    float zahl2 = eingabezahl();
    float ergebnis = multiliziere(zahl1, zahl2);
    ausgabeErgebnis(ergebnis);

    //auchmöglich : verschachteln!
    //ausgabeergebnis(multipliziere(eingabezahl1(),eingabezahl2()));

    return 0;
}