#include<stdio.h>

#define PI 3.141592653589793

int main() {
	int durchmesser;
	durchmesser = 5;

	printf("Umfang Kreis mit Duchmesser %i cm: ", durchmesser);

    float umfang = PI*durchmesser;
    printf("%3.2f cm\n", umfang);

	return 0;
}
