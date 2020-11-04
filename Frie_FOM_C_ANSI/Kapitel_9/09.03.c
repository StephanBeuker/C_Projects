#include <stdio.h>

struct spender
{
	float betrag;
	char vorname[30];
	char nachname[30];
};

void einlesen(struct spender*);
void ausgeben(struct spender);

int main()
{
	struct spender einSpender;
	einlesen(&einSpender);

	printf("\n\n");
	ausgeben(einSpender);


    return 0;
}

void einlesen(struct spender *x)
{
	printf("Vorname und Nachname getrennt durch ein Leerzeichen: ");
	scanf("%s %s",x->vorname,x->nachname);
	printf("gespendeter Betrag: ");
	scanf("%f",&(x->betrag));
}

void ausgeben(struct spender x)
{
	printf("Spender %s %s gab %.2f Euro.\n",x.vorname,x.nachname,x.betrag);
}
