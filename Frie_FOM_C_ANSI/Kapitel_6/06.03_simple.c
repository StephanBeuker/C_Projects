
#include <stdio.h>


int main(){

  int array[]={5,9,4,3,0,7,6,1,2,8};


  int i, j;
     for (i = 0; i < 10; i++) {

        for (j = 0; j < 10 - i - 1; j++) {

            if (array[j] > array[j + 1]) {
                int tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
            }
        }
     }

  printf("\nSortiert:");
  i=0;
  while(i<10){

      printf("\nElement %d: %d", i+1, array[i]);
      i++;
   }


   return 0;
}
