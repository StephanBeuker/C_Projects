#include<stdio.h>

void fkt(void)
{
    extern int zaehler;
	static int lokal1=10;
	int lokal2=10;

	lokal1--;
	lokal2--;

	printf("Zaehler=%d\tlokal1=%d\tlokal2=%d\n",zaehler,lokal1,lokal2);
}
