#include <stdio.h>

int main()
{
	int feld_orig[5]={0,1,2,3,4};
	int feld_aus_datei[5];
	int i=0;
	FILE *fp;

    // zahlen.txt im Lese- und Schreibmodus öffnen
	if ((fp=fopen("zahlen.txt","r+"))==NULL)
	{
		printf("Fehler beim Oeffnen der Datei\n");
	}else{

        // jedes Element des Arrays wird Leerzeichengetrennt in die Ausgabedatei gechrieben
    	for (i=0;i<5;i++)
    		fprintf(fp,"%d ",feld_orig[i]);


    	fseek(fp, 0, SEEK_SET);

    	// oder per while bis EOF
        i = 0;
    	while(fscanf(fp,"%d",&feld_aus_datei[i])!=EOF)
    	    i++;

    	fclose(fp);

        // Ausgabe des zweiten Arrays
    	for (i=0;i<5;i++)
    		printf("%d\n",feld_aus_datei[i]);

    }


	return 0;
}
