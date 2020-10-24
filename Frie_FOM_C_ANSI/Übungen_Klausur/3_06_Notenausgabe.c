#include <stdio.h>

int main()
{
	int punkte;

	printf("\nBitte geben Sie die Punkte ein: ");
	scanf("%d",&punkte);
	printf("\n");

	if(punkte==10){
        printf("sehr gut");

    }else if(punkte==9){
        printf("gut");

    }else if(punkte==8){
        printf("befriedigend");

    }else if(punkte==7){
        printf("ausreichend");

    }else if(punkte==6){
        printf("mangelhaft");

    }else if(punkte<6 && punkte>=0){
        printf("ungenuegend");

    }else{
        printf("ungültige Punktzahl");
    }


    printf("\n");


    return 0;
}
