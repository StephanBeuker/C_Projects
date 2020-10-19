#include <stdio.h>
#include <stdlib.h>
int main()
{
    //3.05
    int a;
    printf("Eingabe ihres ALters:\n");
    scanf("%d", &a);
    if (a<18 && a >=0)
    {
        printf("U18\n");
    }
    else if(a>67)
    {
        printf("Rentner\n");
    }
    else
    {
        printf("Erwachsener\n");
    }

    //3.06
    int b;
    printf("Eingabe der Note:\n");
    scanf("%d", &b);
    if (b ==10)
    {
        printf("sehr gut\n");
    }
    else if(b == 9)
    {
        printf("gut\n");
    }
    else if(b == 8)
    {
        printf("befriedigend\n");
    }
    else if(b == 7)
    {
        printf("ausreichend\n");
    }
    else if(b == 6)
    {
        printf("mangelhaft\n");
    }
    else
    {
        printf("ungenügend");
    }
    

    //3.08
    int u,v,w;
    printf("Bitte geben Sie eine Zahl ein:\n ");
    scanf("%d",&u);
    printf("Bitte geben Sie eine zweite Zahl ein:\n ");
    scanf("%d",&v);
    printf("Bitte geben Sie eine dritte Zahl ein:\n ");
    scanf("%d",&w);

    //a=(a=a<b?a:b)<c?a:c;
    u=(u=u<v?u:v)<w?u:w;
    if(b>a) a=b;
    if(c>a) c=a;
    printf("Die kleinste Zahl lautet: %d\n", u)



    return 0;
}