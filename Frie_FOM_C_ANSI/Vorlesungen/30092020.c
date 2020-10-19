#include <stdio.h>

int main()
{

    
    int a, b;
    printf("Bitte geben Sie eine Zahl ein:\n ");
    scanf("%d",&a);
    //fflushstdin();
    printf("Bitte geben Sie eine Zahl ein:\n ");
    scanf("%d",&b);
    if (a < b)
    {
        printf("%d ist kleiner als %d.\n",a,b);
    }
    else if (a > b)
    {
        printf("%d ist größer als %d.\n", a,b);
    }
    else
    {
        printf("%d ist gleich %d.\n",a,b);
    }
    


    return 0;
}