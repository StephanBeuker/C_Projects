#include <stdio.h>

int main(){

    int vorvor=0;
    int vor=1;
    int fib=0;
    int i,n;

    printf("\t\tFibonacci\n");
    printf("Geben Sie n ein:");
    scanf("%d", &n);

    if(n==0 || n==1){
        printf("f von %d ist %d", n, n);

    }else{

        for(i=2;i<=n;i++){

            fib=vorvor+vor;
            vorvor=vor;
            vor=fib;
        }

        printf("f von %d ist %d\n\n", n, fib);
    }

	return 0;
}
