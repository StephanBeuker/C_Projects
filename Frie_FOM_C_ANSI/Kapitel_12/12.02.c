#include<stdio.h>
struct kunde
{
    int betrag;
	char* name;
    struct kunde *next;
};

typedef struct kunde KUNDE;


int main()
{
    KUNDE *Liste ;
    Liste = NULL;

    append(&Liste, 1, "Mueller");
    append(&Liste, 3,"Meier");
    append(&Liste, 2,"Franz");
    printliste(Liste); /* zeige alle Elemente der Liste an */

    return 0;
}
void append(KUNDE **Liste, int betrag, char* name)
{
    KUNDE *neu;
    while (*Liste !=NULL )
    {
        Liste = &(*Liste)->next;
    }

    neu = malloc(sizeof(KUNDE));
    neu->betrag = betrag;
    neu->name = name;
    neu->next = NULL;

    *Liste = neu;

}
void printliste(const KUNDE *kunde)
{

    for( ; kunde != NULL ; kunde = kunde->next )
    {
        printf("%d %s\n",kunde->betrag, kunde->name);
    }

}
