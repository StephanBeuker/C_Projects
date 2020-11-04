
#include <stdio.h>

int main()
{
  int array[8][8]={0};
  int i;
  int* zgr = &array[0][0];

  for (i=0;i<8;i++){

       *zgr = 1;
       zgr+=9;
  }


//----------------------------------------------------------
// ausgeben
  int j;
  for(i=0; i<8; i++){

    for(j=0; j<8; j++){

        printf("%i ", array[i][j]);
    }
    printf("\n");
  }

   return 0;
}
