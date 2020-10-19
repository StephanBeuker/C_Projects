#include<stdio.h>
#define PI 3.14159

// Kreis: Radius vom User einlesen
// Ueberpruefe dabei, ob der User eine "gueltige" Zahl eingegebn hat
// Berechne den Umfang und den Flächeninhalt des Kreises
// Gebe diese Werte dann in der Konsole aus
// u = 2 * r * PI
// a = r**2 * Pi
float userEingabe(){
    printf("Bitte geben Sie einen Radius im folgendem Format ein XXXX.XX: ");
    float u = 0;
    scanf("%f", &u);
    return u;
}
float calculateRadius(float x){
    float y = 0;
    y = 2 * x * PI;
    return y;
}
float calculateFlaeche(float x){
    float y = 0;
    y = x*x * PI;
    return y;
}
void errorMEssage(){
    printf("Falsche Eingabe.");
}
void ausgabe(float b, float a){
    printf("Umfang = %4.2f\nFlaeche = %4.2f", a, b);
}

int main(){
    
    float radius = 0, umfang = 0, flaecheninhalt = 0;
    radius = userEingabe();
    if (radius < 0){errorMEssage();
        return 0;}

    umfang = calculateRadius(radius);
    flaecheninhalt = calculateFlaeche(radius);
    ausgabe(flaecheninhalt, umfang);
}
