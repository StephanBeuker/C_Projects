#include <stdio.h>

int main()
{


    int wert1=7, wert2=5, wert3=10;
  
    if (wert1 < wert2 < wert3) //wert 1 > wert2 = false -> 0; 0kleiner als wert3? ja . wert 2 ausgegeben...
    {
        printf("%d", wert2);
    }
    else
    {
        printf("nicht ausgeführt");
    }
    
    printf("WErt für wahr : %d\tWErt fuer falsch: %d\n", 2<3,7 !=7);
    
    

    return 0;
}