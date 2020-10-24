#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int punkte;

	printf("Bitte geben Sie die Punktzahl ein: ");
	scanf("%d",&punkte);

	switch (punkte)
	{
		case 1:
		case 2:
		case 3:
        case 4:
        case 5:
			printf("ungenuegend\n");
			break;
        case 6:
            printf("mangelhaft");
            break;
		case 7:
            printf("ausreichend\n");
			break;
		case 8:
			printf("befriedigend\n");
			break;
		case 9:
            printf("gut\n");
			break;
		case 10:
			printf("sehr gut\n");
			break;
		default:
			printf("fehlerhafte Eingabe\n");
	}


    return 0;
}
