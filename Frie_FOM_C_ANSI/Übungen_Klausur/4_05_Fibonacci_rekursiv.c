/* Fibonacci rekursiv */
#include <stdio.h>

int fibo(int);

int main() {
   int f;

   printf("Fibonacci-Zahlen - Geben Sie n >=0 ein:");
   scanf("%d",&f);
   printf("F(%d) = %d\n", f, fibo(f));


   return 0;
}

int fibo(int n) {

   if(n==0 || n==1){
    return n;

   }else{
      return (fibo(n-1)+fibo(n-2));
   }
}
