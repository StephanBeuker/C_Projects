#include <stdio.h>

int main()
{

float a = 5.0;
float n_fache = 10.0;
//a= a * n_fache;   Äquivalent zur nächsten Zeile; Wenn a links und rechts vom Gleichheitszeichen steht.
a *= n_fache;
printf("A: %f", a);
a *= n_fache * n_fache;

int b = 0;
b = b + 1;
b += 1;
b ++;



return 0;
}