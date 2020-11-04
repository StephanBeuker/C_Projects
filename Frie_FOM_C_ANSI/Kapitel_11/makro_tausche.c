#include<stdio.h>

#define TAUSCHE(a, b, typ) { typ temp; temp=b; b=a; a=temp; }

int main() {
    int zahla=4, zahlb=7;
    printf("zahl A: %d\nzahl B: %d\n", zahla, zahlb);

    TAUSCHE(zahla, zahlb, int);
    // wird ersetzt zu:
    //{ int temp; temp=zahlb; zahlb=zahla; zahla=temp; };

    printf("zahl A: %d\nzahl B: %d\n", zahla, zahlb);

    return 0;
}
