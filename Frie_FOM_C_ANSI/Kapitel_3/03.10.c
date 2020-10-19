#include <stdio.h>

int main()
{
	int tagNummer;
	printf("\nBitte geben Sie die Nummer eines Wochentages ein: ");
	scanf("%d",&tagNummer);
	printf("\n");

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
		default: printf("Keine gueltige Nummer für einen Wochentag.\n");
	}


    return 0;
}
