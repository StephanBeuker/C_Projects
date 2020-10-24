#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "HeaderSB.h"
#define PI 3.141592653589793

//  Argument:            
//  Dateityp Argument:  void
//  Returntype:         int
int enterNumberInt(){
printf("Bitte geben Sie eine Zahl ein: ");
int a = 0;
scanf("%d",&a);
return a;
}

//  Argument:            
//  Dateityp Argument:  void
//  Returntype:         int
float enterNumberFloat(){
printf("Bitte geben Sie eine Zahl ein: ");
float a = 0;
scanf("%f",&a);
return a;
}

//  Argument:           Radius
//  Dateityp Argument:  float
//  Returntype:         float
float calcSurfaceCircle(float a){
float b = 0;
return b = PI * 2 * a;
}

//  Argument:           Radius
//  Dateityp Argument:  float
//  Returntype:         float
float calcAreaCircle(float a){
float b = 0;
return b = PI * pow(a,2);
}

//  Argument:           Tage
//  Dateityp Argument:  int
//  Returntype:         void
void printcalcDaysToSeconds(int tage){
    int stunden=tage*24;
	int minuten=stunden*60;
	int sekunden=minuten*60;

	printf("\nDas sind:\n");
	printf("%i Stunden oder\n",stunden);
	printf("%i Minuten oder\n",minuten);
	printf("%i Sekunden\n\n",sekunden); 
}

//  Argument:           Sekunden
//  Dateityp Argument:  int
//  Returntype:         void
void printcalcSecondsToDays(int sekunden){
    int tage=sekunden/(24*60*60);
	sekunden=sekunden%(24*60*60);

    int stunden=sekunden/(60*60);
	sekunden=sekunden%(60*60);
    int minuten=sekunden/60;
	sekunden=sekunden%60;

	printf("\nDas sind:\n");
	printf("%i Tage und\n",tage);
	printf("%i Stunden und\n",stunden);
	printf("%i Minuten und\n",minuten);
	printf("%i Sekunden.\n",sekunden);
}

//  Argument:           zwei Zahlen
//  Dateityp Argument:  float
//  Returntype:         void
void printCompareNumbers(float a, float b){
    if (a < b){
        printf("Die erste Zahl (%.2f) ist kleiner als die zweite Zahl (%.2f)\n", a, b);
        printf("\n");
    }
    else if (b < a){
        printf("Die zweite Zahl (%.2f) ist kleiner als die erste Zahl (%.2f)\n", b, a);
        printf("\n");
    }
    else{
        printf("Beide Zahlen sind gleich gross\n");
        printf("\n");
    }
}

//  Argument:           drei Zahlen
//  Dateityp Argument:  int
//  Returntype:         void
void printSmallestNumber(int a, int b, int c){
    a = (a=a<b?a:b)<c?a:c;
    printf("Die kleinste Zahl lautet %d.", a);
}

//  Argument:           drei Zahlen
//  Dateityp Argument:  int
//  Returntype:         void
void printBiggestNumber(int a, int b, int c){
    if(b>a)
        a = b;
    if(c>a)
        a = c;

    printf("Die groesste Zahl lautet %d.", a);
}

//  Argument:           Zahl zwischen 1 und 10
//  Dateityp Argument:  int
//  Returntype:         void
void printgrades(int punkte){
    switch (punkte)
	{
		case 1:
		case 2:
		case 3:
        case 4:
        case 5:
			printf("ungenuegend\n");
			break;
        case 6:
            printf("mangelhaft");
            break;
		case 7:
            printf("ausreichend\n");
			break;
		case 8:
			printf("befriedigend\n");
			break;
		case 9:
            printf("gut\n");
			break;
		case 10:
			printf("sehr gut\n");
			break;
		default:
			printf("fehlerhafte Eingabe\n");
	}
}

//  Argument:           Zahl zwischen 1 und 7
//  Dateityp Argument:  int
//  Returntype:         void
void printweekday(int tagNummer){
    switch (tagNummer)
	{
		case 1: printf("Das ist ein Montag.\n");
		break;
		case 2: printf("Das ist ein Dienstag.\n");
		break;
		case 3: printf("Das ist ein Mittwoch.\n");
		break;
		case 4: printf("Das ist ein Donnerstag.\n");
		break;
		case 5: printf("Das ist ein Freitag.\n");
		break;
		case 6: printf("Das ist ein Samstag.\n");
		break;
		case 7: printf("Das ist ein Sonntag.\n");
		break;
		default: printf("Keine gueltige Nummer f�r einen Wochentag.\n");
	}
}

//  Argument:           
//  Dateityp Argument:  void
//  Returntype:         void
void printNum1to25(){
    int i=1;

	while (i<=25)
	{
		printf("%d\n",i);
		i++;
	}
}

//  Argument:           zähle von x bis y
//  Dateityp Argument:  void
//  Returntype:         void
void printNumXtoY_1(int x, int y){
    int i=x;

	while (x<=y)
	{
		printf("%d\n",x);
		x++;
	}
}

