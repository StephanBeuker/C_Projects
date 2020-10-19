#include<stdio.h>

int main()
{
        //WICHTIG:  Scanf   ->"&a"
        //          Printf  ->"a"
    float a;
    float b;
    float c;

    printf("Bitte geben Sie im Folgenden den Wert fuer die erste Variable ein:\n");
    scanf("%f", &a);
    printf("Bitte geben Sie im Folgenden den Wert fuer die zweite Variable ein:\n");
    scanf("%f", &b);

    c = a * b;
    printf("C = A * B = %f\n", c);

    //das gleiche nochmal für int:
    int x;
    int y;
    int z;

    printf("Bitte geben Sie im Folgenden den Wert fuer die erste Variable ein:\n");
    scanf("%d", &x);
    printf("Bitte geben Sie im Folgenden den Wert fuer die zweite Variable ein:\n");
    scanf("%d", &y);

    z = x * y;
    printf("Z = X * Y = %d\n", z);

    return 0;
}