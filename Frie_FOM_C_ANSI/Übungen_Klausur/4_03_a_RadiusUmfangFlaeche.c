#include <stdio.h>

int main(void)
{
	float radius=0;

	printf("\nBitte geben Sie den Radius des Kreises ein: ");
	scanf("%f",&radius);
	printf("\n");

	printf("Der Umfang betraegt %f\n",2*3.1416*radius);
	printf("Der Flaecheninhalt betraegt %f\n",3.1416*radius*radius);


	return 0;
}
