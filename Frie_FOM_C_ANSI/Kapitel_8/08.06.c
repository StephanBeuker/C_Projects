#include<stdio.h>
#include<string.h>

char * stringReplace(char*, char*, char*);

int main() {
	char string[40] = "In der Ruhe liegt die Kraft.";
	char search[] = "Ruhe";
	char replace[] = "Stille";

	printf("vorher: \t%s\n", string);
	stringReplace(search, replace, string);
	printf("nachher: \t%s\n", string);

    return 0;
}

char * stringReplace(char *search, char *replace, char *string) {
	char *tempString, *searchStart;
	int len=0;

	// Speicher reservieren
	tempString = (char*) malloc(strlen(string) * sizeof(char));
	if(tempString == NULL) {
		return NULL;
	}

	// preuefe ob Such-String vorhanden ist
	searchStart = strstr(string, search);
	if(searchStart == NULL) {
		return string;
	}

	// temporaere Kopie anlegen
	strcpy(tempString, string);

	// ersten Abschnitt in String setzen
	len = searchStart - string;
	string[len] = '\0';

	// zweiten Abschnitt anhaengen
	strcat(string, replace);

	// dritten Abschnitt anhaengen
	len += strlen(search);
	strcat(string, (char*)tempString+len);

	// Speicher freigeben
	free(tempString);

	return string;
}
