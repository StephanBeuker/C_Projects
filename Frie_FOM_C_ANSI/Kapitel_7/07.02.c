#include <stdio.h>

int iZaehlwert;

void myCounter(void)
{
	printf("\nAnfangswert von iZaehlwert (global): %d\n",iZaehlwert);
	while (iZaehlwert++<5)
		myAusgabe();
}

void myAusgabe(void)
{
	printf("Wert von iZaehlwert (global): %d\n",iZaehlwert);
}

int main()
{
	int iZaehlwert;

	for (iZaehlwert=0;iZaehlwert>=-3;iZaehlwert--)
		printf("iZaehlwert in main(): %d\n",iZaehlwert);
	myCounter();

	printf("\niZaehlwert in main(): %d\n",iZaehlwert);


    return 0;
}
