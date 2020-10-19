#include <stdlib.h>
#include <stdio.h>

int main()
{
	int wert1=7, wert2=5, wert3=10;
	//int wert1=7, wert2=5, wert3=-10;


	if (wert1<wert2<wert3)
	{
		printf("\n");
		printf("wert2=%d",wert2);
		printf("\n");
	}
	else
	{
		printf("\n");
		printf("Keine Ausgabe");
		printf("\n");
	}


	return 0;
}
