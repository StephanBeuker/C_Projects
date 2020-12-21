#include <stdio.h>
#define ADD(a,b) ((a)+(b))  //Klammern wichtig, sonst punkt vor strich


int main(){

    int rechnung = ADD(1,2) * ADD(2,4);
    printf("%d\n", rechnung);



    return 0;
}