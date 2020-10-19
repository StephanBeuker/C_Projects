#include<stdio.h>

// Quadrat: Seitenlänge a vom user einlesen
// Ueberpruefe dabei, ob der User eine "gueltige" Zahl eingelesen hat
// Wenn nicht, gebe dem User solange die Möglichkeit die Zahl einzugeben, bis sie gültig ist
// Berechne den Umfang und den Flächeninhalt des Quadrates
// Gebe dieses Wert dann in der Konsole aus
// u = 4 * a
// a = a * a
void enterNumberText(){
    printf("Hello User, you want to calculate a square?\nNo problemo!\nPlease enter the sidelenght: ");
}
float readNumber(){
    float a;
    scanf("%f", &a);
    return a;
}
int checking(float a){
    int trueorfalse=0;
    if (0.00 < a ){
        trueorfalse = 1;
    }
    return trueorfalse;
}
 float calculationUmfang(float a){
    float b = a *4;
    return b;
}
float calculationFlächeninhalt(float a){
    float b = a * a;
    return b;
}
void ausgabeErgebnis(float a, float b){
    printf("Die Berechnung wurde abgeschlossen.\nDer Umfang betraegt %4.2f m\nDer Flächeninhalt betraegt %4.2f m\n",a, b);
    printf("_________________________________________________");
    printf("\n*********Vielen Dank für Ihre Berechnung*********");
    printf("\n_________________________________________________");
}

int main(){
    
    enterNumberText();
    float userEntry = readNumber();
    int resultOfCheck = checking(userEntry);

    while (resultOfCheck == 0)
    {
        printf("Incorrect Entry, Please try again: ");
        userEntry = readNumber();
        resultOfCheck = checking(userEntry);
    }
    
    float umfang = calculationUmfang(userEntry);
    float flächeninhalt = calculationFlächeninhalt(userEntry);
    ausgabeErgebnis(umfang, flächeninhalt);


    return 0;
}