#include <stdio.h>

int main()
{
	int i=5;

	int *i_zeiger;
	i_zeiger=&i;
	// alternativ
	// int *i_zeiger = &i;

	printf("Der Inhalt der Variablen\n");
	printf("direkter Zugriff: %d\n",i);
	printf("indirekter Zugriff: %d\n\n",*i_zeiger);

	printf("Die Adresse der Variablen\n");
	printf("Zugriff ueber Variable: %p\n", &i);
	printf("Zugriff ueber Zeiger: \t%p\n", i_zeiger);



    return 0;
}
