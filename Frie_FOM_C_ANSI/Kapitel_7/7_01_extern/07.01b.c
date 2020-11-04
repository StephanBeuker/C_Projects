#include <stdio.h>
#include "funktion.h"

// static -> Gueltigkeit nur in Quelldatei
//static int zaehler=0;
int zaehler=0;

int main()
{

	while (zaehler++<10){
		fkt();
    }
	printf("\n");

    return 0;
}
