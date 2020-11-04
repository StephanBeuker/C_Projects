#include <stdio.h>

int main()
{
	FILE *fp;

	//fp=fopen("daten.txt","w");
	fp=fopen("daten.txt","a");

	if (fp==NULL)
	{
		printf("Fehler beim Oeffnen der Datei\n");
	}
	else{
		printf("Datei erfolgreich geoeffnet\n");

	    fclose(fp);
	    printf("Datei geschlossen\n");
    }


	return 0;
}
