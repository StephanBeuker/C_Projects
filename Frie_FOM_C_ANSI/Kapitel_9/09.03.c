#include <stdio.h>

struct spender
{
	float betrag;
	char vorname[30];
	char nachname[30];
};

void einlesen(struct spender*);  //x weggelassen, gleiche funktionalität.  (struct spender* x); (struct spender *x)
void ausgeben(struct spender);

int main()
{
	struct spender einSpender;
	einlesen(&einSpender);	//Aderesse Spender übergeben

	printf("\n\n");
	ausgeben(einSpender);


    return 0;
}

void einlesen(struct spender *x)
{
	printf("Vorname und Nachname getrennt durch ein Leerzeichen: ");
	scanf("%s %s",x->vorname,x->nachname);			//"X auf vorname, x auf Nachname"					//Wenn CodeElement vorgegeben, dann genauso benutzen!
	printf("gespendeter Betrag: ");
	scanf("%f",&(x->betrag));
}

void ausgeben(struct spender x)
{
	printf("Spender %s %s gab %.2f Euro.\n",x.vorname,x.nachname,x.betrag);
}
