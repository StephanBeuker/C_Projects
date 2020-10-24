#include <stdio.h>

int main()
{
	int alter;

	printf("\nBitte geben Sie das Alter ein: ");
	scanf("%d",&alter);
	printf("\n");

	if(alter<18 && alter>=0){
        printf("Kind/Jugendlicher");

    }else if(alter<67 && alter >=18){
        printf("Erwachsener");

    }else if(alter>=67){
        printf("Rentner");

    }else{
        printf("Falsche Eingabe!");
    }

    printf("\n");


    return 0;
}