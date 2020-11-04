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
    KUNDE *Liste = malloc(sizeof(KUNDE));
    Liste->betrag = 100;
    Liste->name = "Meier";
    Liste->next = NULL;

    KUNDE *neuesElement = malloc(sizeof(KUNDE));
    Liste->next = neuesElement;
    neuesElement->next = NULL;
    neuesElement->betrag = 200;
    neuesElement->name = "Franz";

    KUNDE *letztesElement = malloc(sizeof(KUNDE));
    neuesElement->next = letztesElement;
    letztesElement->next = NULL;
    letztesElement->betrag = 300;
    letztesElement->name = "Toni";


    while (Liste != NULL )
    {
        printf("%d %s\n",Liste->betrag, Liste->name);
        Liste = Liste->next;
    }
    return 0;
}

