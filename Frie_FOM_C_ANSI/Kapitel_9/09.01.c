#include <stdio.h>

struct spender
{
	float betrag;
	char vorname[30];
	//char nachname[30];
	char* nachname;
};


int main()
{
	struct spender einSpender;

    // Hinweis zu einer möglichen Zuweisung
    einSpender.nachname = "Test";

    // ein Aray kann niemals auf der linken Seite einer Zuweisung stehen!
    strcpy(einSpender.vorname, "Test");
    //--------------------------------------

    // mit eckigen Klammer kann direkt eingelesen werden
    //scanf("%s",einSpender.vorname);

    // wenn mit Zeiger deklariert, geht es so:
    /*char temp[20];
    scanf("%s",temp);
    einSpender.nachname = temp;*/

    // Bei Zahlenwerten geht es ohnehin per einfacher Zuweisung
    scanf("%f", &(einSpender.betrag));

	printf("\n\n");
	printf("Spender %s %s gab %.2f Euro.\n",einSpender.vorname,einSpender.nachname,einSpender.betrag);


    return 0;
}
