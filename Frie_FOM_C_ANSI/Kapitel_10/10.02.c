#include <stdio.h>

int main()
{
	int array1[5]={023,241,525262,2363,236367674};
	int array2[5];
	int i=0;
	FILE *fp;

    // zahlen.txt im Schreibmodus �ffnen
	if ((fp=fopen("C:\\Users\\StefanBeuker\\Documents\\test.txt","w"))==NULL) //w=write
	{
		printf("Fehler beim Oeffnen der Datei\n");
	}else{

        // jedes Element des Arrays wird Leerzeichengetrennt in die Ausgabedatei gechrieben
    	for (i=0;i<5;i++)
    		fprintf(fp,"%d ",array1[i]);

    	fclose(fp);
    }

    // die Datei zahlen.txt wird im Lesemodus ge�ffnet
    if ((fp=fopen("C:\\Users\\StefanBeuker\\Documents\\test.txt","r"))==NULL) //r=read!
    {
    	printf("Fehler beim zweiten Oeffnen der Datei\n");

    }else{

        // jeder Dezimalwert wird aus der Datei zahlen.txt ausgelesen und in zweites Array geschrieben
    	// als for Schleife
        /*for (i=0;i<5;i++)
    		fscanf(fp,"%d",&feld_aus_datei[i]);*/

    	// oder per while bis EOF
        i = 0;
        int temp;
    	while(fscanf(fp,"%d",&temp)!=EOF){

    	    array2[i] = temp;
    	    printf("%d\n",array2[i]);
    	    i++;
        }

    	fclose(fp);

    }


	return 0;
}
