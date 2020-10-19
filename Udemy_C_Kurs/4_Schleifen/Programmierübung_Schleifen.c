#include<stdio.h>
#include<stdlib.h>

//Implementierung einer verschachtelten For-Schleife, um Muster aus dem Quiz zu erlangen:
    //meine Variante:
int main(){

    for (int i = 0; i <= 5; i++)
    {
        for (int j = 0; j <= 5; j++)
        {
            //0te Zeile
            (i==0 && j==0)?printf("<    ") : 1;
            (i==0 && j>0 && j<5)?printf("   ^   ") : 1;
            (i==0 && j==5)?printf("    >\n") : 1;
            //1te
            (i==1 && j==0)?printf("<    ") : 1;
            (i==1 && j>0 && j<5)?printf(" (%d,%d) ",i,j) : 1;
            (i==1 && j==5)?printf("    >\n") : 1;
            //2te Zeile
            (i==2 && j==0)?printf("<    ") : 1;
            (i==2 && j>0 && j<5)?printf(" (%d,%d) ",i,j) : 1;
            (i==2 && j==5)?printf("    >\n") : 1;
            //3te Zeile
            (i==3 && j==0)?printf("<    ") : 1;
            (i==3 && j>0 && j<5)?printf(" (%d,%d) ",i,j) : 1;
            (i==3 && j==5)?printf("    >\n") : 1;
            //4te Zeile
            (i==4 && j==0)?printf("<    ") : 1;
            (i==4 && j>0 && j<5)?printf(" (%d,%d) ",i,j) : 1;
            (i==4 && j==5)?printf("    >\n") : 1;
            //5te Zeile
            (i==5 && j==0)?printf("<    ") : 1;
            (i==5 && j>0 && j<5)?printf("   v   ") : 1;
            (i==5 && j==5)?printf("    >\n") : 1;
        }
        
    }
    printf("\n");
    printf("\n");
    printf("\n");
    //Tutor Variante:
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (j == 0){
                printf("<\t");
            }
            else if (j == 5){
                printf(">\t");
            }
            else if (i == 0) {
                printf("  ^\t");
            }
            else if (i == 5) {
                printf("  v\t");
            }
            else {
                printf("(%d,%d)\t", i, j);
            }
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");
    printf("\n");

    //Kombination 
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            (j==0)?printf("<\t") : 1;//
            (j==5)?printf(">\t") : 1;//
            (i==0 && j < 4)?printf("  ^\t") : 1;
            (i==5 && j < 4)?printf("  v\t") : 1;
            (i!=0 && i!=5 && j!=0 && j!=5)?printf("(%d,%d)\t",i,j) : 1;//
        }
        printf("\n");       
    }



    return EXIT_SUCCESS;
}