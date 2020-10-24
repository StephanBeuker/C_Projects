#include <stdio.h>

int main()
{
	int zahl, anzahl=0;

	printf("\nBitte geben Sie eine Zahl ein: ");
	scanf("%d", &zahl);

	while(zahl%5==0 && zahl != 0){
        anzahl++;
        zahl = zahl/5;

    }

    printf("Die eingegebene Zahl kann %d mal durch 5 geteilt werden.\n\n", anzahl);


    return 0;
}
