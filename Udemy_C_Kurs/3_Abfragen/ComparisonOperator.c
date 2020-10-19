#include<stdio.h>
    //6 wichtigsten Vergleichsoperatoren
int main(){
    int a = 22;
    int b = 42;
    int comp;
    
    // a greater than b
    comp = (a > b);
    printf("Comp: %d\n", comp); //1

    // a smaller than b
    comp = (a < b);
    printf("Comp: %d\n", comp); //0

    // a equal b
    comp = (a == b);
    printf("Comp: %d\n", comp); //0

    // a less or equal than b
    comp = (a <= b);
    printf("Comp: %d\n", comp); //1

    // a greater or equal than b
    comp = (a >= b);
    printf("Comp: %d\n", comp); //0

    // a not b
    comp = (a != b);
    printf("Comp: %d\n", comp); //0

    return 0;
}