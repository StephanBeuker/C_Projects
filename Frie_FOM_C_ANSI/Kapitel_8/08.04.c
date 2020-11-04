#include<stdio.h>
#include<string.h>

int main() {

	char string[] = "/home/oliver/FOM/2014_WS/PP/Test.ods";

    // Dateiendung
    char *ptr = strrchr(string, '.');
	ptr++;
	printf("Extension:\t%s\n", ptr);

	// Dateiname
	ptr = strrchr(string, '/');
	ptr++;

	printf("Dateiname:\t%s\n", ptr);

	// Verzeichnis
	ptr--;
    *ptr = '\0';
	printf("Verzeichnis:\t%s\n", string);

    /*char kopie[100];
	strcpy(kopie, string);

	ptr = strrchr(kopie, '/');
	*ptr = '\0';
	printf("Verzeichnis Kopie: %s\n", kopie);*/


	return 0;
}
