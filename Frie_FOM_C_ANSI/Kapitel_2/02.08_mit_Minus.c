#include <stdlib.h>
#include <stdio.h>

int main()
{
	int sekunden=0, minuten=0, stunden=0, tage=0;

    // 90.061 Sekunden als Testwert
	printf("\nWie viele Sekunden sollen umgerechnet werden? ");
	scanf("%i",&sekunden);

    // Wieviele Tage passen in die Sekunden?
	tage=sekunden/(24*60*60);
	sekunden = sekunden - tage*(24*60*60);

	// Wieviele Stunden passen in die Restsekunden?
    stunden=sekunden/(60*60);
	sekunden=sekunden - stunden*(60*60);

	// Wieviele Minuten passen in die Restsekunden?
    minuten=sekunden/60;
	sekunden=sekunden - minuten*60;

	printf("\nDas sind:\n");
	printf("%i Tage und\n",tage);
	printf("%i Stunden und\n",stunden);
	printf("%i Minuten und\n",minuten);
	printf("%i Sekunden.\n",sekunden);

	return 0;
}
