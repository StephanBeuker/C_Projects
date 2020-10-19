#include<stdio.h>

int main() {

	int tag, monat, jahr;

	printf("--------------------\n");
    printf("Bitte geben Sie ihr Geburtsdatum ein [TT.MM.JJJJ]: ");
    scanf("%d.%d.%d", &tag, &monat, &jahr);
    printf("\nIhr internationales Geburtsdatum: %04d-%02d-%02d\n", jahr, monat, tag);
	printf("--------------------\n");

	return 0;
}


