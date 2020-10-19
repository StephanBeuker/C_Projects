#include<stdio.h>

int main() {

	char a, b, temp;

	printf("--------------------\n");

    printf("\nGeben sie ein Zeichen ein: ");
    scanf("%c%c", &a, &temp);


    printf("\nGeben sie ein Zeichen ein: ");
    scanf("%c%c", &b, &temp);

    printf("\nDie ASCII-Codes ihrer Zeichen sind %d und %d\n", a, b);

	printf("--------------------\n");


	return 0;
}


