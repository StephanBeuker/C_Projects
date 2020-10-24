#include <stdio.h>

int main()
{
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


    return 0;
}
