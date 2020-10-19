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

    // 22 Zeichen
    /*if(b<a)
        a = b;
    if(c<a)
        a = c;
*/
    // 20 Zeichen
    //a = a<b&a<c?a:b<c?b:c;

    // 20 Zeichen
    a = (a=a<b?a:b)<c?a:c;


    printf("Die kleinste Zahl lautet %d.", a);

    printf("\n");


    return 0;
}
