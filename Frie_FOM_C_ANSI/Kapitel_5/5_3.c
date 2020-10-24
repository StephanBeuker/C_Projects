#include <stdio.h>
#include <stdlib.h>



int main(){

    int i = 5;
    printf("%d\n",i);
    int *i_zeiger=&i;
    printf("%d\n",*i_zeiger);
    int **ij_zeiger = &i_zeiger;
    printf("%d\n",**ij_zeiger);

    return EXIT_SUCCESS;
}