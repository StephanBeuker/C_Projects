#include<stdio.h>
struct element_type
{
    int value;
    struct element_type *next;
};

typedef struct element_type element;


int main()
{
    element *Liste = malloc(sizeof(element));
    Liste->value = 1;
    Liste->next = NULL;

    element *neuesElement = malloc(sizeof(element));
    Liste->next = neuesElement;
    neuesElement->next = NULL;
    neuesElement->value = 2;

    element *letztesElement = malloc(sizeof(element));
    neuesElement->next = letztesElement;
    letztesElement->next = NULL;
    letztesElement->value = 3;

    while (Liste != NULL )
    {
        printf("%d\n",Liste->value);
        Liste = Liste->next;
    }
    return 0;
}

