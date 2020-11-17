#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;

    printf("\nBitte geben Sie die erste Zahl ein: ");
    scanf("%d",&a);
    printf("\n");

    printf("\nBitte geben Sie die zweite Zahl ein: ");
    scanf("%d",&b);
    printf("\n");

    printf("\nBitte geben Sie die dritte Zahl ein: ");
    scanf("%d",&c);
    printf("\n");
    
    a = (a=a<b?a:b)<c?a:c;


    printf("Die kleinste Zahl lautet %d.", a);

    printf("\n");


    return 0;
}
