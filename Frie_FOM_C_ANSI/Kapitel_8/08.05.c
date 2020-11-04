/*
 * String To Upper
 * ersetzt in einem String Kleinbuchstaben durch Groﬂbuchstaben
**/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

void stringToUpper(char*);

int main() {
	char string[] = "Schweigen ist ein Zaun um Weisheit.";
	printf("vorher: \t%s\n", string);
	stringToUpper(string);
	printf("nachher:\t%s\n", string);

    return 0;
}

void stringToUpper(char *string) {
	int i;
	int len = strlen(string);
	for(i=0; i<len; i++) {
		if(string[i] >= 'a' && string[i] <= 'z') {
			string[i] -= 32;
			// string[i] = toupper(string[i]);
		}
	}
}

