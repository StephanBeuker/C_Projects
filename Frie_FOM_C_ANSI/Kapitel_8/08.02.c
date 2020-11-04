
#include <stdio.h>

int main()
{

unsigned int tagNummer;
	char *wochentage[7];
	wochentage[0]="Montag";
	wochentage[1]="Dienstag";
	wochentage[2]="Mittwoch";
	wochentage[3]="Donnerstag";
	wochentage[4]="Freitag";
	wochentage[5]="Samstag";
	wochentage[6]="Sonntag";


	//char *wochentage[]={"Montag", "Dienstag", "Mittwoch", "Donnerstag", "Freitag", "Samstag", "Sonntag"};
	//char wochentage[][11]={"Montag", "Dienstag", "Mittwoch", "Donnerstag", "Freitag", "Samstag", "Sonntag"};



	printf("\nBitte geben Sie die Nummer eines Wochentages ein: ");
	scanf("%d",&tagNummer);
	printf("\n\n");

    printf("Das ist ein %s\n",wochentage[tagNummer-1]);

	return 0;
}
