#include<stdio.h>
#include<string.h>

char *stringReplace(char*, char*, char*);

int main() {
	char string[40] = "In der Ruhe liegt die Kraft.";
	char search[] = "Ruhe";
	char replace[] = "Stille";

	printf("vorher: \t%s\n", string);
	stringReplace(search, replace, string);
	printf("nachher: \t%s\n", string);

    return 0;
}

char *stringReplace(char *search, char *replace, char *string) {
	char *tempString, *searchStart;
	int len=0;

	if(tempString == NULL) {
		return NULL;
	}
	//Kopie von string anlegen, damit wir nacher den zweiten Teil noch haben wenn er abgeschintten wird
	//Suche posi wo Ruhe beginnt
	//an der posi string terminieren
	//dann replace dranhängen
	//aus der Kopie die pos nach search finden und ab den string anhängen

	//Speicher reservieren
	tempString = (char*) malloc(strlen(string) * sizeof(char));

	// temporaere Kopie anlegen
	strcpy(tempString, string);
	char *startsuche;
	startsuche = strstr(string, search);

	// ersten Abschnitt in String setzen
	len = searchStart - string;	//Anzahl Zeichen bis "Ruhe"
	string[len] = '\0';			//terminierung an der Stelle len.
	//R ist jetz ersetzt durch terminierungszeichen

	// zweiten Abschnitt anhaengen
	strcat(string, replace);

	// dritten Abschnitt anhaengen
	len += strlen(search);
	strcat(string, (char*)tempString+len); //tempstring#len setzt den pointer in der kpoie vor das "l"

	// Speicher freigeben
	free(tempString);

	return string;
}
