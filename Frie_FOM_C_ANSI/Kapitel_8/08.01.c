#include<stdio.h>

int main() {

	int zeilen=0;
	char zeile[5];

    while(*(gets(zeile))!='\0'){

    //while(gets(zeile)!=NULL){

            zeilen++;
    }

	printf("\nEs wurden %d Zeilen eingegeben.\n\n",zeilen);

	return 0;
}
