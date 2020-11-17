#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void stringToUpper(char *string);

int main()
{

	char string[] = "Schweigen ist der Zaun zum Weisheit";
	printf("%s\n", string);
	stringToUpper(string);
	printf("%s\n", string);

	return EXIT_SUCCESS;
}

void stringToUpper(char *string){

	int i;
	int stringLength = strlen(string);
	for (i = 0; i < stringLength; i++)
	{
		if (string[i] >= 'a' && string[i] <= 'z')
		{
			string[i] = toupper(string[i]);
		}
	}

}
