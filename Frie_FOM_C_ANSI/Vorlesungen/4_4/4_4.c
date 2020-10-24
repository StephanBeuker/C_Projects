#include <stdio.h>
#include <stdlib.h>
//nochmal ran!!
ggt(int, int);

int main(){

    int a,b;
    printf("Zahl 1 eingeben:");
    a = scanf("%d\n", &a);
    fflush(stdin);
    printf("Zahl 1 eingeben:");
    b = scanf("%d\n", &b);
   
    int ggt1 = ggt(a,b);
    printf("Zahl 1:%d, Zahl2: %d; GGT: %d ", a, b, ggt1);

    return EXIT_SUCCESS;
}

ggt(int a, int b){
if (a == b){
        return a;
    }
    else if (a > b){
        return ggt(a-b, b);
    }
    else if (a < b){
        return ggt(a, b-a);
    }
}