//  Argument:           zähle von x bis y
//  Dateityp Argument:  void
//  Returntype:         void
void printNumXtoY_2(int x, int y){
 	int i=x;

		do
		{
			printf("%d\n",x);
			x++;
		}
		while (x<=y);
}

//  Argument:           zähle von x bis y
//  Dateityp Argument:  void
//  Returntype:         void
void printNumXtoY_3(int x, int y){
 	int i;

	for (i=x;i<=y;x++)
	{
		printf("%d\n",x);
	}
}

//  Argument:           Seitenlänge Rechteck
//  Dateityp Argument:  int
//  Returntype:         void
void printRectangleStars1(int k){
   int i=1, j=1;

	while (i<=k)
	{
		while (j<=k)
		{
			printf("*");
			j++;
		}
		printf("\n");
		i++;
		j=1;
	}
}

//  Argument:           Seitenlänge Rechteck
//  Dateityp Argument:  int
//  Returntype:         void
void printRectangleStars2(int k){
   int i, j;
	for (i=0; i<k; i++)
	{
		for(j=0; j<k; j++)
		{
            printf("*");
        }
        printf("\n");
	}
}

//  Argument:           Seitenlänge Rechteck
//  Dateityp Argument:  int
//  Returntype:         void
void printRectangleStars3(int k){
  int i, j;

	for (i=0; i<k; i++)
	{
		for(j=0; j<k; j++)
		{
            printf("*");
        }
        printf("\n");
	}
}

//  Argument:           
//  Dateityp Argument:  void
//  Returntype:         void
void scanPrintSmallestBiggestNumber(){
    int kleinste=0, groesste=0, zahl=0;

	while(1){

        printf("Bitte Zahl eingeben, oder 0 zum Beenden.\n");
	    scanf("%i", &zahl);

        if(zahl==0)
            break;

        if(zahl<kleinste || kleinste==0)
            kleinste=zahl;

        if(zahl>groesste || groesste==0)
            groesste = zahl;
    }
	printf("Groesste: %i\n", groesste);
	printf("Kleinste: %i\n", kleinste);
}

//  Argument:           Wie oft Zahl 1 teilbar durch Zahl 2?
//  Dateityp Argument:  int
//  Returntype:         int
int calculateDivisions(int zahl, int k){
    int anzahl=0;
	while(zahl%k==0 && zahl != 0){
        anzahl++;
        zahl = zahl/k;

    }
}

//  Argument:           1x1 von x bis y
//  Dateityp Argument:  int
//  Returntype:         void
void printMultiplicationFromTO(int x, int y){
     int i, j;

	for (i=x; i<=y; i++)
	{
		for(j=x; j<=y; j++)
		{
            printf("%i * %i = %i\n", i, j, i*j);
        }
        printf("\n");
	}
}

//  Argument:           Fakultät von
//  Dateityp Argument:  int
//  Returntype:         void
void printFakultaet(int n){
    int i;
    int ergebnis = 1;

    for(i=1; i<=n; i++){
        ergebnis = ergebnis * i;
    }

    printf("Ergebnis: %i", ergebnis);
}

//  Argument:           Fakultät von
//  Dateityp Argument:  int
//  Returntype:         void
void printFakultaet_rek(int n){
    printf("Keine Logik implementiert!");
}

//  Argument:           Fibonaccifolge bis
//  Dateityp Argument:  int
//  Returntype:         void
void printFibonacci(int n){
    int vorvor=0;
    int vor=1;
    int fib=0;
    int i;

    if(n==0 || n==1){
        printf("f von %d ist %d", n, n);

    }else{

        for(i=2;i<=n;i++){

            fib=vorvor+vor;
            vorvor=vor;
            vor=fib;
        }

        printf("f von %d ist %d\n\n", n, fib);
    }
}

//  Argument:           Fibonacciergebnis von
//  Dateityp Argument:  int
//  Returntype:         int
int fibo(int n){

   if(n==0 || n==1){
    return n;

   }else{
      return (fibo(n-1)+fibo(n-2));
   }
}

//  Argument:           Zahl1, Zahl2
//  Dateityp Argument:  float
//  Returntype:         float
float multiply(float zahl1, float zahl2){
	return (zahl1 * zahl2);
}

//  Argument:           Zahl1, Zahl2
//  Dateityp Argument:  float
//  Returntype:         float
float divide(float zahl1, float zahl2){
	return (zahl1 / zahl2);
}

//  Argument:           Zahl1, Zahl2
//  Dateityp Argument:  float
//  Returntype:         float
float substract(float zahl1, float zahl2){
	return (zahl1 - zahl2);
}

//  Argument:           Zahl1, Zahl2
//  Dateityp Argument:  float
//  Returntype:         float
float add(float zahl1, float zahl2){
	return (zahl1 + zahl2);
}

//  Argument:           Zahl1, Zahl2
//  Dateityp Argument:  int
//  Returntype:         int
int ggt_rek(int a, int b){
    if(a==b){
        return a;
    }
    else if(a<b){
        return ggt(a, b-a);
    }
    else{
        return ggt(a-b, b);
    }
}