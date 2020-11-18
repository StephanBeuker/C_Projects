#include <stdio.h>

static int zaehler=0;

void fkt();

int main()
{
	while (zaehler++<10){
		fkt();
    }
	printf("\n");

    return 0;
}

void fkt(){
    static int lokal1=10;
	int lokal2=10;

	lokal1--;
	lokal2--;

	

	printf("Zaehler=%d\tlokal1=%d\tlokal2=%d\n",zaehler,lokal1,lokal2);
}

