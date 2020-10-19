#include<stdio.h>

int main() {
	float a, b;

	printf("Taschenrechner\n");
	printf("\nGeben Sie die 1. Zahl ein: ");
	scanf("%f", &a);

	printf("\nGeben Sie die 2. Zahl ein: ");
	scanf("%f", &b);

	printf("\nDie Summe ergibt %.2f\n", a+b);

	return 0;
}
