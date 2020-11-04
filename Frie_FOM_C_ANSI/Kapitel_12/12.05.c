#include<stdio.h>
struct kunde
{
    int betrag;
	char *name;
    struct kunde *next;
};

typedef struct kunde KUNDE;

KUNDE *anfang=NULL;
int main()
{
    append(19, "Meier12");
    append(17, "Meier2");
    append(7, "Meier7");
    append(1, "Meier1");
    print();
    //loesche();

    sort();
    print();

}
void sort()
{
    int laenge =0;
    KUNDE *zeiger, *z1, *z2, *vor;
    zeiger = anfang;
    while(zeiger!=NULL)
    {
        laenge++;
        zeiger=zeiger->next;
    }
    printf("Laenge der Liste:%d\n",laenge);
    int i,j;
    for(i=0; i<laenge; i++)
    {
        zeiger = anfang;
        vor=NULL;
        for(j=0;j <laenge - 1 - i; j++)
        {
            z1= zeiger;
            z2= zeiger->next;
            if(z1->betrag > z2->betrag)
            {
                if(vor== NULL)
                {
                    anfang = z2;
                    z1->next=z2->next;
                    anfang->next = z1;
                    zeiger=z1;
                    vor = anfang;
                }
                else
                {
                    vor->next=z2;
                    zeiger=z1;
                    z1->next = z2->next;
                    z2->next= z1;
                    vor=z2;
                }
            }
            else
            {
                vor=zeiger;
                zeiger = zeiger->next;
            }
        }
    }
}
void loesche()
{
    KUNDE *zeiger;
    if(anfang != NULL)
    {
        zeiger=anfang->next;
        free(anfang);
        anfang=zeiger;
    }
}
void print()
{
    KUNDE *zeiger;
    zeiger = anfang;
    printf("Ausgabe:\n");
    while(zeiger!=NULL)
    {
        printf("%02d \t%s \n",zeiger->betrag, zeiger->name);
        zeiger=zeiger->next;
    }
}
void append(int betrag, char *name)
{
    KUNDE *zeiger;
    if(anfang == NULL)
    {
        anfang = malloc(sizeof(KUNDE));
        anfang->betrag = betrag;
        anfang->name=name;
        anfang->next=NULL;
    }
    else
    {
        zeiger=anfang;
        while (zeiger->next != NULL)
        {
            zeiger = zeiger->next;
        }
        zeiger->next = malloc(sizeof(KUNDE));
        zeiger = zeiger->next;
        zeiger->betrag = betrag;
        zeiger->name = name;
        zeiger->next = NULL;

    }
}
