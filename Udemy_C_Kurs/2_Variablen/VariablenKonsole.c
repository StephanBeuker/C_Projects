#include <stdio.h>

int main()
{
//  %f      -> FLOAT
//  %
//  \n      -> Zeilenumbruch

float a = 5.0;
float b = 13.0;
float c;

//Multiplikation
c = a * b; //65
printf("Der Inhalt von c = %f\n",c);        //%f Ausgabe float
                                            //\n neue Zeile
//Division
c = a / b ;
printf("Der Inhalt von c = %2.2f\n",c);

//Addition
c = a + b ;
printf("Der Inhalt von c = %2.2f\n",c);

//Subtraktion
c = a - b ;
printf("Der Inhalt von c = %2.2f\n",c);

int x = 1;
double y = 2.0;
unsigned int z = 3;
float alpha = 4.0;

printf("Der Inhalt von x = %d\n",x);    //%d oder %i für integer
printf("Der Inhalt von y = %f\n",y);    //%f geht auch für Ausgabe Double,aber Wertebereich verringert 
                                        //%lf für double = long float
printf("Der Inhalt von z = %d\n",z);
printf("Der Inhalt von alpha = %lf\n",alpha);   //longfloat lf  Ausgabe möglich


return 0;
}