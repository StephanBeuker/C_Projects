/* GGT rekursiv */
#include <stdio.h>

int ggt(int, int);

int main() {
   int a, b;

   printf("ggt = groesster gemeinsamer Teiler\n");
   printf("Zahl 1: ");
   scanf("%i",&a);
   printf("Zahl 2: ");
   scanf("%i",&b);
   printf("Der ggT von %i und %i ist %i\n", a, b, ggt(a,b));


   return 0;
}

int ggt(int a, int b) {
   if(a==b){
       return a;

   }else if(a<b){

       return ggt(a, b-a);

   }else{

       return ggt(a-b, b);

   }

}
