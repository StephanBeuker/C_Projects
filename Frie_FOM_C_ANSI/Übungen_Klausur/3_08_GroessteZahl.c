#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, c;

	printf("----------------\n");
	printf("Uebung zu if\n");
	printf("----------------\n");

	printf("\nBitte geben Sie die erste Zahl ein: ");
	scanf("%d",&a);
	printf("\n");

	printf("\nBitte geben Sie die zweite Zahl ein: ");
	scanf("%d",&b);
	printf("\n");

	printf("\nBitte geben Sie die dritte Zahl ein: ");
	scanf("%d",&c);
	printf("\n");

	if(b>a)
        a = b;
    if(c>a)
        a = c;

    printf("Die groesste Zahl lautet %d.", a);

    printf("\n");


    return 0;
}
