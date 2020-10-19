#include <stdio.h>

int main(int argc, char *argv[])
{
	int tagesZahl;

	printf("Bitte geben Sie eine Zahl fuer einen Wochentag ein: ");
	scanf("%d",&tagesZahl);

	switch (tagesZahl)
	{
		case 1:
		case 2:
		case 3:
			printf("erste Wochenhaelfte\n");
			break;
		case 4:
		case 5:
			printf("zweite Wochenhaelfte\n");
			break;
		case 6:
		case 7:
			printf("Wochenende\n");
			break;
		default:
			printf("fehlerhafte Eingabe\n");
	}


    return 0;
}
