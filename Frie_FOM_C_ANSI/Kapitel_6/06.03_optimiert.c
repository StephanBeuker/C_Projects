
#include <stdio.h>

void ausgeben(int array[]){

  int i=0;
  while(i<10){

      printf("%d\t", array[i]);
      i++;
   }

   printf("\n");
}
//-------------------------------------------------------------

int main(){

  int array[]={5,9,4,3,0,7,6,1,2,8};
  ausgeben(array);
  int richtig;


  int i, j;
     for (i = 0; i < 10; i++) {

        richtig = 0;

        for (j = 0; j < 10 - i - 1; j++) {

            if (array[j] > array[j + 1]) {
                int tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
                richtig=0;
            }else{
                richtig++;
            }
        }

        ausgeben(array);
        i+=richtig;

     }

  printf("\nSortiert:");

   return 0;
}
