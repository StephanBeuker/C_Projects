#include <stdio.h>

int main()
{   
   /* int i;
    for ( i = 1; i <= 25; i++)
    {
        
        printf("%d\n",i);
    }*/

    /*int i;
    for ( i = 1; i < 10; i++)
    {
        printf("%d: **********\n",i);
    }*/

    /*
    
    klappt noch nocht !!
    int a, b,c=0;
    do
    {
        printf("Zahl eingeben: ");
        scanf("%d", &a);
        printf("Zahl eingeben: ");
        scanf("%d", &b);
        if (a>b)
        {
            a=c;
        }else if (a<b)
        {
             b=c;
        }
        
        
        
    } while (a!=0|| b!=0);
    printf("Die größte eingegeben Zahl war : %d",c);
   */

    /*
    int zahl=o, anzahl=0;
    printf("Bitte Zal eingeben\n");
    scanf("%i", &zahl);

    while (zahl%5==0 && zahl != 0)
    {
        anzahl++;
        zahl=zahl/5;
    }
    printf("die eingegebene Zahl kann %i mal durch 5 geteilt werden \n", anzahl);
    */

   /*int i = 1;
    do
    {
        printf("%d\n", i);
        i ++;
    } while (i<=25);
    
    int k =0,j=0;

    do
    {
        do
        {
            printf("*");
            j++;
        } while (j<=10);
        
        k++;
        j=1;
    } while (k<=10);
    */

   /*
   int i;

   for ( i = 1; i < 26; i++)
   {
       printf("%d\n", i);
   }
   

   //20
    int j=0,k=0;
    for ( j = 0; j < 11;j++)
    {
        for ( k = 0; k < 11; k++)
        {
            printf("*");
            
        }
        printf("\n");
    }*/
    

    //3.21
    /*int l = 0, m=0, z=0;
    for ( l = 1; l < 11; l++)
    {
        for ( m= 1; m < 11; m++)
        {
            z=l*m;
            printf("%d * %d = %d\n", l,m,z);
        }
        printf("\n");
    }*/
    

    //3.21
    /*int n =0, o=0, ergebnis=1;
    printf("Zahl eingeben:");
    scanf("%d", n);

    for ( o = 1; o < n; o++)
    {
        ergebnis = ergebnis *n;

    }
    printf("Fakultät ist: %d",n);*/


    //fibunacci 3.22, klappt noch nicht !!
    int n=0;
    int fib=0;
    int f0=0; 
    int f1=1;
    int i;

    printf("\t\tFibonacci\n");
    printf("Geben Sie n ein:");
    scanf("%d", &n);

    if (n==0 || n==1)
    {
        printf("f von %d ist  %d\n\n", n, n);
    }
    else
    {
         for ( i == 2; i <= n; i++)
        {
              fib=f0-f1;
             f0=f1;
             f1=fib;
        }
        printf("f von %d ist %d\n\n", n, fib);
    }
    

   
    
    
   
         



    return 0;
}