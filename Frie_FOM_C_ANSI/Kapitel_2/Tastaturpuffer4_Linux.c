#include<stdio.h>

void fflushStdin(){
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}


int main() {

	char a, b;

	printf("--------------------\n");

    printf("\nGeben sie ein Zeichen ein: ");
    scanf("%c", &a);
    fflushStdin();

    printf("\nGeben sie ein Zeichen ein: ");
    scanf("%c", &b);

    printf("\nDie ASCII-Codes ihrer Zeichen sind %d und %d\n", a, b);

	printf("--------------------\n");


	return 0;
}


