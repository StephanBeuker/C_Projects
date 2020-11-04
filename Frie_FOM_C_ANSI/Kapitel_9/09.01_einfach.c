#include <stdio.h>

struct spender
{
	float betrag;
	char vorname[30];
	char nachname[30];
};


int main()
{
	struct spender einSpender;

    scanf("%s",einSpender.vorname);
    scanf("%s",einSpender.nachname);

    scanf("%f", &einSpender.betrag);

	printf("\n\n");
	printf("Spender %s %s gab %.2f Euro.\n",einSpender.vorname,einSpender.nachname,einSpender.betrag);


    return 0;
}

