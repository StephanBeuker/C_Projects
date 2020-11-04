
#include <stdio.h>
#define ZEILEN 5
//#define SPALTEN 3
#define SPALTEN 4

int main(){

    // Tripel-Initialisierung
	//int array[ZEILEN][SPALTEN]={{1,2,3},{4,5,6},{7,8,9},{10,11,12},{13,14,15}};

	// Quadrupel-Initialisierung
	int array[ZEILEN][SPALTEN]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{12,13,14,15},{16,17,18,19}};


	int i, j, produkt;

	for (i=0;i<ZEILEN;i++){

		produkt=1;
		for (j=0;j<SPALTEN;j++){

			produkt*=array[i][j];
		}
		printf("%d\n",produkt);
	}


	return 0;
}
